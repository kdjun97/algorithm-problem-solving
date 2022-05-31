#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

void key_logger(string word);
void reverse_output(stack<char> original_stack);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int T;
  cin >> T;

  for (int i=0; i<T; i++) {
    string temp;
    cin >> temp;
    key_logger(temp);
  }
  
  return 0;
}

void key_logger(string word) {
  stack<char> key_logger_stack;
  stack<char> arrow;
  for (int i=0; i<word.length(); i++) {
    switch (word[i]) {
      case '<':
        if (!key_logger_stack.empty()) {
          arrow.push(key_logger_stack.top());
          key_logger_stack.pop();
        }
        break;
      case '>':
        if (!arrow.empty()) {
          key_logger_stack.push(arrow.top());
          arrow.pop();
        }
        break;
      case '-':
        if (!key_logger_stack.empty())
          key_logger_stack.pop();
        break;
      default:
        key_logger_stack.push(word[i]);
        break;
    }
  }

  while(!arrow.empty()) {
    key_logger_stack.push(arrow.top());
    arrow.pop();
  }
  
  reverse_output(key_logger_stack);
}

void reverse_output(stack<char> original_stack) {
  stack<char> reverse_stack;
  while(!original_stack.empty()) {
    reverse_stack.push(original_stack.top());
    original_stack.pop();
  }

  while(!reverse_stack.empty()) {
    cout << reverse_stack.top();
    reverse_stack.pop();
  }
  cout << "\n";
}