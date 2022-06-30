#include <iostream>

using namespace std;

void sentence();
void recursion(int N);

int ct=0;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;
  
  sentence();
  recursion(N);
  
  return 0;
}

void sentence() {
  cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
}

void recursion(int N) {
  string blank = "";
  for (int i=0; i<ct; i++)
    blank+="____";
  
  if (N == 0) {
    cout << blank << "\"재귀함수가 뭔가요?\"\n";
    cout << blank << "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";    
  }
  else {
    cout << blank << "\"재귀함수가 뭔가요?\"\n";
    cout << blank << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
    cout << blank << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
    cout << blank << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
    ct++;
    recursion(N-1);
  }
  cout << blank << "라고 답변하였지.\n";
}