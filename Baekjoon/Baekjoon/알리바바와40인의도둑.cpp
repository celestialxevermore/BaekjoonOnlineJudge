//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//#define MAX 21
//using namespace std;
//
//int map[MAX][MAX];
//int dp[MAX][MAX];
//bool visited[MAX][MAX];
//int n;
//
//typedef struct Node {
//	int x;
//	int y;
//	int dp;
//}node;
//
//
//queue<node>Q;
//int dx[2] = { 0,1 };
//int dy[2] = { 1,0 };
//
//void BFS() {
//	node current;
//	while (!Q.empty()) {
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.dp = Q.front().dp;
//		Q.pop();
//	/*	printf("<<<(%d,%d,%d)에서 탐색을 시작합니다. >>>\n\n", current.x, current.y, current.dp);
//		printf("<<<현재 dp배열의 상태입니다. >>\n\n");
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				printf("%d ", dp[i][j]);
//			}
//			printf("\n");
//		}*/
//		for (int i = 0; i < 2; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//			if (x >= n || y >= n) {continue;}
//
//			if (dp[x][y] > current.dp + map[x][y]) {
//				/*printf("current.dp : %d\n\n", current.dp);
//				printf("map[x][y] : %d\n\n", map[x][y]);*/
//				dp[x][y] = current.dp + map[x][y];
//				node next;
//				next.x = x;
//				next.y = y;
//				next.dp = dp[x][y];
//				//printf("(%d,%d,%d)에서 BFS탐색을 계속합니다. \n\n", next.x, next.y, next.dp);
//				Q.push(next);
//
//			}
//
//
//		}
//
//	}
//	return;
//
//
//}
//
//
//
//int main() {
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> map[i][j];
//			dp[i][j] = 1000;
//		}
//	}
//
//
//
//	node start;
//	start.x = 0;
//	start.y = 0;
//	start.dp = map[0][0];
//
//	
//	dp[0][0] = map[0][0];
//	visited[0][0] = true;
//
//	Q.push(start);
//
//
//	BFS();
//
//	printf("%d ", dp[n - 1][n - 1]);
//
//
//
//
//
//}
//
