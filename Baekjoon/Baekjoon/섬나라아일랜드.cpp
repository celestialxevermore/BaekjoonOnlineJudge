//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//#include<queue>
//#include<vector>
//
//using namespace std;
//
//bool visited[21][21];
//int map[21][21];
//pair<int, int> vertex;
//queue< pair<int, int> > Q;
//int N;
//int cnt = 0;
//int dx[8] = { -1,1,0,0,-1,1,-1,1};
//int dy[8] = { 0, 0, 1,-1,-1,1,1,-1};
//
//void BFS(pair<int, int> vertex) {
//
//	while (!Q.empty()) {
//		pair<int, int>current;
//		current.first = Q.front().first;
//		current.second = Q.front().second;
//		Q.pop();
//		for (int i = 0; i < 8; i++) {
//			int x = current.first + dx[i];
//			int y = current.second + dy[i];
//			if (x < 0 || y < 0 || x >= N || y >= N) { continue; }
//			if (visited[x][y]) { continue; }
//
//			if (map[x][y] == 0) { continue; }
//
//			if (map[x][y] == 1 && !visited[x][y]) {
//				visited[x][y] = true;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				Q.push(next);
//
//			}
//		}
//
//
//
//
//
//	}
//	cnt++;
//
//
//}
//
//
//
//int main() {
//
//	cin >> N;
//
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (map[i][j] == 1 && !visited[i][j]) {
//				visited[i][j] = true;
//				pair<int, int>start;
//				start.first = i;
//				start.second = j;
//
//				Q.push(start);
//				BFS(start);
//			}
//		}
//	}
//
//	printf("%d", cnt);
//
//}