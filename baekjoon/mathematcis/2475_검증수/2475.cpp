#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

  int sum=0;
  
  for (int i=0; i<5; i++) {
    int temp;
    cin >> temp;
    sum+= pow(temp, 2);
  }

  printf("%d",sum%10);
  
  return 0;
}