//#include<stdio.h>
//#include<stdlib.h>
//
//int N;
//int ch[11];
//
//void DFS(int L) {
//	//종료지점
//	if (L == N + 1) {
//		for (int i = 1; i < N + 1; i++) {
//			if (ch[i] == 1) {
//				printf("%d ", i);
//			}
//		}
//		printf("\n");
//	}
//	else{
//		ch[L] = 1;
//		DFS(L + 1);
//		ch[L] = 0;
//		DFS(L+1);
//	}
//}
//
//int main() {
//	scanf("%d", &N);
//
//	DFS(1);
//}