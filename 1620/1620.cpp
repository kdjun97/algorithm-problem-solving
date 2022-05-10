#include <iostream>
#include <map>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <string>

using namespace std;

vector<string> answer(map<string, int> dict, int M, vector<string> dict_arr);
bool isDigit(string temp);

int main(void) {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	int N, M; // N : 포켓몬 개수, M : 문제의 개수 
	string temp;
	map<string, int> dict;
	vector<string> dict_arr;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		dict.insert(pair<string, int>(temp, i)); // 찾기 쉽게 string을 key로 index를 반환하게끔 만들어줌
		dict_arr.push_back(temp); // 배열 하나를 추가
	}

	vector<string> result = answer(dict, M, dict_arr);

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << "\n";
	}

	return 0;
}

vector<string> answer(map<string, int> dict, int M, vector<string> dict_arr) {
	string temp;
	vector<string> result;

	for (int i = 0; i < M; i++) {
		cin >> temp;
		if (isDigit(temp)) { // 숫자면
			result.push_back(dict_arr[stoi(temp)-1]);
		}
		else { // 문자면
			result.push_back(to_string((dict.find(temp)->second)+1));
		}
	}

	return result;
}

bool isDigit(string temp) {
	for (int i = 0; i < temp.length(); i++) {
		if (!isdigit(temp[i]))
			return false;
	}
	return true;
}