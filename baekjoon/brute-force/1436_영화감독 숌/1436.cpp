#include <iostream>

using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  int count=0;
  int number=666;
  
  while(1) {
    // 666 연속인지 확인
    string temp = to_string(number);
    if (temp.find("666") != string::npos)
      count++;
    
    if (count == N) {
      break;      
    }
    number++;
  }

  cout << number;
  
  return 0;
}