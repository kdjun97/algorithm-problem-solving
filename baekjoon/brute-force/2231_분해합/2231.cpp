#include <iostream>
#include <string>
#define MAX 1000001

using namespace std;

int arr[MAX];

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;

  for (int i=1; i<MAX; i++) {
    int sum=i;
    string temp = to_string(i);
    for (int j=0; j<temp.length(); j++) {
      sum+=temp[j]-48;
    }
    arr[i]=sum;
  }

  cin >> N;

  for (int i=1; i<MAX; i++) {
    if (arr[i] == N) {
      cout << i;
      return 0;
    }
  }

  cout << 0;

  return 0;
}