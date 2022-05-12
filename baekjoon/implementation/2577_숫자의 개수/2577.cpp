#include <iostream>
#include <vector>

using namespace std;

vector<int> count = {0,0,0,0,0,0,0,0,0,0};

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int a, b, c;
  cin >> a >> b >> c;

  int multiply = a*b*c;

  string temp = to_string(multiply);
  for (int i=0; i<temp.length(); i++) {
    count[temp[i]-48]++;
  }

  vector<int>::iterator it;

  for (it = count.begin(); it != count.end(); it++)
    cout << *it << "\n";
  
  return 0;
}