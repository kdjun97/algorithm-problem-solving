#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> number;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		number.push_back(temp);
	}

	cout << *min_element(number.begin(), number.end()) << " " << *max_element(number.begin(), number.end());

	return 0;
}