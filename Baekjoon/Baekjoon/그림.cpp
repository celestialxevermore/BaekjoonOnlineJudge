//#include<stdio.h>
//#include<iostream>
//#include<queue>
//#include<vector>
//#define MAX 501
//using namespace std;
//
//int N, M;
//
//int map[MAX][MAX];
//bool visited[MAX][MAX];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int maximum = -1;
//int flag = 0;
//int imgcnt = 0;
//queue<pair<int, int>>Q;
//
//
//void BFS() {
//	pair<int, int>current;
//	int space = 1;
//	while (!Q.empty()) {
//		current.first = Q.front().first;
//		current.second = Q.front().second;
//		Q.pop();
//
//		for (int i = 0; i < 4; i++) {
//
//			int x = current.first + dx[i];
//			int y = current.second + dy[i];
//
//			if (map[x][y] == 0) {
//				continue;
//			}
//			if (visited[x][y]) { continue; }
//			if (!visited[x][y] && map[x][y] == 1) {
//				visited[x][y] = true;
//				space++;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				Q.push(next);
//			}
//		}
//	}
//	imgcnt++;
//	if (maximum < space) {
//		maximum = space;
//	}
//
//}
//
//int main() {
//	cin >> N >> M;
//
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (map[i][j] == 1) {
//				flag = 1;
//			}
//		}
//	}
//
//	if (flag == 0) {
//		printf("%d\n%d", 0, 0);
//	}
//	else {
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (map[i][j] == 1&&!visited[i][j]) {
//					pair<int, int>start;
//					start.first = i;
//					start.second = j;
//					visited[i][j] = true;
//					Q.push(start);
//					BFS();
//				}
//			}
//		}
//
//		printf("%d\n%d", imgcnt, maximum);
//
//	}
//
//
//}