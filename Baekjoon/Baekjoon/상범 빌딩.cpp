//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<string>
//#include<string.h>
//using namespace std;
//
//int L=-1,R=-1,C=-1;
//
//typedef struct Node {
//	int x;
//	int y;
//	int z;
//	int cnt = 0;
//	
//}node;
//
//queue<node> Q;
//node start;
//node dest;
//int expcnt = 0;
//int check[10000];
//int checkcount[10000];
//
//
//char Building[31][31][31];
//bool Visited[31][31][31];
//int dx[6] = { 1,-1,0,0,0,0 };
//int dy[6] = { 0,0,1,-1,0,0 };
//int dz[6] = { 0,0,0,0,1,-1 };
//
//void BFS(node start) {
//	int flag = 0;
//	node current;
//	while (!Q.empty()) {
//		
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.z = Q.front().z;
//		current.cnt = Q.front().cnt;
//		Q.pop();
//		/*printf("현재 층 : %d, x좌표 : %d y좌표 : %d 에서 탐색을 시작합니다. \n\n", current.z, current.x, current.y);
//		printf("현재까지의 탐색 비용은 : %d 입니다. \n\n", current.cnt);*/
//		
//		
//		
//		if (Building[current.z][current.x][current.y] == 'E') {
//			flag = 1; checkcount[expcnt] = current.cnt; check[expcnt++] = 1;
//			break;
//		}
//
//		for (int i = 0; i < 6; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//			int z = current.z + dz[i]; //층수
//			if (x < 0 || y < 0 || x >= R || y >= C) {
//				//printf("해당 x좌표 : %d, y좌표 : %d 은 건물의 범위를 넘어갑니다. \n\n",x,y);
//				continue;
//			}
//			if (z < 0 || z >= L) {
//				//printf("해당 층 : %d, x좌표 : %d, y좌표 : %d 은 건물의 층수를 벗어납니다. \n\n",z,x,y);
//				continue;
//			}
//
//			if (Building[z][x][y] == '#') {
//				//printf("해당 층 : %d, x좌표 : %d, y좌표 : %d 은 벽입니다. \n\n",z,x,y);
//				continue;
//			}
//			if (Visited[z][x][y]) {
//				//printf("해당 층 : %d, x좌표 : %d, y좌표 : %d 방문한 적이 있습니다. \n\n",z,x,y);
//				continue;
//			}
//			if (Building[z][x][y] == '.' && !Visited[z][x][y]) {
//				Visited[z][x][y] = true;
//
//				//printf("해당 층 : %d, x좌표 : %d, y좌표 : %d 을 방문합니다. \n\n",z,x,y);
//				node next;
//				next.x = x;
//				next.y = y;
//				next.z = z;
//				next.cnt = current.cnt;
//				next.cnt++;
//				//printf("현재까지의 이동 계수는 %d입니다. \n\n", next.cnt);
//				Q.push(next);
//
//
//			}
//			if (Building[z][x][y] == 'E' && !Visited[z][x][y]) {
//				//printf("여기예요 여기!! 시발!! \n\n");
//				Visited[z][x][y] = true;
//				node next;
//				next.x = x;
//				next.y = y;
//				next.z = z;
//				next.cnt = current.cnt;
//				next.cnt++;
//				//printf("현재까지의 이동 계수는 %d입니다. \n\n", next.cnt);
//				Q.push(next);
//			}
//			
//		}
//	}
//	if (flag == 0) {
//		//printf("Trapped!");
//		check[expcnt++] = 0;
//	}
//
//}
//
//
//int main() {
//	
//	while (L != 0 && R != 0 && C != 0) {
//		
//		cin >> L >> R >> C;
//
//		for (int i = 0; i < L; i++) {
//			for (int j = 0; j < R; j++) {
//				for (int k = 0; k < C; k++) {
//					cin >> Building[i][j][k];
//				}
//			}
//		}
//
//		for (int i = 0; i < L; i++) {
//			for (int j = 0; j < R; j++) {
//				for (int k = 0; k < C; k++) {
//					if (Building[i][j][k] == 'E') {
//						dest.x = j;
//						dest.y = k;
//						dest.z = i;
//						
//					}
//					
//					if (Building[i][j][k] == 'S') {
//						start.x = j;//세로 축
//						start.y = k;//가로 축
//						start.z = i;//위아래 
//						//printf("좌표 (%d,%d,%d)에서 시작합니다.\n\n", start.x, start.y, start.z);
//						Visited[start.z][start.x][start.y] = true;
//						Q.push(start);
//						BFS(start);
//					}
//				}
//			}
//		}
//
//		//초기화 하는 과정입니다. 
//		while (!Q.empty()) { Q.pop(); }
//
//		for (int i = 0; i < L; i++) {
//			for (int j = 0; j < R; j++) {
//				for (int k = 0; k < C; k++) {
//					Visited[i][j][k] = false;
//					Building[i][j][k] = '\0';
//				}
//			}
//		}
//
//
//	}
//	
//	for (int i = 0; i < expcnt; i++) {
//		if (check[i] == 1) {
//			printf("Escaped in %d minute(s).\n", checkcount[i]);
//		}
//		if (check[i] == 0) {
//			printf("Trapped!\n");
//		}
//	}
//
//	return 0;
//
//	
//}