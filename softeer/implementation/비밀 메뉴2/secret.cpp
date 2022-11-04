#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N, M, K;
vector<int> a;
vector<int> b;

int main(int argc, char** argv)
{
	cin >> N >> M >> K;

	for (int i=0; i<N; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
	}
	for (int j=0; j<M; j++) {
		int temp;
		cin >> temp;
		b.push_back(temp);
	}

    int** arr = (int**)malloc(sizeof(int*) * N);
    
    for (int i = 0; i < N; i++) { 
        arr[i] = (int*)malloc(sizeof(int) * M); 
		fill_n(arr[i], M, 0);
    }

	int max_num =0;
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			if (a[i] == b[j]) {
				if (i==0 || j ==0)
					arr[i][j]=1;
				else
					arr[i][j] = arr[i-1][j-1]+1;

				max_num = max(max_num, arr[i][j]);
			}
		}
	}

	cout << max_num;

	return 0;
}