#include <iostream>

using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;
  
  string temp;
  cin >> temp;

  int sum=0;
  for (int i=0; i<temp.length(); i++) {
    sum+=temp[i]-48;
  }

  cout << sum;
  
  return 0;
}