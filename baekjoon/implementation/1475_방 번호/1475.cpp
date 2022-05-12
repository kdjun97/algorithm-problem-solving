#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> sets = {0,0,0,0,0,0,0,0,0,0};

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int temp;
  cin >> temp;

  string room_number = to_string(temp);
  for (int i=0; i<room_number.length(); i++) {
    if (room_number[i] == '6' || room_number[i] == '9') {
      if (sets[6] == sets[9]) sets[6]++;
      else sets[9]++;
    }
    else {
      sets[room_number[i]-48]++;
    }
  }
  printf("%d", *max_element(sets.begin(), sets.end()));
  
  return 0;
}