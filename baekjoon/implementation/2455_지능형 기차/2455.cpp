#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  vector<int> people = {0,0,0,0};
  int current_people = 0;
  
  for (int i=0; i<4; i++) {
    int a,b;
    cin >> a >> b; // 내리고 타는 순서
    people[i] = current_people-a+b;
    current_people=people[i];
  }

  printf("%d", *max_element(people.begin(), people.end()));
  
  return 0;
}