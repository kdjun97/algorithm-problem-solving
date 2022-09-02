#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> card;
vector<int> card2;
map<int, int> result;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int number;
		cin >> number;
		card.push_back(number);
	}

	cin >> M;
	
	for (int i = 0; i < M; i++) {
		int number;
		cin >> number;
		card2.push_back(number);
		result.insert(make_pair(number, 0)); // map에서 중복은 덮어씌워줌
	}

	for (int i = 0; i < card.size(); i++) {	
		auto item = result.find(card[i]);
		if (item != result.end())
			item->second++;
	}

	map<int, int>::iterator it;

	for (int i = 0; i < card2.size(); i++) {
		auto item = result.find(card2[i]);
		item == result.end() ? cout << "0 " : cout << item->second << " ";
	}

	return 0;
}