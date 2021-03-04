//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//typedef struct Sh {
//	int x;
//	int y;
//	int level = 2;
//	int eatcnt = 0;
//	int movecnt = 0;
//}sh;
//
//int map[21][21];
//bool visited[21][21];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int N;
//
//
//
//queue<sh>Q;
//
//
//void BFS(sh start) {
//	sh current;
//	while (!Q.empty()) {
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.level = Q.front().level;
//		current.movecnt = Q.front().movecnt;
//		current.eatcnt = Q.front().eatcnt;
//		
//
//
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//
//			if (map[x][y] > current.level) { continue; }
//
//
//		}
//
//
//	}
//}
//
//
//int main() {
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> map[i][j];
//		}
//	}
//	sh start;
//
//	int onecnt = 0;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (map[i][j] == 1) {
//				onecnt++;
//			}
//			if (map[i][j] == 9) {
//				start.x = i;
//				start.y = j;
//			}
//		}
//	}
//
//
//
//	if (onecnt == 0) {
//		printf("0");
//	}
//	else if (onecnt == 1) {
//		
//		Q.push(start);
//		BFS(start);
//
//
//	}
//
//
//
//
//
//
//
//
//
//
//}