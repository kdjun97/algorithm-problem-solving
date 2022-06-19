#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<vector<int>> numbers;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		vector<int> vec;
		for (int j = 0; j < 10; j++) {
			int temp;
			cin >> temp;
			vec.push_back(temp);
		}
		numbers.push_back(vec);
	}

	for (int i = 0; i < T;i++) {
		sort(numbers[i].begin(), numbers[i].end());
		cout << numbers[i][7] << "\n";
	}

	return 0;
}