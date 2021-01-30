//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<vector>
//#include<queue>
//using namespace std;
//
//
//int testcase;
//int m, n,k;
//int map[51][51];
//bool visited[51][51];
//bool caseofone = false;
//int bugcnt = 0;
//vector<int> bug[2000];
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//void BFS(pair<int, int> start) {
//
//
//
//	for (int i = 0; i < 4; i++) {
//		int y = start.first + dx[i];
//		int x = start.second + dy[i];
//		if (x < 0 || y < 0 || x >= m || y >= n) { continue; }
//		if (map[y][x] == 0 || visited[y][x]) { continue; }
//		if (map[y][x] == 1 && !visited[y][x]) {
//			visited[y][x] = true;
//			//printf("(%d,%d) : 해당 점을 방문합니다. \n\n", y, x);
//			pair<int, int>next;
//			next.first = y;
//			next.second = x; 
//			//printf("(%d,%d) : 해당점에서 bfs를 시작합니다. \n\n", y, x);
//			BFS(next);
//
//		}
//	}
//	return;
//
//}
//
//int main() {
//
//
//
//	cin >> testcase;
//	int index = 0;
//
//	while (index < testcase) {
//		cin >> m >> n >> k;
//		int r, c;
//		for (int i = 0; i < k; i++) {
//			cin >> r >> c;
//			map[c][r] = 1;
//		}
//		/*	for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				printf("%d ", map[i][j]);
//			}
//			printf("\n");
//		}*/
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				if (map[i][j] != 0) {
//					caseofone = true; break;
//				}
//			}
//		}
//
//		//모두 0인 경우
//		if (!caseofone) { 
//			bug[bugcnt].push_back(0);
//			bugcnt++; 
//		}
//		//만일 중간에 1이 발견된 경우, 즉 배추가 있는 경우
//		if(caseofone){
//			int bachucnt = 0;
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < m; j++) {
//					//이번에는 bfs로 풀어볼게요
//					if (map[i][j] == 1&&!visited[i][j]) {
//						visited[i][j] = true;
//						pair<int, int>start;
//						start.first = i;
//						start.second = j;
//						//printf("(%d,%d) : 해당 점에서 탐색을 시작합니다.\n\n",start.first, start.second);
//						
//						BFS(start);
//						bachucnt++;
//						//printf("탐색을 종료합니다. 현재까지 배추무리 %d 개를 발견했습니다. \n\n", bachucnt);
//					}
//
//
//				}
//			}
//			bug[bugcnt].push_back(bachucnt);
//			bugcnt++;
//
//		}
//		//초기화하는 과정입니다. 
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				map[i][j] = 0;
//				visited[i][j] = false;
//			}
//		}
//		caseofone = false;
//		index++;
//
//	}
//
//	for (int i = 0; i < bugcnt; i++) {
//		for (int j = 0; j < bug[i].size(); j++) {
//			printf("%d\n", bug[i][j]);
//		}
//	}
//	
//
//
//
//}