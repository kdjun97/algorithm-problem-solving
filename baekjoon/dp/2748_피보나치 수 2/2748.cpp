#include <iostream>
#define ULL unsigned long long int

using namespace std;

ULL fibo[90];
bool check[90] = {false};

ULL dp (int n);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  fibo[0]=0, fibo[1]=1;
  check[0]=true, check[1]=true;
  
  int n;
  cin >> n;
  cout << dp(n);
  
  return 0;
}

ULL dp (int n) {
  if (check[n] == false) {
    check[n] = true;
    fibo[n] = dp(n-2) + dp(n-1);
  }
  return fibo[n];
}