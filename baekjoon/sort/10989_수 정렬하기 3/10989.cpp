#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int check[10001] = {0};

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		check[temp]++;
	}

	for (int i = 1; i <= 10000; i++) {
    for (int j=0; j<check[i]; j++)
      cout << i << "\n";
  }

	return 0;
}