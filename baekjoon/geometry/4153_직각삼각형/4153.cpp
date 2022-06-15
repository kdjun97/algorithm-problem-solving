#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector<int> a(3,0);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  while (1) {
    cin >> a[0] >> a[1] >> a[2];
    if (a[0]+a[1]+a[2] == 0)
      break;
    sort(a.begin(), a.end());
    if (pow(a[2],2) == pow(a[0],2) + pow(a[1],2))
      cout << "right\n";
    else
      cout << "wrong\n";
  }

  return 0;
}