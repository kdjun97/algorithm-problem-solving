#include <iostream>
#include <vector>
#include <map>

using namespace std;

int fetch_time(char wording);

map<char, int> mapping = {
  {'A',2},{'B',2},{'C',2},
  {'D',3},{'E',3},{'F',3},
  {'G',4},{'H',4},{'I',4},
  {'J',5},{'K',5},{'L',5},
  {'M',6},{'N',6},{'O',6},
  {'P',7},{'Q',7},{'R',7},{'S',7},
  {'T',8},{'U',8},{'V',8},
  {'W',9},{'X',9},{'Y',9},{'Z',9}
};

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int sum=0;
  string word;
  cin >> word;
  
  for (int i=0; i<word.length(); i++) {
    sum+=fetch_time(word[i]);
  }

  cout << sum;
  
  return 0;
}

int fetch_time(char wording) {
  auto item = mapping.find(wording);
  return item->second+1;
}