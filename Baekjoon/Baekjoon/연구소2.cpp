//#include<iostream>
//#include<vector>
//#include<queue>
//#include<stdio.h>
//
//using namespace std;
//
//
//int N, M;
//
//int map[51][51];
//int tmp[51][51];
//bool visited[51][51];
//
//typedef struct virus {
//	int x;
//	int y;
//	int cnt;
//}V;
//
//V viruslist[2501];
//int viruscnt = 0;
//
//queue<V>Q;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int ans = 0;
//
//int res = 10000;
//void BFS() {
//
//	V current;
//	while (!Q.empty()) {
//
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.cnt = Q.front().cnt;
//		Q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//			int c = current.cnt + 1;
//
//			if (x >= 1 && y >= 1 && x <= N && y <= N && !visited[x][y] && map[x][y] == 2) {
//				map[x][y] = c;
//				visited[x][y] = true;
//				V next;
//				next.x = x;
//				next.y = y;
//				next.cnt = c;
//				printf(" next x : %d y : %d cnt : %d\n\n", next.x, next.y, next.cnt);
//				Q.push(next);
//			}
//
//			if (x >= 1 && y >= 1 && x<=N&&y<=N&&!visited[x][y] && map[x][y] == 0) {
//				map[x][y] = c;
//				visited[x][y] = true;
//				V next;
//				next.x = x;
//				next.y = y;
//				next.cnt = c;
//				printf(" next x : %d y : %d cnt : %d\n\n", next.x, next.y, next.cnt);
//				Q.push(next);
//			}
//
//		}
//
//
//	}
//	int flag = 0;
//	int maxi = -1;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			//0검출
//			if (map[i][j] == 0&&!visited[i][j]) {
//				printf("x : %d y : %d 0검출\n\n",i,j);
//				flag = 1;
//				break;
//				
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//	if (flag == 0) {
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				if (maxi < map[i][j] && visited[i][j]) {
//					maxi = map[i][j];
//				}
//			}
//		}
//		if (res > maxi) {
//			res = maxi;
//		}
//	}
//	else {
//		printf("0이 검출되었습니다.\n\n");
//		return;
//	}
//	
//}
//
//
//void DFS(int x, int y, int viruscnt) {
//	if (viruscnt == M) {
//
//		for (int i = 0; i < viruscnt; i++) {
//			printf("x : %d y : %d cnt : %d\n\n", viruslist[i].x, viruslist[i].y, viruslist[i].cnt);
//			map[viruslist[i].x][viruslist[i].y] = 0;
//			Q.push(viruslist[i]);
//		}
//		printf("<<<BFS 시작 >>>\n\n");
//		BFS();
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				printf("%d ", map[i][j]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				map[i][j] = tmp[i][j];
//				visited[i][j] = false;
//			}
//		}
//		for (int i = 0; i < viruscnt; i++) {
//			visited[viruslist[i].x][viruslist[i].y] = true;
//		}
//		
//		return;
//	}
//	else {
//		int v = viruscnt - 1;
//		printf(" current x : %d y : %d viruscnt : %d\n\n", viruslist[v].x, viruslist[v].y, v);
//		int xx = viruslist[v].x;
//		int yy = viruslist[v].y;
//		printf("x : %d y : %d 에서 탐색 시작!\n\n", xx, yy);
//		
//		for (int i = xx; i <= N; i++) {
//			for (int j = yy; j <= N; j++) {
//				
//				if (map[i][j] == 2/*&&!visited[i][j]*/) {
//					printf("2발견 x : %d y : %d \n\n", i, j);
//					visited[i][j] = true;
//					V v;
//					v.x = i;
//					v.y = j;
//					v.cnt = 0;
//					viruslist[viruscnt++] = v;
//					printf("new virus x : %d y : %d cnt : %d\n\n", v.x, v.y, v.cnt);
//					printf("viruscnt++ : %d\n\n", viruscnt);
//					map[v.x][v.y] = 0;
//					DFS(v.x,v.y,viruscnt);
//					
//					map[v.x][v.y] = 2;
//					viruscnt--;
//					//printf("viruscnt-- : %d\n\n", viruscnt);
//					visited[i][j] = false;
//					printf("x : %d y : %d cnt : %d방문을 풀어줍니다.\n\n", v.x, v.y, v.cnt);
//					printf("x : %d y : %d map[x][y] : %d 원상태로 합니다.\n\n", v.x, v.y, map[v.x][v.y]);
//
//				}
//
//			}
//		}
//
//
//
//
//	}
//}
//
//int main() {
//
//
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			int input;
//			cin >> input;
//			tmp[i][j]=map[i][j] = input;
//		}
//	}
//
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//
//			if (map[i][j] == 2&&!visited[i][j]) {
//				V start;
//				start.x = i;
//				start.y = j;
//				start.cnt = 0;
//				viruslist[viruscnt++] = start;
//				/*printf("start x : %d y : %d cnt :%d\n\n", start.x, start.y, start.cnt);*/
//				
//				visited[start.x][start.y] = true;
//				map[start.x][start.y] = 0;
//				DFS(start.x,start.y,viruscnt);
//				map[start.x][start.y] = 2;
//				viruscnt--;
//				
//				visited[i][j] = false;
//			}
//
//
//		}
//	}
//
//	if (res == 10000) {
//		printf("-1");
//	}
//	else {
//		printf("%d", res);
//	}
//
//
//
//}
