#include <iostream>
#include <string>
#include <queue>

using namespace std;

queue<int> q;
vector<int> result;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int K, N;

	cin >> N >> K;

	for (int i = 1; i <= N; i++)
		q.push(i);

	while (!q.empty()) {
		for (int i = 0; i < K-1; i++) {
			q.push(q.front());
			q.pop();
		}
		result.push_back(q.front());
		q.pop();
	}

	cout << "<";
	for (int i=0; i<result.size()-1; i++)
		cout << result[i] << ", ";

	cout << result[result.size() - 1] << ">";

	return 0;
}