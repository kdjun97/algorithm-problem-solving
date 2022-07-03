#include <iostream>
#include <string>
#define LL long long int

using namespace std;

int solve(int N);

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	int result = solve(N);
	cout << result;

	return 0;
}

int solve(int N) {
	LL num=1;
	int result = 2, count=1;

	if (N == 1)
		return 1;

	while (1) {
		if (N <= num + (6*count))
			break;
		else {
			result++;
			num = num + (6*count++);
		}
	}
	return result;
}