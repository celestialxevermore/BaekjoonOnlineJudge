//#include<iostream>
//#include<stdio.h>
//#include<queue>
//
//using namespace std;
//
//#define M 2001
//#define N 2001
//
//int map[M][N];
//char tmp[M][N];
//
//bool visited[M][N];
//
//int m, n;
//
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//
//int flag = 0;
//
//queue<pair<int, int>>Q;
//
//
//
//void BFS() {
//
//	pair<int, int>current;
//
//
//	while (!Q.empty()) {
//
//		current.first = Q.front().first;
//		current.second = Q.front().second;
//		Q.pop();
//
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.first + dx[i];
//			int y = current.second + dy[i];
//
//			if (x<1 || y<1 || x>m || y>n) { continue; }
//			if (map[x][y] == 1) { continue; }
//
//			if (!visited[x][y] && map[x][y] == 0) {
//				visited[x][y] = true;
//				pair<int, int>next;
//
//
//				next.first = x;
//				next.second = y;
//
//				Q.push(next);
//			}
//		}
//
//
//
//	}
//
//
//
//}
//
//
//int main() {
//
//
//	cin >> m >> n;
//
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= n; j++) {
//			scanf_s("%1d", &map[i][j]);
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//
//		if (map[1][i] == 0) {
//			pair<int, int>start;
//
//			start.first = 1;
//			start.second = i;
//
//			visited[start.first][start.second] = true;
//
//			
//			Q.push(start);
//			BFS();
//
//
//
//			for (int j = 1; i <= n; j++) {
//				if (visited[m][j]) {
//					flag = 1;
//					break;
//				}
//			}
//
//		}
//
//
//
//	}
//
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
//}
