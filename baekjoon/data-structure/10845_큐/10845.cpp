#include <iostream>
#include <queue>

using namespace std;

void command(string cmd);

queue<int> q;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  for (int i=0; i<N; i++) {
    string cmd;
    cin >> cmd;
    command(cmd);
  }
  
  return 0;
}

void command(string cmd) {
  if (cmd == "push") {
    int temp;
    cin >> temp;
    q.push(temp);
  }
  else if (cmd == "front") {
    if (q.empty())
      cout << -1 << "\n";
    else
      cout << q.front() << "\n";
  }
  else if (cmd == "back") {
    if (q.empty())
      cout << -1 << "\n";
    else
      cout << q.back() << "\n";
  }
  else if (cmd == "pop") {
    if (q.empty())
      cout << -1 << "\n";
    else {
      cout << q.front() << "\n";
      q.pop();
    }
  }
  else if (cmd == "size") {
    cout << q.size() << "\n";
  }
  else if (cmd == "empty") {
    q.empty() ? cout << 1 << "\n" : cout << 0 << "\n";
  }
}