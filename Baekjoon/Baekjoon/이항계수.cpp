//#include<iostream>
//#include<stdio.h>
//
//using namespace std;
//int dy[21][21];
//
//int DFS(int n,int r) {
//	if (n == r || r == 0)return 1;
//	
//	//0보다 크다는 소리는 이미 어떠한 값이 들어가 있다는 소리이니까 
//	//그대로 리턴을 해주면 된다.
//	if (dy[n][r] > 0)return dy[n][r];
//	// 저장하고 리턴한다.
//	else return dy[n][r]=DFS(n - 1, r - 1) + DFS(n-1, r);
//
//
//}
//int main() {
//	
//	int n,r;
//	cin >> n >> r;
//	printf("%d \n", DFS(n,r));
//	return 0;
//
//}