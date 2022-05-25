#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, int>> person;
vector<int> result;

void dungchi();
bool compare(pair<int, int> x, pair<int, int> y);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  for (int i=0; i<N; i++) {
    int x, y;
    cin >> x >> y;
    person.push_back(pair<int, int>(x,y));
  }

  dungchi();

  vector<int>::iterator it;
  for (it=result.begin(); it!= result.end(); it++) {
    cout << *it;
    if (it != result.end())
      cout << "\n";
  }
  
  return 0;
}

void dungchi() {
  for (int i=0; i<person.size(); i++) {
    int count=1;
    for (int j=0; j<person.size(); j++) {
      if (i==j)
        continue;
      if (compare(person[i], person[j])) {
        count++;        
      }
    }
    result.push_back(count);
  }
}

bool compare(pair<int, int> x, pair<int, int> y) {
  return (x.first < y.first && x.second < y.second);
}