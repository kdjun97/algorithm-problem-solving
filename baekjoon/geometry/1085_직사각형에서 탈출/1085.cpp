#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int x,y,w,h;
  cin >> x >> y >> w >> h;

  cout << min(h-y , min(w-x, min(x, y)));
  
  return 0;
}