#include <iostream>

#define LL long long int

using namespace std;

LL factorial[11];
bool check[11];

LL fact(int n);
void setting();

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, K;
  cin >> N >> K;
  setting();
  cout << fact(N)/(fact(K)*fact(N-K));
  
  return 0;
}

LL fact(int n) {
  if (n==0 || n==1)
    return factorial[n];
  else if (!check[n]) {
    check[n]=true;
    factorial[n] = n * fact(n-1);
  }
  return factorial[n];
}

void setting() {
  for (int i=2; i<=10; i++)
    check[i]=false;
  factorial[0]=1;
  factorial[1]=1;
  check[0]=true;
  check[1]=true;
}