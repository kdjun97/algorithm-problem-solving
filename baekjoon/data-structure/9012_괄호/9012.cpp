#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<string> result;
string VPS_check(string PS);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int T;
  cin >> T;

  for (int i=0; i<T; i++) {
    string temp;
    cin >> temp;
    result.push_back(VPS_check(temp));
  }
  for (int i=0; i<T; i++) {
    cout << result[i];
    if (i != T-1)
      cout << "\n";
  }
  return 0;
}

string VPS_check(string PS) {
  stack<char> a;

  for (int i=0; i<PS.length(); i++) {
    if (i == 0 || PS[i] == '(')
      a.push(PS[i]);
    else if (!a.empty()) {
      if (a.top() == '(' && PS[i] == ')') {
        a.pop();      
      }
    }
    else
      return "NO";
  }
  return a.empty() ? "YES" : "NO";
}