//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<queue>
//#define MAX 1001
//using namespace std;
//
//int N, M;
//int hx, hy;
//int ex, ey;
//int map[MAX][MAX];
//int tmpmap[MAX][MAX];
//bool visited[MAX][MAX];
//int minimum = MAX;
//pair<pair<int, int>, int>startpoint;
//pair<int, int>endpoint;
//vector<pair<int, int>> onelist;
//queue<pair<pair<int, int>, int>>Q;
//
//
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//void BFS(pair<pair<int, int>, int>start) {
//
//	pair<pair<int, int>, int>current;
//	while (!Q.empty()) {
//		current.first.first = Q.front().first.first;
//		current.first.second = Q.front().first.second;
//		current.second = Q.front().second;
//		Q.pop();
//
//		if (current.first.first == endpoint.first && current.first.second == endpoint.second) {
//			if (minimum > current.second) {
//				int index = 0;
//				minimum = current.second;
//				//printf("(%d,%d)를 뚫음으로써 얻어지는 최소 거리는 %d 입니다.\n\n", onelist[index].first, onelist[index].second, minimum);
//			}
//			return;
//		}
//
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.first.first + dx[i];
//			int y = current.first.second + dy[i];
//			int z = current.second;
//			if (x < 0 || y < 0 || x >= N || y >= M) {
//				//printf("좌표(%d,%d)는 범위를 벗어납니다. \n\n", x, y);
//				continue;
//			}
//			if (visited[x][y]) {
//				//printf("좌표(%d,%d)는 이미 탐색을 진행하였습니다.\n\n", x, y);
//
//				continue;
//			}
//
//			if (map[x][y] == 0 && !visited[x][y]) {
//				//printf("좌표(%d,%d)는 아직 방문하지 않았습니다. \n\n", x, y);
//				visited[x][y] = true;
//
//				pair<pair<int, int>, int>next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = z;
//				next.second++;
//				//printf("현재까지의 탐색 횟수 :%d\n\n", next.second);
//				Q.push(next);
//			}
//
//		}
//
//
//	}
//	printf("-1\n");
//	return;
//
//}
//
//int main() {
//
//	cin >> N >> M;
//	cin >> hx >> hy;
//	cin >> ex >> ey;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//			tmpmap[i][j] = map[i][j];
//		}
//	}
//
//
//
//
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (map[i][j] == 1) {
//				pair<int, int>one;
//				one.first = i;
//				one.second = j;
//				onelist.push_back(one);
//			}
//		}
//	}
//	startpoint.first.first = hx - 1;
//	startpoint.first.second = hy - 1;
//	startpoint.second = 0;
//
//	endpoint.first = ex - 1;
//	endpoint.second = ey - 1;
//
//	/*for (int i = 0; i < onelist.size(); i++) {
//		printf("%d %d \n", onelist[i].first, onelist[i].second);
//	}*/
//
//	for (int i = 0; i < onelist.size(); i++) {
//		//지팡이 시전합니다.
//		map[onelist[i].first][onelist[i].second] = 0;
//		//printf("좌표(%d,%d)에 지팡이를 사용하여 0으로 만들어줍니다. \n\n", onelist[i].first,onelist[i].second);
//		Q.push(startpoint);
//		visited[startpoint.first.first][startpoint.first.second] = true;
//		BFS(startpoint);
//
//		//초기화를 해줘야됨.안그러면 계속 못돔.
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				visited[i][j] = false;
//				map[i][j] = tmpmap[i][j];
//			}
//		}
//
//
//	}
//
//	printf("%d", minimum);
//
//
//
//
//
//
//}