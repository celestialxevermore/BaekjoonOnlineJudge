//#include<stdio.h>
//#include<stdlib.h>
//#include<vector>
//
//using namespace std;
//
//int main() {
//
//	int N;
//	scanf("%d", &N);
//	int** map = (int**)malloc(sizeof(int*) * (N+2));
//	for (int i = 0; i < N+2; i++) {
//		map[i] = (int*)malloc(sizeof(int) * (N+2));
//	}
//
//
//	//0으로 다 발라버리기
//	for (int i = 0; i < N + 2; i++) {
//		for (int j = 0; j < N + 2; j++) {
//			map[i][j] = 0;
//		}
//	}
//
//	for (int i = 1; i < N+1; i++) {
//		for (int j = 1; j < N+1; j++) {
//			//map[i][j] = 0;
//
//			scanf("%d", &map[i][j]);
//		}
//	}
//	//////체크체크
//	//for (int i = 0; i < N; i++) {
//	//	for (int j = 0; j < N; j++) {
//	//		printf("%d ", map[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	
//	int ans = 0;
//	for (int i = 1; i < N + 1; i++) {
//		for (int j = 1; j < N + 1; j++) {
//			if (map[i][j] > map[i - 1][j] && map[i][j] > map[i + 1][j] && map[i][j] > map[i][j - 1] && map[i][j] > map[i][j + 1])
//				ans++;
//		}
//	}
//
//	printf("%d ", ans);
//}