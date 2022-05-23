#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> serial_number;

bool compare(string a, string b);
int sum(string temp);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;
  
  for (int i=0; i<N; i++) {
    string temp;
    cin >> temp;
    serial_number.push_back(temp);
  }

  sort(serial_number.begin(), serial_number.end(), compare);

  vector<string>::iterator it;
  for (it=serial_number.begin(); it!=serial_number.end(); it++) {
    cout << *it;
    if (it != serial_number.end())
      cout << "\n";
  }
  return 0;
}

bool compare(string a, string b) {
  if (a.length() == b.length()) {
    if (sum(a) == sum(b)) {
      return a < b;
    }
    return sum(a) < sum(b);
  }
  return a.length() < b.length();
}

int sum(string temp) {
  int sum=0;
  for (int i=0; i<temp.length(); i++) {
    if (temp[i] >= 48 && temp[i] <=57)
      sum+= temp[i] - 48;
  }
  return sum;
}