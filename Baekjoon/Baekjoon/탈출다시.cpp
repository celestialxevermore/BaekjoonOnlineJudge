//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//typedef struct Water {
//	int x;
//	int y;
//	int time;
//}w;
//
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//
//int R, C;
//char map[51][51];
//bool wvisited[51][51];
//bool gvisited[51][51];
//queue<w>Q;
//int ans = 0;
//int flag = 0;
//int watercnt = 0;
//w waterlist[1000];
//void BFS() {
//	w cgosm;
//	w cwater;
//	while (!Q.empty()) {
//		
//
//		
//		
//		for (int i = 0; i < watercnt; i++) {
//			cwater.x = Q.front().x;
//			cwater.y = Q.front().y;
//			cwater.time = Q.front().time;
//			Q.pop();
//			printf("좌표 (%d,%d) : 현재 물의 위치입니다. \n\n", cwater.x, cwater.y);
//
//			for (int i = 0; i < 4; i++) {
//
//				int cwx = cwater.x + dx[i];
//				int cwy = cwater.y + dy[i];
//
//				if (map[cwx][cwy] == 'D') {
//					printf("좌표 (%d,%d) : 이 좌표는 D입니다. 물이 흐를 수 없습니다. \n\n", cwx, cwy);
//					continue;
//				}
//				if (wvisited[cwx][cwy]) { continue; }
//				if (map[cwx][cwy] == 'X') {
//					printf("좌표 (%d,%d) : 이 좌표는 벽입니다. 지나갈 수 없습니다. \n\n", cwx, cwy);
//					continue;
//				}
//				if (map[cwx][cwy] == 'S' && !wvisited[cwx][cwy]) {
//					map[cwx][cwy] = '*';
//					printf("좌표 (%d,%d) : 이 좌표는 고슴도치의 자취입니다. \n\n ", cwx, cwy);
//					wvisited[cwx][cwy] = true;
//					w wnext;
//					wnext.x = cwx;
//					wnext.y = cwy;
//					wnext.time = cwater.time;
//					wnext.time++;
//					Q.push(wnext);
//					
//				}
//				if (map[cwx][cwy] == '.' && !wvisited[cwx][cwy]) {
//					map[cwx][cwy] = '*';
//					printf("좌표 (%d,%d) : 이 좌표는 일반 도로입니다. \n\n ", cwx, cwy);
//					wvisited[cwx][cwy] = true;
//					w wnext;
//					wnext.x = cwx;
//					wnext.y = cwy;
//					wnext.time = cwater.time;
//					wnext.time++;
//					Q.push(wnext);
//
//				}
//
//			}
//		}
//		
//		
//		
//		
//		
//		cgosm.x = Q.front().x;
//		cgosm.y = Q.front().y;
//		cgosm.time = Q.front().time;
//		Q.pop();
//		printf("좌표 (%d,%d) : 현재 고슴도치의 위치입니다. \n\n", cgosm.x, cgosm.y);
//		if (map[cgosm.x][cgosm.y] == 'D') {
//			printf("고슴도치가 무사히 도착하였습니다!!\n\n");
//			printf("도착 시간 : %d\n\n", cgosm.time);
//			ans = cgosm.time;
//			flag = 1;
//			return;
//		}
//
//
//	
//		for (int i = 0; i < 4; i++) {
//			int cgx = cgosm.x + dx[i];
//			int cgy = cgosm.y + dy[i];
//
//			if (map[cgx][cgy] == 'D') {
//				printf("좌표 (%d,%d) : 이 좌표는 D입니다. 고슴도치가 이동하였습니다! \n\n", cgx, cgy);
//				w gnext;
//				gnext.x = cgx;
//				gnext.y = cgy;
//				gnext.time = cgosm.time;
//				gnext.time++;
//				Q.push(gnext);
//				printf("좌표 (%d,%d) : 도착 예감...!!\n\n",gnext.x,gnext.y);
//			}
//			if (gvisited[cgx][cgy]) { 
//				printf("좌표 (%d,%d) : 이 좌표는 이미 방문을 하였습니다!!\n\n", cgx, cgy);
//				continue; }
//			if (map[cgx][cgy] == 'X') {
//				printf("좌표 (%d,%d) : 이 좌표는 벽입니다. 지나갈 수 없습니다. \n\n", cgx, cgy);
//				continue;
//			}
//			if (map[cgx][cgy] == '*' && !gvisited[cgx][cgy]) {
//				printf("좌표 (%d,%d) : 이 좌표는 현재 물이 흐르고 있습니다. 지나갈 수 없습니다.\n\n", cgx, cgy);
//				continue;
//			}
//			if (map[cgx][cgy] == '.' && !gvisited[cgx][cgy]) {
//				map[cgx][cgy] = '*';
//				printf("좌표 (%d,%d) : 이 좌표는 일반 도로입니다. \n\n ", cgx, cgy);
//				wvisited[cgx][cgy] = true;
//				w gnext;
//				gnext.x = cgx;
//				gnext.y = cgy;
//				gnext.time = cgosm.time;
//				gnext.time++;
//				printf("현재까지 고슴도치가 움직인 시간 : %d\n\n", gnext.time);
//				Q.push(gnext);
//				
//			}
//
//
//
//		}
//
//
//	}
//	if (flag == 0) {
//		printf("KAKTUS");
//	}
//
//
//
//}
//
//
//int main() {
//	cin >> R >> C;
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			cin >> map[i][j];
//		}
//	}
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			if (map[i][j] == '*'){
//				w water;
//				water.x = i;
//				water.y = j;
//				water.time = 0;
//				wvisited[water.x][water.y] = true;
//				printf("좌표 (%d,%d) : 현재 발견된 물의 최초 시작점입니다.\n\n", water.x, water.y);
//				Q.push(water);
//				waterlist[watercnt++] = water;
//				printf("현재까지 발견된 물의 시작점의 개수 : %d\n\n", watercnt);
//			}
//		}
//	}
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			if (map[i][j] == 'S') {
//				w gosm;
//				gosm.x = i;
//				gosm.y = j;
//				gosm.time = 0;
//				Q.push(gosm);
//				gvisited[gosm.x][gosm.y] = true;
//				printf("좌표 (%d,%d) : 현재 고슴도치의 최초 시작점입니다.\n\n", gosm.x, gosm.y);
//				printf("<<<BFS 탐색을 시작합니다!!>>>\n\n");
//				BFS();
//			}
//		}
//	}
//
//
//
//
//	if (flag == 1) {
//		printf("%d ", ans);
//	}
//}