//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<vector>
//#include<queue>
//#define MAX 101
//using namespace std;
//
//pair<pair<int, int>, int>start;
//pair<pair<int, int>, int>destination;
//
//
//queue<pair<int, int>, int>Q;
//int map[MAX][MAX];
////동서남북 순으로 배열
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//char dir[4] = { '동','서','남','북' };
//int r, c;
//
//
////동 : 1 서 : 2 남 : 3 북 :4 
//int minimum = 10000;
//
//void BFS(pair<pair<int, int>, int>start) {
//
//	while (!Q.empty()) {
//		pair<pair<int, int>, int>current;
//		current.first.first = Q.front().first.first;
//		current.first.second = Q.front().first.second;
//		current.second = Q.front().second;
//
//		for (int i = 0; i < 4; i++) {
//			int direction = i;
//			printf("%d : %c쪽일 때", direction, dir[i]);
//			int x = current.first.first + dx[i];
//			int y = current.first.second + dy[i];
//
//			if (map[x][y] == 1) {
//				printf("방향 : %c // 좌표 : (%d,%d) 해당 부분은 벽에 해당합니다. \n\n", dir[i], x, y);
//				continue;
//			}
//
//			//길이 지금 뚫려있는 경우!! 
//			if (map[x][y] == 0) {
//
//			}
//
//
//
//
//
//
//		}
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
//
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	int rstart, cstart, dirstart;
//	int rdestination, cdestination, dirdestination;
//	
//	start.first.first = rstart;
//	start.first.second = cstart;
//	start.second = dirstart;
//	destination.first.first = rdestination;
//	destination.first.second = cdestination;
//	destination.second = dirdestination;
//	Q.push(start);
//	BFS(start);
//
//
//}