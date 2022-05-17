#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> vec(26,0);
vector<int> sor_vec(26,0);

void answer();

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string temp;
  cin >> temp;

  for (int i=0; i<temp.length(); i++) {
    if (temp[i] >= 'a' && temp[i] <= 'z') { // 소문자
      vec[temp[i]-'a']++;      
      sor_vec[temp[i]-'a']++;   
    }
    else if (temp[i] >= 'A' && temp[i] <= 'Z') { // 대문자
      vec[temp[i]-'A']++;
      sor_vec[temp[i]-'A']++;      
    }
  }

  answer();
  
  return 0;
}

void answer() {
  sort(sor_vec.begin(), sor_vec.end());
  if (sor_vec[24] == sor_vec[25])
    cout << "?";
  else {
    char result = 'A' + find(vec.begin(), vec.end(), sor_vec[25]) - vec.begin();
    cout << result;
  }
}