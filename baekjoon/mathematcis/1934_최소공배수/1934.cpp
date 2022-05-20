#include <iostream>
#include <vector>

using namespace std;

vector<int> num;
int gcd(int A, int B);
int lcd(int A, int B);

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int T;

  cin >> T;

  for (int i=0; i<T; i++) {
    int A,B;
    cin >> A >> B;
    num.push_back(lcd(A,B));
  }

  vector<int>::iterator it;
  for (it=num.begin(); it!=num.end(); it++)
    cout << *it << "\n";
  
  return 0;
}

int gcd(int A, int B) {
  return (B==0) ? A : gcd(B,A%B);
}

int lcd(int A, int B) {
  return A*B / gcd(A,B);
}