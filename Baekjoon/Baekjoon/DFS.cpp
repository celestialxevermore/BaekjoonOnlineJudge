//#include<stdio.h>
//#include<stdlib.h>
//
//int N;
//int* set;
//int* check;
//void DFS(int Level) {
//	if (Level == N + 1) {
//		for (int i = 1; i < N + 1; i++) {
//			if (check[i] == 1) {
//				printf("%d ", i);
//			}
//		}
//		printf("\n");
//	}
//	//만일 끝까지 내려간 게 아니라면
//	else {
//		check[Level] = 1;
//		DFS(Level + 1);
//		check[Level] = 0;
//		DFS(Level + 1);
//	}
//}
//
//
//
//int main() {
//
//
//	scanf("%d", &N);
//
//	set = (int*)malloc(sizeof(int) * (N + 1));
//	 check = (int*)malloc(sizeof(int) * (N + 1));
//	 DFS(1);
//
//}