#include <iostream>
#include <stack>

using namespace std;

stack<int> number;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int K;
	cin >> K;
	for (int i = 0; i < K; i++) {
		int temp;
		cin >> temp;
		if (temp == 0) // 정수가 0일 때, 지울 수 있는 숫자가 보장된다함.
			number.pop();
		else
			number.push(temp);
	}

	int sum = 0;

	if (number.empty()) {
		cout << 0;
	}
	else {
		while (!number.empty()) {
			sum += number.top();
			number.pop();
		}
		cout << sum;
	}

	return 0;
}