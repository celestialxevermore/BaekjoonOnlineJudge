//#include<stdio.h>
//#include<iostream>
//
//using namespace std;
//int N,R;
//
//int dy[21][21];
//
//int DFS(int N, int R) {
//	if (dy[N][R] > 0)return dy[N][R];
//	if (N == R || R == 0)return 1;
//	else {
//		return dy[N][R]=DFS(N - 1, R - 1) + DFS(N - 1, R);
//	}
//}
//
//
//
//int main() {
//	scanf("%d %d", &N,&R);
//	DFS(N, R);
//	printf("%d \n", DFS(N, R));
//
//}	