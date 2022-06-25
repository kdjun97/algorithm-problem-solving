#include <iostream>
#define MAX 1000001

using namespace std;

bool prime_number[MAX];

void prime();

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	fill_n(prime_number, MAX, true);
	prime();

	int M, N;

	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		if (prime_number[i] == true)
			cout << i << "\n";
	}
	return 0;
}

void prime() {
	prime_number[1] = false;
	for (int i = 2; i*i < MAX; i++) {
		if (prime_number[i] == true) {
			for (int j = i + i; j < MAX; j += i) {
				prime_number[j] = false;
			}
		}
	}
}