#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <vector>

using namespace std;

set<string> word_set;
vector<string> word_vector;

bool compare(string a, string b);

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		word_set.insert(temp);
	}

	word_vector = vector<string>(word_set.begin(), word_set.end());

	sort(word_vector.begin(), word_vector.end(), compare);

	for (vector<string>::iterator it = word_vector.begin(); it != word_vector.end(); it++)
		cout << *it << "\n";
	
	return 0;
}

bool compare(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}