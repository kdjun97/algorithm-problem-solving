#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> result;

bool func(pair<int, int> &x, pair<int, int> &y);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  for (int i=0; i<N; i++) {
    int x,y;
    cin >> x >> y;

    result.push_back({x,y});
  }

  sort(result.begin(), result.end(), func);

  vector<pair<int, int>>::iterator it;
  for (it=result.begin(); it!=result.end(); it++) {
    cout << it->first << " " << it->second << "\n";
  }
  
  return 0;
}

bool func(pair<int, int> &x, pair<int, int> &y) {
  if (x.first == y.first)
    return x.second < y.second;
  return x.first < y.first;
}