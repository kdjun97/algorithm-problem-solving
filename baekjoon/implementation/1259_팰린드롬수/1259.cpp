#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> answer;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  while(1) {
    int temp;
    string original_string;
    string reverse_string;

    cin >> temp;
    if (temp ==0)
      break;

    original_string = to_string(temp);
    reverse_string = to_string(temp);
    reverse(reverse_string.begin(), reverse_string.end());

    if (original_string.compare(reverse_string) == 0)
      answer.push_back("yes");
    else
      answer.push_back("no");
  }

  vector<string>::iterator it;
  for (it=answer.begin(); it!=answer.end(); it++) {
    cout << *it << "\n";
  }
  
  return 0;
}