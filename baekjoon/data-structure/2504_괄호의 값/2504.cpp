#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

stack<char> input;
stack<int> output;
bool check = true;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string sentence;
	cin >> sentence;

	for (int i = 0; i < sentence.length(); i++) {
		if (check == false || sentence.length()%2==1) // 홀수면 무조건 안됨
			break;
		if (sentence[i] == '(') {
			input.push(sentence[i]);
			continue;
		}
		else if (sentence[i] == '[') {
			input.push(sentence[i]);
			continue;
		}
		else if (!input.empty() && input.top() == '(' && sentence[i] == ')') {
			input.pop();
			input.push('2');
			output.push(2);
		}
		else if (!input.empty() && input.top() == '[' && sentence[i] == ']') {
			input.pop();
			input.push('3');
			output.push(3);
		}
		else if (sentence[i] == ')') {
			check = false;
			int sum = 0;
			while (1) {
				if (!input.empty() && input.top() == '(') {
					check = true;
					output.push(sum * 2);
					input.pop();
					input.push('2');
					break;
				}
				if (output.empty()) {
					check = false;
					break;
				}
				sum += output.top();
				output.pop();
				input.pop();
			}
		}
		else if (sentence[i] == ']') {
			check = false;
			int sum = 0;
			while (1) {
				if (!input.empty() && input.top() == '[') {
					check = true;
					output.push(sum * 3);
					input.pop();
					input.push('3');
					break;
				}
				if (output.empty()) {
					check = false;
					break;
				}
				sum += output.top();
				output.pop();
				input.pop();
			}
		}
	}

	if (!check) {
		cout << 0;
		return 0;
	}

	int sum = 0;
	while (!output.empty()) {
		sum += output.top();
		output.pop();
	}
	cout << sum;

	return 0;
}