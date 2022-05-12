#include <iostream>

using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int num, sum=0;
  cin >> num;
  for (int i=0; i<num; i++) {
    int temp;
    cin >> temp;
    sum+= temp;
  }

  printf("%d", sum-num+1);
  
  return 0;
}