#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

set<int> number;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  for (int i=0; i<N; i++) {
    int temp;
    cin >> temp;
    number.insert(temp);
  }

  for (auto it=number.begin(); it != number.end(); it++)
    cout << *it << "\n";
  return 0;
}