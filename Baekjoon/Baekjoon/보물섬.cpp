//#include<iostream>
//#include<stdio.h>
//#include<queue>
//#include<vector>
//
//using namespace std;
//
//char map[51][51];
//bool visited[51][51];
//int dp[51][51];
//
//
//int n, m;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int maxi = -1;
//int cnt = 0;
//queue<pair<pair<int, int>,int>>Q;
//
//void BFS() {
//
//	pair<pair<int, int>,int> current;
//	while (!Q.empty()) {
//		//current = Q .front();
//		current.first.first = Q.front().first.first;
//		current.first.second = Q.front().first.second;
//		current.second = Q.front().second;
//		Q.pop();
//		//printf("current movecnt : %d \n\n", current.second);
//		for (int i = 0; i < 4; i++) {
//
//			int x = current.first.first + dx[i];
//			int y = current.first.second + dy[i];
//
//
//			if (x < 1 || y < 1 || x > n || y > m) {
//				continue;
//			}
//			if (map[x][y] == 'W') { continue; }
//			if (visited[x][y]) { continue; }
//
//			if (!visited[x][y] && map[x][y] == 'L') {
//				visited[x][y] = true;
//				pair<pair<int, int>, int>next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = current.second+1;
//				//("next : %d %d %d \n\n", next.first.first, next.first.second, next.second);
//				Q.push(next);
//
//			}
//
//
//
//		}
//	}
//	if (current.second > maxi) {
//		maxi = current.second;
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			visited[i][j] = false;
//		}
//	}
//
//
//}
//
//
//
//int main() {
//
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (!visited[i][j] && map[i][j] == 'L') {
//				visited[i][j] = true;
//				pair<pair<int, int>,int>start;
//				start.first.first = i;
//				start.first.second = j;
//				start.second = 0;
//				//printf("start : %d %d %d\n\n", start.first.first, start.first.second, start.second);
//				Q.push(start);
//				BFS();
//
//			}
//
//
//
//		}
//	}
//	printf("%d", maxi);
//
//
//
//
//
//}
