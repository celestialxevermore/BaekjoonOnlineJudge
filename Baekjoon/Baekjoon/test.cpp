//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<queue>
//#include<string>
//#define MAX 10001
//
//using namespace std;
//
//int M, N;
//
//int map[MAX][MAX];
//bool visited[MAX][MAX];
//int flag = 0;
//
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//
//queue<pair<int, int>>Q;
//
//void BFS() {
//
//	pair<int, int>current;
//
//	while (!Q.empty()) {
//
//		current = Q.front();
//		Q.pop();
//
//		for (int i = 0; i < 4; i++) {
//
//			int x = current.first + dx[i];
//			int y = current.second + dy[i];
//
//
//			if (x >= 1 && x <= M && y >= 1 && y <= N && !visited[x][y] && map[x][y] == 0) {
//				visited[x][y] = true;
//
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//
//				Q.push(next);
//
//			}
//
//		}
//	}
//
//
//
//}
//
//int main() {
//
//	cin >> M >> N;
//
//	for (int i = 0; i < M; i++) {
//		string a;
//
//		cin >> a;
//
//		for (int j = 0; j < a.size(); j++) {
//			map[i + 1][j + 1] = a[j]-'0';
//		}
//	}
//	
//	/*for (int i = 1; i <= M; i++) {
//		for (int j = 1; j <= N; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}*/
//
//
//	for (int i = 1; i <= N; i++) {
//
//		if (map[1][i] == 0) {
//
//			pair<int, int>start;
//			start.first = 1;
//			start.second = i;
//			Q.push(start);
//			visited[start.first][start.second] = true;
//			BFS();
//
//			for (int j = 1; j <= N; j++) {
//				if (visited[M][j]) {
//					flag = 1;
//					break;
//				}
//			}
//
//
//
//
//		}
//
//
//
//	}
//
//
//	if (flag == 1) {
//		printf("YES");
//	}
//	else {
//		printf("NO");
//	}
//
//
//
//}