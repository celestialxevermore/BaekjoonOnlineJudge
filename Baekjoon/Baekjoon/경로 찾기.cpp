//#include<stdio.h>
//#include<iostream>
//using namespace std;
//
//int N;
//int map[101][101];
//int res[101][101];
//bool visited[101];
//
//void DFS(int start) {
//	
//		for (int i = 1; i <= N; i++) {
//			if (map[start][i] == 1&&!visited[i]) {
//				
//				res[start][i] = 1;
//				//printf("DFS(%d)½ÃÀÛ\n\n", i);
//				visited[i] = true;
//				DFS(i);
//			}
//		}
//}
//
//
//int main() {
//
//	cin >> N;
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> map[i][j];
//		}
//	}
//	
//	for (int i = 1; i <= N; i++) {
//		DFS(i);
//		for (int j = 1; j <= N; j++) {
//			if (visited[j]) { res[i][j] = 1; }
//		}
//
//
//		for (int i = 1; i <= N; i++) {
//			visited[i] = false;
//		}
//	}
//
//
//
//
//
//	printf("\n");
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			printf("%d ", res[i][j]);
//		}
//		printf("\n");
//	}
//}