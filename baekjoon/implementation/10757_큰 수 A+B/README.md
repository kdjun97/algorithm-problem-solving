# 백준 10757번 - 큰 수 A+B

1. input을 string으로 받음.   
1. 각 input을 vector에 역순으로 넣음.
	- ex) input = 1234, vector<int> v = {4,3,2,1}  
	- string이니 각 index - 48 적용
1. 각 vector index 0부터 size()만큼 돌며 두 벡터의 값을 더해줌.  
1. 또한, carry가 발생하면 더해줌.  
1. 더한 값을 result vector에 넣음.  
1. 역순으로 출력  