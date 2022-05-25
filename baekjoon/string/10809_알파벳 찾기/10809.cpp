#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> answer(26,-1);
vector<bool> check(26,false);
vector<char> vec;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string S;
  cin >> S;

  for (int i=0; i<26; i++) {
    vec.push_back('a'+i);
  }
  
  for (int i=0; i<S.length(); i++) {
    if (!check[find(vec.begin(), vec.end(), S[i]) - vec.begin()]) {
      check[find(vec.begin(), vec.end(), S[i]) - vec.begin()] = true;
      answer[find(vec.begin(), vec.end(), S[i]) - vec.begin()] = i;
    }
  }

  for (int i=0; i<26; i++) {
    cout << answer[i];
    if (i!=25)
      cout << " ";
  }
  
  return 0;
}