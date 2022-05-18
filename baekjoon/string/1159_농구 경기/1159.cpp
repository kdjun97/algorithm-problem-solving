#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> vec(26,0);
vector<char> result;

bool answer();

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;
  
  for (int i=0; i<N; i++) {
    string temp;
    cin >> temp;
    vec[temp[0]-'a']++; // 무조건 소문자만 들어옴
  }

  vector<char>::iterator it;
  if (answer()) {
   for (it=result.begin(); it != result.end(); it++)
     cout << *it;
  }
  else
    cout << "PREDAJA";
  
  return 0;
}

bool answer() {
  bool count = false;
  for (int i=0; i<26; i++) {
    if (vec[i] >= 5) {
      char temp = 'a'+i;
      result.push_back(temp);
      count = true;
    }
  }
  return count;
}