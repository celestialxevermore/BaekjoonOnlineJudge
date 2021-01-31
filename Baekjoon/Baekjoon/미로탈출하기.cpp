//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<string.h>
//#define MAX 501
//using namespace std;
//
//
//int N, M;
//queue<pair<pair<int, int>,int>>Q;
//char map[MAX][MAX];
//bool visited[MAX][MAX];
//int cnt = 0;
//int BFS(pair<pair<int, int>,char> start) {
//
//	while (!Q.empty()) {
//		int x = Q.front().first.first;
//		int y = Q.front().first.second;
//		char z = Q.front().second;
//
//		Q.pop();
//		if (z == 'R') {
//			y++;
//			if (y >= M) { for (int i = 0; i < MAX; i++) {
//				for (int j = 0; j < MAX; j++) {
//					visited[i][j] = false;
//				}
//			}
//			return 1; }
//			if (visited[x][y]) { return 0; }
//			 if (!visited[x][y]) {
//				visited[x][y] = true;
//				pair<pair<int, int>, char>next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = map[next.first.first][next.first.second];
//				Q.push(next);
//			}
//		}
//		if (z == 'L') {
//			y--;
//			if (y < 0) {
//				for (int i = 0; i < MAX; i++) {
//					for (int j = 0; j < MAX; j++) {
//						visited[i][j] = false;
//					}
//				}
//				return 1; }
//			if (visited[x][y]) { return 0; }
//			if (!visited[x][y]) {
//				visited[x][y] = true;
//				pair<pair<int, int>, char>next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = map[next.first.first][next.first.second];
//				Q.push(next);
//			}
//		}
//		if (z == 'U') {
//			x--;
//			if (x < 0) {
//				for (int i = 0; i < MAX; i++) {
//					for (int j = 0; j < MAX; j++) {
//						visited[i][j] = false;
//					}
//				}
//				return 1; }
//			if (visited[x][y]) { return 0; }
//			if (!visited[x][y]) {
//				visited[x][y] = true;
//				pair<pair<int, int>, char>next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = map[next.first.first][next.first.second];
//				Q.push(next);
//			}
//		}
//		if (z == 'D') {
//			x++;
//			if (x >= N) {
//				for (int i = 0; i < N; i++) {
//					memset(visited[i], false, sizeof(bool) * M);
//				}
//
//				return 1; }
//			if (visited[x][y]) { return 0; }
//			if (!visited[x][y]) {
//				visited[x][y] = true;
//				pair<pair<int, int>, char>next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = map[next.first.first][next.first.second];
//				Q.push(next);
//			}
//		}
//
//
//
//	}
//
//}
//
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	int ans = 0;
//	
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			visited[i][j] = true;
//			pair<pair<int, int>,char>start;
//			start.first.first = i;
//			start.first.second = j;
//			start.second = map[i][j];
//
//			Q.push(start);
//			ans+=BFS(start);
//			
//		}
//	}
//	printf("%d ", ans);
//
//
//
//
//
//}