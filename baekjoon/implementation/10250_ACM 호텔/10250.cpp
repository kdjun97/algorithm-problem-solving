#include <iostream>
#include <vector>

using namespace std;

vector<int> result;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int H, W, T, N;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int acm;
		cin >> H >> W >> N;
		(N%H ==0) ? acm = 100 * H + (N / H) : acm = 100 * (N % H) + (N / H) + 1;
		result.push_back(acm);
	}

	for (vector<int>::iterator it = result.begin(); it != result.end(); it++)
		cout << *it << "\n";
	return 0;
}