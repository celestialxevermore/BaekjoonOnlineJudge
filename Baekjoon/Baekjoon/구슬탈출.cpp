//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//pair<pair<int, int>, int>Red;
//pair<int, int>Blue;
//pair<int, int>O;
//int r, c;
//char map[11][11];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//queue < pair<pair<int, int>, int> > Q1;
//queue<pair<int, int>>Q2;
//
//void BFS(pair < pair<int, int>, int> Red) {
//	pair< pair<int, int>, int>current;
//
//	while (!Q1.empty()) {
//		//멈춘 지점에서 바로 시작합니다.
//		current.first.first = Q1.front().first.first;
//		current.first.second = Q1.front().first.second;
//		current.second = Q1.front().second;
//		Q1.pop();
//
//		//도착 지점을 설정합니다.
//		if (map[current.first.first][current.first.second] == 'O') {
//			printf("1");
//		}
//		for (int i = 0; i < 4; i++) {
//			int x = current.first.first + dx[i];
//			int y = current.first.second + dy[i];
//
//
//			if (x == O.first && y == O.second) {
//				pair<pair<int, int>, int>next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = current.second;
//				next.second++;
//				Q1.push(next);
//			}
//			if (map[x][y] == '.') {
//				//남쪽인 경우
//				if (dx[i] == 1 && dy[i] == 0) {
//					while (map[x][y] != '#') {
//						x += 1;
//					}
//					pair<pair<int, int>, int>next;
//					next.first.first = x;
//					next.first.second = y;
//					next.second = current.second;
//					next.second++;
//
//				}
//
//
//			}
//
//
//
//
//
//		}
//
//
//
//
//	}
//
//
//
//}
//
//int main() {
//	
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (map[i][j] == 'R') {
//				Red.first.first = i;
//				Red.first.second = j;
//				Red.second = 0;
//			}
//			if (map[i][j] == 'B') {
//				Blue.first= i;
//				Blue.second = j;
//				
//			}
//			if (map[i][j] == 'O') {
//				O.first = i;
//				O.second = j;
//			}
//		}
//	}
//
//	Q.push(Red);
//
//
//
//
//}