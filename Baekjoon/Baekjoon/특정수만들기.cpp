//#include<stdio.h>
//#include<stdlib.h>
//
//int N;
//int M;
//int count = 0;
//int a[11];
//int path[11];
//
//
//void DFS(int L, int val) {
//	//완성된 경우
//	if (L == N + 1) {
//		if (val == M) { count++; 
//		for (int i = 1; i < L; i++) {
//			printf("%d ", path[i]);
//		}
//		printf("\n");
//		}
//		
//	}
//	else {
//		path[L] = a[L];
//		DFS(L + 1, val + a[L]);
//		path[L] = -a[L];
//		DFS(L + 1, val - a[L]);
//		path[L] = 0;
//		DFS(L + 1, val);
//	}
//}
//
//
//int main() {
//	
//	scanf("%d %d", &N,&M);
//	for (int i = 1; i <= N; i++) {
//		scanf("%d", &a[i]);
//	}
//
//
//	DFS(1, 0);
//	if (count == 0) { printf("-1 \n"); }
//	else {
//		printf("%d \n", count);
//	}
//
//
//}