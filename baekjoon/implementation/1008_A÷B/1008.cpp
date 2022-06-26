#include <iostream>

using namespace std;


int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int A, B;
	cin >> A >> B;
    cout.precision(12);
	cout << double(A) / B;

	return 0;
}