#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<pair<int, string>, int>> info;
bool compare(pair<pair<int, string>, int> a, pair<pair<int, string>, int> b);

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, age, ct = 0;
	string temp;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> age >> temp;
		info.push_back(make_pair(make_pair(age, temp), ct++));
	}

	sort(info.begin(), info.end(), compare);

	for (int i = 0; i < info.size(); i++) {
		cout << info[i].first.first << " " << info[i].first.second << "\n";
	}
		

	return 0;
}

bool compare(pair<pair<int, string>, int> a, pair<pair<int, string>, int> b) {
	if (a.first.first == b.first.first) {
		return a.second < b.second;
	}
	else 
		return a.first.first < b.first.first;
}