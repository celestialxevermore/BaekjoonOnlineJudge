//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//int N, M;
//int wcnt = 1;
//int bcnt = 1;
//int W = 0;
//int B = 0;
//
//char map[101][101];
//bool visited[101][101];
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//void DFS(pair<pair<int, int>, pair<int, char>>start) {
//
//
//	for (int i = 0; i < 4; i++) {
//		int nx = start.first.first + dx[i];
//		int ny = start.first.second + dy[i];
//		int nc = start.second.first + 1;
//		if (nx >= 1 && nx <= M && ny >= 1 && ny <= N && !visited[nx][ny] && map[nx][ny] == start.second.second) {
//			visited[nx][ny] = true;
//			
//
//			pair<pair<int, int>, pair<int, int>>next;
//			next.first.first = nx;
//			next.first.second = ny;
//			next.second.first = nc;
//			next.second.second = start.second.second;
//			
//			if (start.second.second == 'W') {
//				wcnt += 1;
//			}
//			else {
//				bcnt += 1;
//			}
//
//			DFS(next);
//		}
//	}
//
//	
//}
//
//
//int main() {
//
//	cin >> N >> M;
//
//	for (int i = 1; i <= M; i++) {
//		string inputs = "";
//		cin >> inputs;
//		for (int j = 0; j < inputs.size(); j++) {
//			map[i][j + 1] = inputs[j];
//		}
//	}
//
//	for (int i = 1; i <= M; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (!visited[i][j]) {
//				visited[i][j] = true;
//				pair<pair<int, int>, pair<int, char>>start;
//				start.first.first = i;
//				start.first.second = j;
//				start.second.first = 1;
//				start.second.second = map[i][j];
//				
//				DFS(start);
//				if (start.second.second == 'W') {
//					wcnt = wcnt * wcnt;
//					W += wcnt;
//					wcnt = 1;
//				}
//				else {
//					bcnt = bcnt * bcnt;
//					B += bcnt;
//					bcnt = 1;
//				}
//				
//			}
//		}
//	}
//
//
//	printf("%d %d", W, B);
//}
//
