#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

vector<double> result_arr;
void average(vector<int> temp_arr, int sum);

int main(void) {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	int C;

	cin >> C;

	for (int i = 0; i < C; i++) {
		vector<int> temp_arr;
		int N, sum=0;
		cin >> N;
		for (int j = 0; j < N; j++) {
			int temp;
			cin >> temp;

			temp_arr.push_back(temp);
			sum += temp;
		}
		average(temp_arr, sum);
	}

	for (int i = 0; i < result_arr.size(); i++)
		printf("%.3f%%\n", result_arr[i]);

	return 0;
}

void average(vector<int> temp_arr, int sum) {
	double avg = sum / temp_arr.size();
	int count = 0;
	for (int i = 0; i < temp_arr.size(); i++)
		if (temp_arr[i] > avg) 
			count++;

	result_arr.push_back(round((double)count/temp_arr.size()*100 *1000)/1000);
}