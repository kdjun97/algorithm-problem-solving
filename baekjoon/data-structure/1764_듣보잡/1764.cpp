#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<string, bool> no_listen;
vector<string> result;

int N, M;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> N >> M;

  for (int i=0; i<N; i++) {
    string temp;
    cin >> temp;
    no_listen.insert({temp, true});
  }

  for (int i=0; i<M; i++) {
    string temp;
    cin >> temp;
    auto it = no_listen.find(temp);
    if (it != no_listen.end())
      result.push_back(temp);
  }

  sort(result.begin(), result.end());
  cout << result.size() << "\n";
  for (auto it=result.begin(); it!=result.end(); it++) {
    cout << *it << "\n";    
  }
  
  return 0;
}