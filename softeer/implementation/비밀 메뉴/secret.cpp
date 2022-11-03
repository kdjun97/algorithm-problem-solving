#include<iostream>
#include<vector>

using namespace std;

int M, N, K;

string rec="";
string button="";

void input_rec();
void input_button();
bool sol();

int main(int argc, char** argv)
{
	cin >> M >> N >> K;

	input_rec();
	input_button();
	bool check = sol();
	check == true ? cout << "secret" : cout << "normal";

	return 0;
}

void input_rec() {
	for (int i=0; i<M ; i++) {
		int temp;
		cin >> temp;
		rec+=to_string(temp);
	}
}

void input_button() {
	for (int i=0; i<N ; i++) {
		int temp;
		cin >> temp;
		button+=to_string(temp);
	}
}

bool sol() {
	if (rec.size() > button.size())
		return false;
	
	return (button.find(rec) != string::npos) ? true : false;
}