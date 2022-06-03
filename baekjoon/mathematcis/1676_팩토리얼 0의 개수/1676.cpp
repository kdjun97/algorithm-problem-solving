#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, count=0;
	cin >> n;

	count += n / 5;
	count += n / 25;
	count += n / 125;

	cout << count;

	return 0;
}