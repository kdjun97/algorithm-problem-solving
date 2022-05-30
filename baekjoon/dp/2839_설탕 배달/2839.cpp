#include <iostream>

using namespace std;

int sugar[5001]={0};

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  sugar[3]=1;
  sugar[5]=1;

  for (int i=6; i<5001; i++) {
    if (!(sugar[i-5] == 0 && sugar[i-3] == 0)) {
      if ((sugar[i-5] == 0 || sugar[i-3] == 0)) // 한쪽이라도 0이 있을 경우
        sugar[i] = max(sugar[i-5], sugar[i-3])+1;    
      else // 둘다 0이 아닌 경우
        sugar[i] = min(sugar[i-5], sugar[i-3])+1;
    }
  }

  (sugar[N]==0) ? cout << -1 : cout << sugar[N];
  
  return 0;
}