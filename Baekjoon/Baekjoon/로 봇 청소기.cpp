//#include<iostream>
//#include<vector>
//#include<queue>
//#include<stdio.h>
//#include<math.h>
//
//using namespace std;
//
//
//int map[51][51];
//bool visited[51][51];
//int N, M;
//int d;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//
////0 : 북 
////1 : 동 
////2 : 남 
////3 : 서 
//typedef struct robot {
//	int x;
//	int y;
//	int dir;
//	int cnt = 0;
//}R;
//queue<R>Q;
//R start;
//int ans = 0;
//
//void BFS() {
//
//	R current;
//	while (!Q.empty()) {
//
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.cnt = Q.front().cnt;
//		current.dir = Q.front().dir;
//		Q.pop();
//
//		int x = current.x;
//		int y = current.y;
//		printf("current x : %d y :%d cnt : %d dir : %d\n\n", current.x, current.y, current.cnt, current.dir);
//		int flag = 0;
//
////0 : 북 
////1 : 동 
////2 : 남 
////3 : 서
//		//지금 바라보는 방향이 북쪽, 그리고 서쪽이 비어있는 경우
//		if (abs(current.dir)%4==0&&map[x][y - 1] == 0&&!visited[x][y-1]) {
//			int dir = abs(current.dir - 1) % 4;
//			int cnt = current.cnt + 1;
//			//printf("22\n\n");
//			R next;
//			next.x = x;
//			next.y = y-1;
//			next.dir = dir;
//			next.cnt = cnt;
//			visited[x][y - 1] = true;
//			map[x][y - 1] = 2;
//			printf("next x : %d y :%d cnt : %d dir : %d \n\n", next.x, next.y, next.cnt, next.dir % 4);
//			Q.push(next);
//		}
//		//서쪽 : 3
//		//지금 바라보는 방향이 서쪽, 그리고 남쪽이 비어있는 경우 
//		else if (abs(current.dir)%4==3&&map[x + 1][y] == 0&&!visited[x+1][y]) {
//			//printf("33\n\n");
//			int dir = abs(current.dir - 1) % 4;
//			int cnt = current.cnt + 1;
//			R next;
//			next.x = x+1;
//			next.y = y;
//			next.dir = dir;
//			next.cnt = cnt;
//			visited[x + 1][y] = true;
//			map[x + 1][y] = 2;
//			printf("next x : %d y :%d cnt : %d dir : %d \n\n", next.x, next.y, next.cnt, next.dir % 4);
//			for (int i = 1; i <= N; i++) {
//				for (int j = 1; j <= M; j++) {
//					printf("%d ", map[i][j]);
//				}
//				printf("\n");
//			}
//			Q.push(next);
//		}
//
//		//지금 바라보는 방향이 남쪽, 그리고 동쪽이 비어있는 경우 
//
//		else if (abs(current.dir) % 4 == 2&&map[x][y + 1] == 0&&!visited[x][y+1]) {
//		//	printf("44\n\n");
//			int dir = abs(current.dir - 1) % 4;
//			int cnt = current.cnt + 1;
//			R next;
//			next.x = x;
//			next.y = y + 1;
//			next.dir = dir;
//			next.cnt = cnt;
//			visited[x][y + 1] = true;
//			map[x][y + 1] = 2;
//			printf("next x : %d y :%d cnt : %d dir : %d \n\n", next.x, next.y, next.cnt, next.dir % 4);
//			for (int i = 1; i <= N; i++) {
//				for (int j = 1; j <= M; j++) {
//					printf("%d ", map[i][j]);
//				}
//				printf("\n");
//			}
//			Q.push(next);
//		}
//		//지금 바라보는 방향이 동쪽, 그리고 북쪽이 비어있는 경우
//		else if (abs(current.dir) % 4 == 1&&map[x - 1][y] == 0&&!visited[x-1][y]) {
//			//printf("55\n\n");
//			int dir = abs(current.dir - 1) % 4;
//			int cnt = current.cnt + 1;
//			R next;
//			next.x = x - 1;
//			next.y = y;
//			next.dir = dir;
//			next.cnt = cnt;
//			visited[x - 1][y] = true;
//			map[x - 1][y] = 2;
//			printf("next x : %d y :%d cnt : %d dir : %d \n\n", next.x, next.y, next.cnt, next.dir % 4);
//			for (int i = 1; i <= N; i++) {
//				for (int j = 1; j <= M; j++) {
//					printf("%d ", map[i][j]);
//				}
//				printf("\n");
//			}
//			Q.push(next);
//		}	
//
//
//
//		
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
//	cin >> N >> M;
//	
//	cin >> start.x >> start.y >> start.dir;
//
//
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j];
//		}
//	}
//	printf("\n\n");
//	
//	visited[start.x][start.y] = true;
//	Q.push(start);
//	map[start.x][start.y] = 2;
//	printf("start x : %d y :%d cnt : %d dir : %d \n\n", start.x, start.y, start.cnt,start.dir%4);
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//	BFS();
//	
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("%d", ans+1);
//
//
//
//
//}