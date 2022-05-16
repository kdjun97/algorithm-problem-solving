#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<float> result;
void calculate(string str);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int T;
  cin >> T;
  cin.ignore();

  for (int i=0; i<T; i++) {
    string str;
    getline(cin, str);
    calculate(str);  
  }
  for (int i=0; i<T; i++)
    printf("%.2f\n", result[i]);
  return 0;
}

void calculate(string str) {
  vector<string> temp;
  stringstream ss(str);
  string t;
  
  while(getline(ss, t, ' ')) {
    temp.push_back(t);
  }
  float value = stof(temp[0]);
  for (int i=1; i< temp.size(); i++) {
    switch(temp[i][0]) {
      case '@':
        value*=3;
        break;
      case '#':
        value-=7;
        break;
      case '%':
        value+=5;
        break;
      default:
        break;
    }
  }
  result.push_back(value);
}