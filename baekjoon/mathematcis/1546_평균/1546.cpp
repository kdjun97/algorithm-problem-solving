#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<float> score;
float sum=0;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;
  
  for (int i=0; i<N; i++) {
    int temp;
    cin >> temp;
    score.push_back(temp);
  }

  sort(score.begin(), score.end());
  float max_score = score[score.size()-1];

  for (int i=0; i<N; i++) {
    sum+= score[i]/max_score*100;
  }
  cout << sum/score.size();
  
  return 0;
}