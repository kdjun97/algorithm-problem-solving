#include <iostream>
#include <vector>

using namespace std;

vector<int> number;

int abs(int a);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, M;
  cin >> N >> M;

  for (int i=0; i<N; i++) {
    int temp;
    cin >> temp;
    number.push_back(temp);
  }

  int diff=123456789;
  int result;
  
  for (int i=0; i<number.size()-2; i++) {
    for (int j=i+1; j<number.size()-1; j++) {
      for (int w=j+1; w<number.size(); w++) {
        int sum = number[i]+number[j]+number[w];

        if (abs(sum-M) < diff && sum <= M) {
          diff=abs(sum-M);          
          result = sum;
        }
      }
    }
  }

  cout << result;

  return 0;
}

int abs(int a) {
  return a>0 ? a : a*-1;
}