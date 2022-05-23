#include <iostream>
#include <vector>

using namespace std;

vector<int> result;

int quiz(string temp);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  for (int i=0; i<N; i++) {
    string temp;
    cin >> temp;
    result.push_back(quiz(temp));
  }

  vector<int>::iterator it;
  for (it=result.begin(); it!=result.end(); it++) {
    cout << *it;
    if (it != result.end())
      cout << "\n";
  }
  return 0;
}

int quiz(string temp) {
  bool continue_check = false;
  int count = 1;
  int sum = 0;
  
  for (int i=0; i<temp.length(); i++) {
    if (temp[i] == 'O') {
      if (!continue_check) {
        sum+=count++;
        continue_check=true;
      }
      else {
        sum+=(count++);
      }        
    }
    else { // 'X'
      count = 1;
      continue_check=false;
    }
  }
  return sum;
}