#include <iostream>

using namespace std;

void answer(int Y, int M);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, Y=0, M=0;
  cin >> n;
  for (int i=0; i<n; i++) {
    int temp;
    cin >> temp;
    Y+=((temp/30)+1)*10;
    M+=((temp/60)+1)*15;
  }

  answer(Y, M);

  return 0;
}

void answer(int Y, int M) {
  if (Y==M) {
    printf("Y M %d",Y);
  }
  else if (Y<M) {
    printf("Y %d",Y);
  }
  else
    printf("M %d",M);
}