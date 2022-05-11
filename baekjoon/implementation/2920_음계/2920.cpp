#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> asc = { 1,2,3,4,5,6,7,8 };
vector<int> desc = { 8,7,6,5,4,3,2,1 };

string answer(vector<int> vec);

int main(void) {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	vector<int> original;

	for (int i = 0; i < 8; i++) {
		int temp;
		cin >> temp;
		original.push_back(temp);
	}

	cout << answer(original);
	
	return 0;
}

string answer(vector<int> vec){
	if (vec == asc) {
		return "ascending";
	}
	else if (vec == desc) {
		return "descending";
	}
	else
		return "mixed";
}