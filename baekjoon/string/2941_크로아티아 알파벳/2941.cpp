#include <iostream>
#include <string>
#include <vector>

using namespace std;

string word;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> word;
	int result=0;

	for (int i = 0; i < word.length(); i++) {
		switch (word[i]) {
			case 'c':
				if (i + 1 < word.length()) {
					if (word[i + 1] == '=' || word[i + 1] == '-') {
						result++;
						i = i + 1;
					}
					else result++;
				}
				else {
					result++;
				}
				break;
			case 'd':
				if (i + 1 < word.length()) {
					if (word[i + 1] == '-') {
						result++;
						i = i + 1;
					}
					else if (word[i+1] == 'z') {
						if (i + 2 < word.length()) {
							if (word[i + 2] == '=') {
								result++;
								i = i + 2;
							}
							else
								result++;
						}
						else
							result++;
					}
					else result++;
				}
				else 
					result++;
				break;
			case 'l':
				if (i + 1 < word.length() && word[i + 1] == 'j') {
					result++;
					i = i + 1;
				}
				else result++;
				break;
			case 'n':
				if (i + 1 < word.length() && word[i + 1] == 'j') {
					result++;
					i = i + 1;
				}
				else result++;
				break;
			case 's':
				if (i + 1 < word.length() && word[i + 1] == '=') {
					result++;
					i = i + 1;
				}
				else result++;
				break;
			case 'z':
				if (i + 1 < word.length() && word[i + 1] == '=') {
					result++;
					i = i + 1;
				}
				else result++;
				break;
			default:
				result++;
		}
	}

	cout << result;
	
	return 0;
}