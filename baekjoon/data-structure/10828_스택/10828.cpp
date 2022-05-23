#include <iostream>
#include <stack>

using namespace std;

stack<int> result;

void push();
void pop();
void size_func();
void empty_func();
void top();

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;
  
  for (int i=0; i<N; i++) {
    string command;
    cin >> command;
    if (command.compare("push") == 0) {
      push();
    }
    else if (command.compare("pop") == 0) {
      pop();
      if (i != N-1)
        cout << "\n";
    }
    else if (command.compare("size") == 0) {
      size_func();
      if (i != N-1)
        cout << "\n";
    }
    else if (command.compare("empty") == 0) {
      empty_func();
      if (i != N-1)
        cout << "\n";
    }
    else { // 문제에 나와있지 않은 명령이 주어지는 경우는 없다
      top();
      if (i != N-1)
        cout << "\n";
    }
  }
  
  return 0;
}

void push() {
  int number;
  cin >> number;
  result.push(number);
}

void pop() {
  if (result.empty())
    cout << -1;
  else {
    cout << result.top();
    result.pop();
  }
}

void size_func() {
  cout << result.size();
}

void empty_func() {
  result.empty() ? cout << 1 : cout << 0;
}

void top() {
  if (result.empty())
    cout << -1;
  else
    cout << result.top();
}