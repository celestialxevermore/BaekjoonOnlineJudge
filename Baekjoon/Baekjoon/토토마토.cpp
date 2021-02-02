//#include<stdio.h>
//#include<vector>
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int N, M;
//queue < pair<pair<int, int>, int>> Q;
//
//int Tomatomap[1001][1001];
//bool visited[1001][1001];
//bool ripen[1001][1001];
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//
//void BFS() {
//	pair<pair<int, int>, int>current;
//	while (!Q.empty()) {
//		
//		current.first.first = Q.front().first.first;
//		current.first.second = Q.front().first.second;
//		current.second = Q.front().second;
//		Q.pop();
//		printf("<<< (%d,%d) : 현재 위치에서 토마토의 숙성을 시작합니다. \n\n", current.first.first, current.first.second);
//		printf("현재까지의 숙성 횟수 : %d \n\n", current.second);
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.first.first + dx[i];
//			int y = current.first.second + dy[i];
//
//			if (x < 0 || y < 0 || x >= N || y >= M) {
//				printf("(%d,%d) : 해당 좌표는 토마토 상자의 범위를 벗어납니다. \n\n", x, y);
//				continue;
//			}
//			if (Tomatomap[x][y] == -1) {
//				printf("(%d,%d) : 해당 좌표는 토마토가 들어있지 않습니다. \n\n", x, y);
//				continue;
//			}
//			if (Tomatomap[x][y] || ripen[x][y]) {
//				printf("(%d,%d) : 해당 좌표에는 이미 익은 토마토가 존재합니다. \n\n", x, y);
//				continue;
//			}
//			if (Tomatomap[x][y] == 0 && !ripen[x][y]) {
//				printf("(%d,%d) : 해당 좌표에는 아직 익지 않은 토마토가 들어있습니다. 숙성을 진행합니다. \n\n", x, y);
//				ripen[x][y] = true;
//				Tomatomap[x][y] = 1;
//				pair<pair<int, int>, int > next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = current.second;
//				next.second++;
//				printf("(%d,%d) : 해당 좌표에서 숙성을 계속합니다. \n\n", x, y);
//				printf("현재까지의 숙성 횟수는 %d입니다. \n\n", next.second);
//				Q.push(next);
//
//
//			}
//
//		}
//		//(3,0,3) (0,5,3),(2,3,5), (0,3,5)계속 아웃 
//	}
//	
//
//}
//
//int main() {
//	printf("11\n");
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> Tomatomap[i][j];
//		}
//	}
//
//	int tomatocnt = 0;
//	pair<pair<int, int>, int> tomato[1001];
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (Tomatomap[i][j] == 1) {
//				tomato[tomatocnt].first.first = i;
//				tomato[tomatocnt].first.second = j;
//				tomato[tomatocnt].second = 0;
//				printf("(%d,%d) : 해당 좌표에 토마토가 있습니다. \n\n", i, j);
//				ripen[i][j] = true;
//				Q.push(tomato[tomatocnt]);
//				tomatocnt++;
//				printf("현재 익은 토마토의 개수 : %d\n\n", tomatocnt);
//
//			}
//		}
//	} 
//
//	BFS();
//
//
//}