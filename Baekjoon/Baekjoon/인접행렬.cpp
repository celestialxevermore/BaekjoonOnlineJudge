//#include<stdio.h>
//#include<stdlib.h>
//
//
//int main() {
//	int N, M;
//
//	scanf("%d %d", &N,&M);
//
//
//	int** map = (int**)malloc(sizeof(int*) * (N + 1));
//	for (int i = 0; i < N + 1; i++) {
//		map[i] = (int*)malloc(sizeof(int) * (N + 1));
//	}
//
//	for (int i = 1; i < N + 1; i++) {
//		for (int j = 1; j < N + 1; j++) {
//			map[i][j] = 0;
//		}
//		printf("\n");
//	}
//
//	int SNode, TNode,Cost;
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d %d", &SNode, &TNode, &Cost);
//		map[SNode][TNode] = Cost;
//	}
//
//	for (int i = 1; i < N + 1; i++) {
//		for (int j = 1; j < N + 1; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//
//
//}