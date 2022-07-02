#include <iostream>
#include <string>
#include <deque>

using namespace std;

void command(string cmd);

deque<int> dq;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string cmd;
		cin >> cmd;
		command(cmd);
	}

	return 0;
}

void command(string cmd) {
	if (cmd == "push_front") {
		int temp;
		cin >> temp;
		dq.push_front(temp);
	}
	else if (cmd == "push_back") {
		int temp;
		cin >> temp;
		dq.push_back(temp);
	}
	else if (cmd == "pop_front") {
		if (dq.empty())
			cout << -1 << "\n";
		else {
			cout << dq.front() << "\n";
			dq.pop_front();
		}
	}
	else if (cmd == "pop_back") {
		if (dq.empty())
			cout << -1 << "\n";
		else {
			cout << dq.back() << "\n";
			dq.pop_back();
		}
	}
	else if (cmd == "size") {
		cout << dq.size() << "\n";
	}
	else if (cmd == "empty") {
		dq.empty() ? cout << 1 << "\n" : cout << 0 << "\n";
	}
	else if (cmd == "front") {
		if (dq.empty())
			cout << -1 << "\n";
		else {
			cout << dq.front() << "\n";
		}
	}
	else if (cmd == "back") {
		if (dq.empty())
			cout << -1 << "\n";
		else {
			cout << dq.back() << "\n";
		}
	}
}