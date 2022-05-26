#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, int>> coordinate;

bool compare(pair<int, int> x, pair<int, int> y);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  for (int i=0; i<N; i++) {
    int x,y;
    cin >> x >> y;
    coordinate.push_back(make_pair(x,y));
  }

  sort (coordinate.begin(), coordinate.end(), compare);

  vector<pair<int, int>>::iterator it;
  for (it=coordinate.begin(); it != coordinate.end(); it++) {
    cout << it->first << " " << it->second;
    if (it != coordinate.end())
      cout << "\n";
  }
  
  return 0;
}

bool compare(pair<int, int> x, pair<int, int> y) {
  if (x.second == y.second)
    return x.first < y.first;
  return x.second < y.second;
}