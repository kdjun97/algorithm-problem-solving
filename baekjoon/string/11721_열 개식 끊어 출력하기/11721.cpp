#include <iostream>
#include <vector>

using namespace std;

vector<char> result;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string word;
  cin >> word;

  for (int i=0; i<word.length(); i++) {
    if (i!=0 && i%10 == 0)
      result.push_back('\n');      
    result.push_back(word[i]);
  }

  vector<char>::iterator it;
  for (it=result.begin(); it!=result.end(); it++)
    cout << *it;
  
  return 0;
}