#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> result;

void push_result(int r, string w, int index);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int T;
  cin >> T;

  for (int i=0; i<T; i++) {
    int repetition;
    string word;

    cin >> repetition >> word;
    push_result(repetition, word, i);
  }

  for (int i=0; i<result.size(); i++) {
    for (int j=0; j<result[i].size(); j++) 
      cout << result[i][j];
    cout << "\n";
  }

  return 0;
}

void push_result(int r, string w, int index) {
  result.push_back(vector<char>('e')); // for safety (어차피 아래에서 덮힘)
  result[index].clear();
  for (int i=0; i<w.length(); i++) {
    for (int j=0; j<r; j++) {
      result[index].push_back(w[i]);    
    }
  }
}