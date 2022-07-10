#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> result;

bool compare(int  a, int b);

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int temp;
	cin >> temp;

	string word = to_string(temp);
	for (int i = 0; i < word.length(); i++) {
		result.push_back(word[i] - 48);
	}

	sort(result.begin(), result.end(), compare);

	for (int i = 0; i < result.size(); i++)
		cout << result[i];

	return 0;
}

bool compare(int a, int b) {
	return a > b;
}