//#include<stdio.h>
//#include<stdlib.h>
//
//int** map;
//int* check;
//int N;
//int M;
//int count = 0;
//
//
//void DPS(int vertex) {
//	if (vertex == N ) {
//		printf("%d", count);
//	}
//	else {
//		for (int i = 1; i < N + 1; i++) {
//			if (map[vertex][i] == 1 && check[i] == 0) {
//				check[i] = 1;
//				//DPS(vertex + 1);
//				DPS(i);
//				check[i] = 0;
//			}
//		}
//	}
//}
//int main() {
//	scanf("%d %d", &N, &M);
//
//	 map = (int**)malloc(sizeof(int*) * (N + 2));
//	 check = (int*)malloc(sizeof(int) * (N + 1)); //방문 정보 탐색
//	 for (int i = 0; i < N + 2; i++) {
//		 map[i] = (int*)malloc(sizeof(int) * (N + 2));
//	 }
//
//	 for (int i = 0; i < N+2; i++) {
//		 for (int j = 0; j < N+2 ; j++) {
//			 map[i][j] = 0;
//		 }
//	 }
//	 for (int i = 0; i < N+2 ; i++) {
//		 for (int j = 0; j < N+2; j++) {
//			 printf("%d ", map[i][j]);
//		 }
//		 printf("\n");
//	 }
//
//	 int SNode, TNode;
//
//	 for (int i = 0; i < M; i++) {
//		 scanf("%d %d", &SNode,&TNode);
//		 map[SNode][TNode] = 1;
//	 }
//	 for (int i = 0; i < N+2; i++) {
//		 for (int j = 0; j < N + 2; j++) {
//			 printf("%d ", map[i][j]);
//		 }
//		 printf("\n");
//	 }
//	 check[1] = 1;
//	 //DPS(1);
//
//
//	
//
//
//}