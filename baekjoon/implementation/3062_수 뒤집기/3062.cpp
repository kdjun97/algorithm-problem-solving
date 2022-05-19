#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<int> num;
void answer(int n);
int reverse_sum(int n);
string reverse_string(int n);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int T;

  cin >> T;

  for (int i=0; i<T; i++) {
    int temp;
    cin >> temp;
    num.push_back(temp);
  }

  for (int i=0; i<T; i++) {
    int sum_value = reverse_sum(num[i]);
    answer(sum_value);
  }
  
  return 0;
}

void answer(int n){
  string original_number = to_string(n);
  string reverse_number = reverse_string(n);

  original_number.compare(reverse_number)==0 ? cout << "YES\n" : cout << "NO\n";
}

int reverse_sum(int n) {
  int sum=0;
  sum += n;
  
  string reverse_num = reverse_string(n);
  int reverse_temp = stoi(reverse_num);
  sum += reverse_temp;

  return sum;
}

string reverse_string(int n) {
  string result = to_string(n);
  reverse(result.begin(), result.end());

  return result;
}