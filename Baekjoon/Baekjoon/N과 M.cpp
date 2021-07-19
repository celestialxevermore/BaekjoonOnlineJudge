//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int N, M;
//int arr[9];
//bool visited[10000];
//int res[9];
//int cnt = 0;
//
//void DFS(int start, int level) {
//
//	if (level == M) {
//		for (int i = 0; i < M; i++) {
//			printf("%d ", res[i]);
//		}
//		printf("\n");
//		return;
//	}
//	else {
//
//		for (int i = 1; i <= 10000; i++) {
//			if (visited[i]) {
//				//printf("current i : %d visited[i] : %d \n\n", i,visited[i]);
//				visited[i] = false;
//				res[level] = i;
//				level = level + 1;
//				//printf("DFS(%d, %d)\n\n", i, level);
//				DFS(i, level);
//				visited[i] = true;
//				level--;
//			}
//			
//		}
//
//
//	}
//
//
//}
//int main() {
//
//	
//	cin >> N >> M;
//	
//	for (int i = 0; i < N; i++) {
//		int input;
//		cin >> input;
//		
//		visited[input] = true;
//		//printf("visited[input] : %d\n\n", visited[input]);
//		
//	}
//
//	
//	DFS(1, 0);
//	
//	
//}