#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> fruit;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, L;
  cin >> N >> L;
  for (int i=0; i<N; i++) {
    int h;
    cin >> h;
    fruit.push_back(h);
  }

  sort(fruit.begin(), fruit.end());
  for (int i=0; i<N; i++) {
    if (L >= fruit[i])
      L++;  
  }

  cout << L;
  
  return 0;
}