#include <iostream>
#include <vector>

using namespace std;

vector<int> number;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int count = 0, sum=0, n=1, A, B;

  cin >> A >> B;
  
  while(count < 1000) {
    for (int i=0; i<n; i++) {
      if (count >= 1000)
        break;
      number.push_back(n);
      count++;
    } 
    n++;
  }

  for (int i=A-1; i<B; i++)
    sum+=number[i];

  cout << sum;
  
  return 0;
}