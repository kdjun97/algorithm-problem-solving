#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<char, char> mapping = {
  {'A','X'}, {'B','Y'}, {'C','Z'}, {'D', 'A'},
  {'E', 'B'},{'F', 'C'},{'G', 'D'},{'H', 'E'},
  {'I', 'F'},{'J', 'G'},{'K', 'H'},{'L', 'I'},
  {'M', 'J'},{'N', 'K'},{'O', 'L'},{'P', 'M'},
  {'Q', 'N'},{'R', 'O'},{'S', 'P'},{'T', 'Q'},
  {'U', 'R'},{'V', 'S'},{'W', 'T'},{'X', 'U'},
  {'Y', 'V'},{'Z', 'W'}
};

vector<char> result;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string word;
  cin >> word;

  for (int i=0 ; i<word.length() ; i++) {
    char key = word[i];
    auto item = mapping.find(key);
    result.push_back(item->second);
  }

  vector<char>::iterator it;
  for (it=result.begin(); it!=result.end(); it++)
    cout << *it;
  
  return 0;
}