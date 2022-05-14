#include <iostream>
#include <vector>

using namespace std;

bool is_escape();
void answer();
void no_answer();

vector<int> result;
// 밀다 : 0 , 당기다 : 1
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b;

	cin >> a >> b;

	// 규칙 2 -> 연속으로 같은 방법으로 문을 열 수 없음은 무조건 0 1 0 1 의 배치
	// 따라서 0 1 0 1 의 연속을 a size 배열에 넣음
	for (int i = 0; i < a; i++) {
		if (result.size() > 6)
			break;
		result.push_back(b);
		if (b == 0)
			b = 1;
		else
			b = 0;
	}

	// 탈출 가능 or 불가능
	(is_escape()) ? answer() : no_answer();

	return 0;
}

bool is_escape() {
	if (result.size() > 2) {
		int temp = result[1];
		for (int i = 1; i < result.size(); i += 2) {
			if (temp != result[i]) return false;
		}
	}
	if (result.size() > 6) return false;
	return true;
}

// 탈출 가능
void answer() {
	for (int i = 0; i < result.size(); i++) {
		if (i == 0) continue;
		cout << result[i] << "\n";
	}
}

// 탈출 불가
void no_answer() {
	cout << "Love is open door";
}