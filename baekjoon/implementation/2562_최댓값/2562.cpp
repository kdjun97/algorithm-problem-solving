#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> number;

	for (int i = 0; i < 9; i++) {
		int temp;
		cin >> temp;
		number.push_back(temp);
	}

	int max = *max_element(number.begin(), number.end());
	int index = max_element(number.begin(), number.end()) - number.begin() + 1;

	cout << max << "\n" << index;

	return 0;
}