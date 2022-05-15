#include <iostream>
#include <set>

using namespace std;

set<int> arr;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	for (int i = 0; i < 10; i++) {
		int temp;
		cin >> temp;
		arr.insert(temp % 42);
	}

	cout << arr.size();

	return 0;
}