//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//
//typedef struct Cl {
//	int x;
//	int y;
//	int cleancnt = 0;
//	int movecnt = 0;
//}cl;
//
//
//int N, M;
//char map[21][21];
//bool visited[21][21];
//int clcnt = 0;
//int minimum = 10000;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//queue<cl>Q;
//
//void BFS(cl start) {
//	cl current;
//	int flag = 0;
//	while (!Q.empty()) {
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.cleancnt = Q.front().cleancnt;
//		current.movecnt = Q.front().movecnt;
//
//
//		if (current.cleancnt == clcnt) {
//			flag = 1;
//			if (minimum > current.movecnt) {
//				minimum = current.movecnt;
//				break;
//			}
//		}
//
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//
//			if (x<1 || y<1 || x>M || y>N) {
//				continue;
//			}
//			if (map[x][y] == 'x') {
//				continue;
//			}
//			if (!visited[x][y] && map[x][y] == '.') {
//				visited[x][y] = true;
//				cl next;
//				next.x = x;
//				next.y = y;
//				next.cleancnt = current.cleancnt;
//				next.movecnt = current.movecnt;
//				next.movecnt++;
//				Q.push(next);
//				visited[x][y] = false;
//			}
//			if (!visited[x][y] && map[x][y] == '*') {
//				visited[x][y] = true;
//				cl next;
//				next.x = x;
//				next.y = y;
//				next.cleancnt = current.cleancnt;
//				next.cleancnt++;
//				next.movecnt = current.movecnt;
//				next.movecnt++;
//				Q.push(next);
//				visited[x][y] = false;
//			}
//
//		}
//
//
//	}
//
//	if (flag == 0) {
//		printf("-1");
//	}
//}
//
//int main() {
//
//
//
//	N = -1;
//	M = -1;
//
//
//
//	while (N != 0 && M != 0) {
//
//		cin >> N >> M;
//		cl start;
//
//		for (int i = 1; i <= M; i++) {
//			for (int j = 1; j <= N; j++) {
//				cin >> map[i][j];
//			}
//		}
//
//
//		for (int i = 1; i <= M; i++) {
//			for (int j = 1; j <= N; j++) {
//				if (map[i][j] == 'o') {
//
//					start.x = i, start.y = j;
//				}
//				if (map[i][j] == '*') {
//					clcnt++;
//				}
//			}
//		}
//		Q.push(start);
//		BFS(start);
//		printf("%d\n", minimum);
//
//	}
//
//}
//		
//
