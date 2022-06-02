#include <iostream>
#include <stack>
#include <vector>

using namespace std;

stack<int> stack_arr;
vector<char> result;
int count = 1;

bool make_arr(int temp);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, check=0;
  cin >> n;
  for (int i=0; i<n; i++) {
    int temp;
    cin >> temp;
    if (!make_arr(temp)) {
      cout << "NO";
      return 0;
    }
  }

  for (int i=0; i<result.size() ; i++)
    cout << result[i] << "\n";    
  
  return 0;
}

bool make_arr(int temp) {
  if (count <= temp) {
    while(1) {
      stack_arr.push(count);
      result.push_back('+');
      if (count++ == temp) {
        stack_arr.pop();
        result.push_back('-');
        return true;
      }
    }
  }
  else {
    if (stack_arr.top() == temp) {
      stack_arr.pop();
      result.push_back('-');
      return true;
    }
    else
      return false;
  } 
}