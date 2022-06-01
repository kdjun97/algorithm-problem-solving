#include <iostream>
#include <string>
#include <list>

using namespace std;

void key_logger_answer(string word);

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string temp;
		cin >> temp;
		key_logger_answer(temp);
	}

	return 0;
}

void key_logger_answer(string word) {
	list<char> key_logger;
	list<char>::iterator it = key_logger.begin();

	
	for (int i = 0; i < word.length(); i++) {
		if (word[i] == '<' && it != key_logger.begin())
			it--;
		else if (word[i] == '>' && it != key_logger.end())
			it++;
		else if (word[i] == '-' && it != key_logger.begin())
			it = key_logger.erase(--it);
		else if (word[i] != '<' && word[i] != '-' && word[i] != '>')
			key_logger.insert(it, word[i]);
	}
	
	for (it = key_logger.begin(); it != key_logger.end(); it++)
		cout << *it;
	cout << "\n";
}