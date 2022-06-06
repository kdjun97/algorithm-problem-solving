#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> number;
int result = 0;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, x, temp;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		number.push_back(temp);
	}
	cin >> x;

	int l = 0, r = number.size() - 1;
	sort(number.begin(), number.end());

	while (1) {
		if (l == r)
			break;
		int sum = number[l] + number[r];
		if (sum == x) {
			result++;
			r--;
		}
		else if (sum > x)
			r--;
		else
			l++;
	}
	cout << result;

	return 0;
}