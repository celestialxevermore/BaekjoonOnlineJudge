//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//
//int T;
//int M, N;
//int K;
//int map[51][51];
//bool visited[51][51];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//
//int ans = 0;
//queue<pair<int, int>>Q;
//
//
//void BFS() {
//
//	pair<int, int>current;
//
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.first + dx[i];
//			int y = current.second + dy[i];
//
//			if (map[x][y] == 1 && !visited[x][y]&&x>=1&&y>=1&&x<=M&&y<=N) {
//				visited[x][y] = true;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				Q.push(next);
//			}
//
//
//		}
//
//
//	}
//
//
//	
//}
//
//
//
//
//int main() {
//
//	cin >> T;
//
//	int answer[100000];
//
//	int start = 0;
//	while (start < T) {
//
//		cin >> M >> N >> K;
//		for (int i = 1; i <= K; i++) {
//			int x, y;
//			cin >> x >> y;
//			map[x + 1][y + 1] = 1;
//		}
//
//
//
//
//		for (int i = 1; i <= M; i++) {
//			for (int j = 1; j <= N; j++) {
//				if (map[i][j] == 1 && !visited[i][j]) {
//					//printf("start : %d %d %d \n", i, j,ans);
//					ans++;
//					visited[i][j] = true;
//					pair<int, int>start;
//					start.first = i;
//					start.second = j;
//					Q.push(start);
//					BFS();
//					
//				}
//
//			}
//		}
//
//		//printf("%d\n", ans);
//		answer[start] = ans;
//		ans = 0;
//		for (int i = 1; i <= 50; i++) {
//			for (int j = 1; j <= 50; j++) {
//				map[i][j] = 0;
//				visited[i][j] = false;
//			}
//		}
//		M = N = K= 0;
//		start = start + 1;
//
//
//
//
//
//
//	}
//
//
//
//	for (int i = 0; i < start; i++) {
//		printf("%d\n", answer[i]);
//	}
//
//}
//
//
//
