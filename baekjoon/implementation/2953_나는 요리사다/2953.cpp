#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> result;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	for (int i = 0; i < 5; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			int temp;
			cin >> temp;
			sum += temp;
		}
		result.push_back(sum);
	}

	cout << max_element(result.begin(), result.end()) - result.begin() + 1 << " " << *max_element(result.begin(), result.end());

	return 0;
}