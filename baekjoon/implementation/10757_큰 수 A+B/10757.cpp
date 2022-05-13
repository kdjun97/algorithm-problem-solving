#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string a,b;

void answer();
void init_num1(string a); // num1 벡터 초기화 함수
void init_num2(string b); // num2 벡터 초기화 함수
vector<int> num1;
vector<int> num2;
vector<int> result;
void sum();

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> a >> b;
  // 역순으로 push
  init_num1(a);
  init_num2(b);
  // 각 자릿수 더하기
  sum();
  // reverse로 정답 도출
  answer();
  
  return 0;
}

void sum() {
  int count=0;
  int carry=0; // 10이상일 경우 carry 값
  while(1) {
    if (num1.size()-1 < count && num2.size()-1 < count && carry==0)
      break;

    int temp=0;
    temp+=carry;
    carry=0;
    
    if (num1.size()-1 >= count) // 배열이 존재함
      temp+=num1[count];
    if (num2.size()-1 >= count) // 배열이 존재함
      temp+=num2[count];
    if (temp>=10) // 10이상일 경우 carry 발생
      carry=temp/10;
    
    result.push_back(temp%10);
    count++;
  }
}

void answer() {  
  reverse(result.begin(), result.end());

  vector<int>::iterator it;
  for (it = result.begin(); it!=result.end(); it++)
    cout << *it;
}

void init_num1(string a) {
  for (int i = a.length()-1 ; i >= 0 ; i--)
    num1.push_back(a[i]-48);
}

void init_num2(string b) {
  for (int i = b.length()-1 ; i >= 0 ; i--)
    num2.push_back(b[i]-48);
}