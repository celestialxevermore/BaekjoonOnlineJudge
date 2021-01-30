//#include<stdio.h>
//#include<stdlib.h>
//#include<queue>
//#include<vector>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//int map[10][10] = {
//	{1,0,1,1,1,1,0,1,1,1},
//	{1,0,1,0,0,0,0,0,0,0},
//	{1,0,1,1,0,1,1,1,0,1},
//	{1,0,0,0,0,1,1,1,0,1},
//	{1,0,1,1,1,1,1,1,0,1},
//	{1,0,1,1,1,1,1,1,0,1},
//	{1,0,0,0,0,1,1,1,0,1},
//	{1,1,1,1,0,1,1,1,0,1},
//	{1,1,1,1,0,0,0,0,0,1},
//	{1,1,1,1,1,1,1,1,0,0},
//};
//
//queue < pair < pair<int,int>, int >> Q;
//int visited[10][10];
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//
//void BFS(pair <pair<int,int>,int > vertex) {
//	
//
//
//
//	while (!Q.empty()) {
//		pair <pair<int, int>, int> current;
//		//x의 좌표를 복사
//		current.first.first = Q.front().first.first;
//		//y의 좌표를 복사
//		current.first.second = Q.front().first.second;
//		//현재까지의 자취를 복사 
//		current.second = Q.front().second;
//		printf("현재 이동 횟수 : %d \n", current.second);
//		if (current.first.first == 9 && current.first.second == 9) { printf("%d ", current.second); return; }
//		visited[current.first.first][current.first.second] = 1;
//		current.second++;
//		for (int i = 0; i < 4; i++) {
//			int x = current.first.first + dx[i];
//			int y = current.first.second+dy[i];
//			int cnt = current.second;
//			if (x < 0 || y < 0 || x >= 10 || y >= 10) { continue; }
//			if (visited[x][y] == 0 && map[x][y] == 0) {
//				pair <pair<int, int>, int> next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = cnt;
//				visited[x][y] = 1;
//				Q.push(next);
//				printf("현재점 : (%d, %d) %d \n", next.first.first, next.first.second, next.second);
//			}
//		}
//
//
//	}
//}
//
//
//
//
//int main() {
//
//	pair <pair<int, int>, int> start;
//
//	start = make_pair(make_pair(0, 1), 0);
//	Q.push(start);
//	BFS(start);
//
//	
//	
//
//
//
//}
//
//
//
//				