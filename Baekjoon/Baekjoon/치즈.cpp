//#include<iostream>
//#include<stdio.h>
//#include<vector>
//using namespace std;
//int N, M;
//
//
//int map[101][101][2];
//bool gvisited[101][101];
//bool wvisited[101][101];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//
//void BFS0(int i,int j) {
//
//	for (int i = 0; i < 4; i++) {
//		int x = i + dx[i];
//		int y = i + dy[i];
//
//		if (x > 0 && y > 0 && x <= N && y <= M) {
//
//			if (!wvisited[x][y] && map[x][y][0] == 0 && map[x][y][1] == 0) {
//				wvisited[x][y] = true;
//				map[i][j][0] = 0;
//			}
//
//		}
//
//
//
//	}
//
//
//}
//
//
//void findnew0() {
//
//	for (int i = 0; i <= N; i++) {
//		for (int j = 0; j <= M; j++) {
//			if (map[i][j][0] == 0&&map[i][j][1]==1) {
//				wvisited[i][j] = true;
//
//
//
//
//			}
//		}
//	}
//
//}
//void melt() {
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			int cnt = 0;
//			if (map[i][j][0] == 1) {
//				
//				for (int i = 0; i < 4; i++) {
//					int x = i + dx[i];
//					int y = j + dy[i];
//					if (map[x][y][0] == 0&&map[x][y][1]==0) {
//						cnt++;
//					}
//					if (map[x][y][0] == 0 && map[x][y][1] == 1) {
//						continue;
//					}
//
//				}
//			}
//			if (cnt >= 3) {
//				map[i][j][0] = 0;
//			}
//
//
//
//		}
//	}
//}
//
//int main() {
//
//
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j][0];
//			
//			visited[i][j] = false;
//			
//		}
//	}
//
//
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//
//			if (map[i][j][0] == 1) {
//
//
//
//
//			}
//
//
//
//
//		}
//	}
//}