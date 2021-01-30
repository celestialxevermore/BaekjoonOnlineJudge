//#include<stdio.h>
//#include<stdlib.h>
//#include<vector>
//#include<iostream>
//using namespace std;
//int n, m;
//int r, c, dir;
//int map[52][52];
//bool cleaned[52][52];
//int cleaningcnt = 0;
////d가 0 : 북 
////d가 1 : 동
////d가 2 : 남
////d가 3 : 서
//
//
//void DFS(pair<int, int> start) {
//	//북쪽인 경우
//	if (dir == 0) {
//		int dx[4] = { 0,-1,1,0 };
//		int dy[4] = { -1,0,0,1 };
//		for (int i = 0; i < 4; i++) {
//			int x = start.first + dx[i];
//			int y = start.second + dy[i];
//			if (x <= 0 || y <= 0 || x > n - 1 || y > m - 1) { continue; }
//			if (map[x][y] == 1) { printf("(%d,%d) : 해당 좌표는 벽이므로 경로를 변경합니다.\n\n", x, y); continue; }
//			if (cleaned[x][y]) {
//				printf("(%d,%d) : 해당 좌표는 이미 청소가 되었으므로 경로를 변경합니다. \n\n", x, y);
//				continue;
//			}
//
//			if (map[x][y] == 0 && !cleaned[x][y]) {
//				printf("(%d,%d) : 해당 좌표는 아직 청소가 되지 않았으므로 청소를 진행합니다.\n\n", x, y);
//				cleaned[x][y] = true;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				cleaningcnt++;
//				DFS(next);
//
//
//			}
//
//		}
//		return;
//	}
//	//동쪽인 경우
//	if (dir == 1) {
//		int dx[4] = {-1,0,1,0 };
//		int dy[4] = {0,-1,0,1 };
//		for (int i = 0; i < 4; i++) {
//			int x = start.first + dx[i];
//			int y = start.second + dy[i];
//			if (x <= 0 || y <= 0 || x > n - 1 || y > m - 1) { continue; }
//			if (map[x][y] == 1) { printf("(%d,%d) : 해당 좌표는 벽이므로 경로를 변경합니다.\n\n", x, y); continue; }
//			if (cleaned[x][y]) {
//				printf("(%d,%d) : 해당 좌표는 이미 청소가 되었으므로 경로를 변경합니다. \n\n", x, y);
//				continue;
//			}
//
//			if (map[x][y] == 0 && !cleaned[x][y]) {
//				printf("(%d,%d) : 해당 좌표는 아직 청소가 되지 않았으므로 청소를 진행합니다.\n\n", x, y);
//				cleaned[x][y] = true;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				cleaningcnt++;
//				DFS(next);
//
//
//			}
//
//		}
//		return;
//	}
//	//남쪽인 경우
//	if (dir == 2) {
//		int dx[4] = { 1,0,-1,0 };
//		int dy[4] = { 0,1,0,-1 };
//		for (int i = 0; i < 4; i++) {
//			int x = start.first + dx[i];
//			int y = start.second + dy[i];
//			if (x <= 0 || y <= 0 || x > n - 1 || y > m - 1) { continue; }
//			if (map[x][y] == 1) { printf("(%d,%d) : 해당 좌표는 벽이므로 경로를 변경합니다.\n\n", x, y); continue; }
//			if (cleaned[x][y]) {
//				printf("(%d,%d) : 해당 좌표는 이미 청소가 되었으므로 경로를 변경합니다. \n\n", x, y);
//				continue;
//			}
//
//			if (map[x][y] == 0 && !cleaned[x][y]) {
//				printf("(%d,%d) : 해당 좌표는 아직 청소가 되지 않았으므로 청소를 진행합니다.\n\n", x, y);
//				cleaned[x][y] = true;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				cleaningcnt++;
//				DFS(next);
//
//
//			}
//
//		}
//		return;
//	}
//	//서쪽인 경우
//	if (dir == 1) {
//		int dx[4] = { 1,0,-1,0 };
//		int dy[4] = { 0,1,0,-1 };
//		for (int i = 0; i < 4; i++) {
//			int x = start.first + dx[i];
//			int y = start.second + dy[i];
//			if (x <= 0 || y <= 0 || x > n - 1 || y > m - 1) { continue; }
//			if (map[x][y] == 1) { printf("(%d,%d) : 해당 좌표는 벽이므로 경로를 변경합니다.\n\n", x, y); continue; }
//			if (cleaned[x][y]) {
//				printf("(%d,%d) : 해당 좌표는 이미 청소가 되었으므로 경로를 변경합니다. \n\n", x, y);
//				continue;
//			}
//
//			if (map[x][y] == 0 && !cleaned[x][y]) {
//				printf("(%d,%d) : 해당 좌표는 아직 청소가 되지 않았으므로 청소를 진행합니다.\n\n", x, y);
//				cleaned[x][y] = true;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				cleaningcnt++;
//				DFS(next);
//
//
//			}
//
//		}
//		return;
//	}
//
//
//	
//}
//
//int main() {
//
//	cin >> n >> m;
//	cin >> r >> c >> dir;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//		}
//	}
//	
//
//
//	
//	pair<int, int>start;
//	start.first = r;
//	start.second = c;
//	printf("(%d,%d) : 청소기의 위치에서 청소를 진행합니다. \n\n", start.first, start.second);
//	cleaned[start.first][start.second] = true;
//	DFS(start);
//	
//
//
//	printf("%d ", cleaningcnt);
//
//	
//	
//
//}
