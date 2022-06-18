#include <iostream>
#include <string>
#include <map>

using namespace std;

map<int, bool> number;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		number.insert({ temp, true });
	}

	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		
		number.find(temp) != number.end() ? cout << "1\n" : cout << "0\n";
	}

	return 0;
}