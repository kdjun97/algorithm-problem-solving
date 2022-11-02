#include <iostream>
#define DIV_NUM 1000000007

using namespace std;

unsigned long long int sol();
unsigned long long int K, P, N;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> K >> P >> N;

	unsigned long long int result = sol();
	cout << result;

	return 0;
}

unsigned long long int sol() {
	unsigned long long int r=1;
	r *= K;
	for (int i = 0; i < N; i++) {
		r=r*P%DIV_NUM;
	}
	return r;
}