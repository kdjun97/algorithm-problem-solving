#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

vector<int> num;
int sum=0;
map<int, int> mode_map;

int median(); // 2번 중앙값
int mode(); // 3번 최빈값
int range(); // 4번 범위
bool compare (pair<int, int> a, pair<int, int> b);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  for (int i=0; i<N; i++) {
    int temp;
    cin >> temp;
    sum+= temp;
    num.push_back(temp);
    auto iter = mode_map.find(temp);
    if (iter != mode_map.end())
      iter->second++;
    else
      mode_map.insert(make_pair(temp,1));
  }

  (round((float)sum/N)==-0) ? cout << "0\n" : cout << round((float)sum/N) << "\n";
  sort(num.begin(), num.end());
  cout << median() << "\n";
  cout << mode() << "\n";
  cout << range();
  
  return 0;
}

int median() {
  return num[floor(num.size()/2)];
}

int mode() {
  vector<pair<int, int>> mode_vector(mode_map.begin(), mode_map.end());
  sort(mode_vector.begin(), mode_vector.end(), compare);

  int max_value = mode_vector[mode_vector.size()-1].second;
  int count=mode_vector.size()-1;
  vector<int> result;
  
  while(1) {
    if (count == -1)
      break;
    if (mode_vector[count].second == max_value) // 빈도수 같은 것들만 넣음
      result.push_back(mode_vector[count].first);
    count--;
  }
  sort(result.begin(), result.end());
  
  return (result.size() == 1) ? result[0] : result[1];
}

int range() {
  return num[num.size()-1] - num[0];
}

bool compare (pair<int, int> a, pair<int, int> b) {
  return a.second < b.second;
}