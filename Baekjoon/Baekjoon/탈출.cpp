//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
////물 먼저 이동
////그 다음 고슴도치 이동 
//char map[51][51];
//bool visited [51][51];
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int r, c;
//queue< pair<pair<int, int>,int>> Q1;
//queue< pair<pair<int, int>,int>> Q2;
//
//void BFS(pair<pair<int, int>,int> water, pair < pair<int, int>,int> gosm) {
//
//	while (!Q1.empty()&&!Q2.empty()) {
//
//		pair<pair<int, int>, int>water;
//		pair<pair<int, int>, int>gosm;
//		
//
//		while (water.second <= gosm.second) {
//
//			water.first.first = Q1.front().first.first;
//			water.first.second = Q1.front().first.second;
//			water.second = Q1.front().second;
//			gosm.first.first = Q2.front().first.first;
//			gosm.first.second = Q2.front().first.second;
//			gosm.second = Q2.front().second;
//			Q1.pop();
//			Q2.pop();
//
//
//
//
//			for (int i = 0; i < 4; i++) {
//				
//				int x = water.first.first + dx[i];
//				int y = water.first.second + dy[i];
//				int z = water.second; z++;
//
//				if (x < 0 || y < 0 || x >= r || y >= c) {
//					printf("Water // (%d,%d) : 해당 좌표는 지도의 범위를 벗어납니다. \n\n", x, y);
//					continue;
//				}
//				if (map[x][y] == 'X') {
//					printf("Water // (%d,%d) : 해당 좌표는 돌입니다. \n\n", x, y);
//					continue;
//				}
//				if (map[x][y] == '.'||map[x][y]=='S') {
//					printf("Water pushpush// (%d,%d) : 해당 좌표로 물이 새로 흘러들어옵니다. \n\n", x, y);
//					pair<pair<int, int>, int>next;
//					next.first.first = x;
//					next.first.second = y;
//					next.second = z;
//					Q1.push(next);
//				}
//
//			}
//
//
//		}
//		for (int i = 0; i < 4; i++) {
//			int x = gosm.first.first + dx[i];
//			int y = gosm.first.second + dy[i];
//			int z = gosm.second; z++;
//			if (x < 0 || y < 0 || x >= r || y >= c) {
//				printf("Gosm // (%d,%d) : 해당 좌표는 지도의 범위를 벗어납니다. \n\n", x, y);
//				continue;
//			}
//			if (map[x][y] == '*'||visited[x][y]) {
//				printf("Gosm // (%d,%d) : 해당 좌표에는 이미 물이 넘쳐있습니다. \n\n", x, y);
//				continue;
//			}
//			if (map[x][y] == 'X') {
//				printf("Gosm // (%d,%d) : 해당 좌표에는 바위가 존재합니다. \n\n", x, y);
//				continue;
//			}
//			if (map[x][y] == '.' && !visited[x][y]) {
//				printf("Gosm // (%d,%d) : 해당 좌표로 고슴도치가 이동합니다. \n\n", x, y);
//				pair<pair<int, int>, int>next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = z;
//				printf("Gosm // (%d,%d) : 현재까지의 고슴도치의 이동 계수 : %d \n\n", next.second);
//				Q2.push(next);
//			}
//
//		}
//
//	}
//
//}
//
//
//
//int main() {
//	cin >> r >> c;
//
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> map[i][j];
//		}
//	}
//	
//	int waterr, waterc;
//	int gosmr, gosmc;
//	pair<pair<int, int>,int> water;
//	pair<pair<int, int>,int>gosm;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (map[i][j] == '*') {
//				waterr = i;
//				waterc = j;
//				water.first.first = waterr;
//				water.first.second = waterc;
//				water.second = 0;
//				visited[i][j] = true;
//				
//			}
//			if (map[i][j] == 'S') {
//				gosmr = i;
//				gosmc = j;
//				gosm.first.first = i;
//				gosm.first.second = j;
//				gosm.second = 0;
//				visited[i][j] = true;
//			}
//		}
//	}
//	Q1.push(water);
//	Q2.push(gosm);
//	
//	BFS(water, gosm);
//
//
//}