#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<char> vec_A;
vector<char> vec_B;

int init_num (string temp, bool check);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string A, B;

  cin >> A >> B;

  int a = init_num(A, true);
  int b = init_num(B, false);

  a > b ? cout << a : cout << b;
  
  return 0;
}

int init_num (string temp, bool check) {
  for (int i=0; i<temp.length(); i++) {
    check ? vec_A.push_back(temp[i])
      : vec_B.push_back(temp[i]);
  }
  
  check ? reverse(vec_A.begin(), vec_A.end())
    : reverse(vec_B.begin(), vec_B.end());

  string reverse_temp;
  check ? reverse_temp=string(vec_A.begin(), vec_A.end())
    : reverse_temp=string(vec_B.begin(), vec_B.end());
  
  return stoi(reverse_temp);
}