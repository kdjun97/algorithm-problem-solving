#include <iostream>
#include <list>
#include <string>

using namespace std;

list<char> editor;
list<char>::iterator it;

void init();
void solve(int M);

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int M;

	init();
	cin >> M;
	solve(M);

	return 0;
}

void init() {
	string word;
	cin >> word;

	it = editor.begin();

	for (int i = 0; i < word.length(); i++)
		editor.insert(it, word[i]);
}

void solve(int M) {
	char command, word;
	for (int i = 0; i < M; i++) {
		cin >> command;
		if (command == 'L') {
			if (it != editor.begin())
				it--;
		}
		else if (command == 'D') {
			if (it != editor.end())
				it++;
		}
		else if (command == 'B') {
			if (it != editor.begin())
				it = editor.erase(--it);
		}
		else { // P
			cin >> word;
			editor.insert(it, word);
		}
	}

	for (it = editor.begin(); it != editor.end(); it++)
		cout << *it;
}