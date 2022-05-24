#include <iostream>
#include <vector>

using namespace std;

vector<int> result;

int recursion(int n);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  for (int i=1; i<=30; i++) {
    result.push_back(recursion(i));
  }

  for (int i=0; i<n; i++) {
    int k;
    cin >> k;
    if (k==1)
      cout << 1;
    else {
      cout << result[k-1];
    }
    if (i != n-1)
      cout << "\n";
  }
  
  return 0;
}

int recursion(int n) {
  if (n == 1)
    return 1;
  else {
    return (recursion(n-1)+0.5)*2;    
  }
}