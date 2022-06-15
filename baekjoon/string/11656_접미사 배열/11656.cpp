#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<string> vec;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string S;
  cin >> S;

  for (int i=0 ; i< S.length(); i++) {
    vec.push_back(S.substr(i));
  }
  
  sort (vec.begin(), vec.end());
  for (auto it = vec.begin(); it != vec.end(); it++)
    cout << *it << "\n";
  
  return 0;
}