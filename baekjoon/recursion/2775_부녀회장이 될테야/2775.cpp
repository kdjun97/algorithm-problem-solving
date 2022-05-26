#include <iostream>
#include <vector>

using namespace std;

vector<int> answer;

int recursion(int k, int n);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  for (int i=0; i<N; i++) {
    int k,n;
    cin >> k >> n;
    answer.push_back(recursion(k,n));
  }

  for (int i=0; i<answer.size(); i++)
    cout << answer[i] << "\n";
  
  return 0;
}

int recursion(int k, int n) {
  if (k==0)
    return n;
  if (n==1)
    return 1;
  return recursion(k-1, n) + recursion(k, n-1);
}