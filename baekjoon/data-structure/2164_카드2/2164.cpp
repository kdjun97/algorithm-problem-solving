#include <iostream>
#include <list>

using namespace std;

list<int> card;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;
  auto it = card.begin();
  
  for (int i=1; i<=N; i++)
    card.insert(it, i);

  while(card.size() != 1) {
    it = card.erase(card.begin());
    card.insert(card.end(), *it);
    it = card.erase(card.begin());
  }

  cout << *card.begin();

  return 0;
}