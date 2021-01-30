//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<queue>
//#include<vector>
//#define MAX 501
//using namespace std;
//
//
//char map[MAX][MAX];
//bool sheepadjacent[MAX][MAX];
//bool visited[MAX][MAX];
////목장의 크기가 주어진다. 
//int R, C;
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//int flag = 0;
//int flag2 = 0;
//queue< pair<int, int>> Q;
//
//void BFS(pair<int, int> start) {
//
//	while (!Q.empty()) {
//		pair<int, int> current;
//		current.first = Q.front().first;
//		current.second = Q.front().second;
//		Q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.first + dx[i];
//			int y = current.second + dy[i];
//			if (x < 0 || y < 0 || x >= R || y >= C) { continue; }
//
//			if (visited[x][y] == true && sheepadjacent[x][y] == true) {
//				map[x][y] = 'D';
//				continue;
//			}
//			if (map[x][y] == 'W') {continue;}
//			if (map[x][y] == '.' && !visited[x][y]) {
//				
//				visited[x][y] = true;
//				pair<int, int> next;
//				next.first = x;
//				next.second = y;
//				Q.push(next);
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> R >> C;
//
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			cin >> map[i][j];
//		}
//		printf("\n");
//	}
//	pair<int, int> Sheeplocation[MAX];
//	pair<int, int> Wolvelocation[MAX];
//	int Sheepindex = 0;
//	int Wolveindex = 0;
//
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			if (map[i][j] == 'S') {
//				int x = i;
//				int y = j;
//				Sheeplocation[Sheepindex].first = x;
//				Sheeplocation[Sheepindex].second = y;
//				Sheepindex++;
//			}
//		}
//	}
//	for (int i = 0; i < Sheepindex; i++) {
//		for (int j = 0; j < 4; j++) {
//			int x = Sheeplocation[i].first + dx[j];
//			int y = Sheeplocation[i].second + dy[j];
//			if (x < 0 || y < 0 || x >= R || y >= C) {
//				continue;
//			}
//
//			if (!visited[x][y]) {
//				
//				sheepadjacent[x][y] = true;
//				visited[x][y] = true;
//				continue;
//			}
//
//		}
//
//	}
//	//늑대를 확인하는 과정
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			if (map[i][j] == 'W') {
//				int x = i, y = j;
//				Wolvelocation[Wolveindex].first = x;
//				Wolvelocation[Wolveindex].second = y;
//				Wolveindex++;
//				
//			}
//		}
//	}
//	//만일 늑대가 단 한마리도 없다면?
//	if (Wolveindex == 0) {
//		printf("1\n");
//		
//		for (int i = 0; i < R; i++) {
//			for (int j = 0; j < C; j++) {
//				if (map[i][j] == '.') {
//					map[i][j] = 'D';
//					break;
//				}
//			}
//			break;
//		}
//
//	}
//	else {
//		for (int i = 0; i < Wolveindex; i++) {
//			int x = Wolvelocation[i].first;
//			int y = Wolvelocation[i].second;
//			if (visited[x][y] == true) {
//				printf("0");
//				flag = 1; flag2 = 2;
//				break;
//			}
//		}
//
//
//
//		if (flag2 == 0) {
//			for (int i = 0; i < Wolveindex; i++) {
//				for (int j = 0; j < 4; j++) {
//					int x = Wolvelocation[i].first + dx[j];
//					int y = Wolvelocation[i].second + dy[j];
//					if (x < 0 || y < 0 || x >= R || y >= C) { continue; }
//					//만일 바로 옆에 양이 존재한다!! 
//					if (map[x][y] == 'S') {
//						printf("0\n");
//						flag = 1;
//						break;
//					}
//				}
//				break;
//			}
//		}
//	}
//
//
//	//늑대도 있고, 양들 근처에 아직 다다르지 않은 상황이라면
//	//이때 비로소 BFS를 돌리기 시작합니다. 
//
//	if (flag == 0) {
//		for (int i = 0; i < Wolveindex; i++) {
//			int x = Wolvelocation[i].first;
//			int y = Wolvelocation[i].second;
//			pair<int, int>start;
//			start.first = x;
//			start.second = y;
//			Q.push(start);
//			BFS(start);
//		}
//		printf("1\n");
//		for (int i = 0; i < R; i++) {
//			for (int j = 0; j < C; j++) {
//				printf("%c",map[i][j]);
//			}
//			printf("\n");
//		}
//
//	}
//	return 0;
//
//}