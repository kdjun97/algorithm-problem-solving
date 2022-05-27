#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<string> split(string sentence, char delimiter);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string sentence;
  getline(cin, sentence);
  int exception=0;
  if (sentence[0] == ' ')
    exception--;

  vector<string> split_sentence = split(sentence, ' ');

  cout << split_sentence.size() + exception;

  return 0;
}

vector<string> split(string sentence, char delimiter) {
  vector<string> result;
  string temp;
  stringstream ss(sentence);

  while (getline(ss, temp, delimiter)) {
    result.push_back(temp);
  }

  return result;
}