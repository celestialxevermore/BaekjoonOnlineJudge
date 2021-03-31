//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<queue>
//#include<algorithm>
//
//using namespace std;
//
//int map[51][51];
//int tmp[51][51];
//bool visited[51][51];
//
//
//typedef struct virus {
//	int x;
//	int y;
//	int cnt = 0;
//}V;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int N, m;
//
//int ans = 10000;
//queue<V>Q;
//V viruslist[11];
//int viruscnt = 0;
//int realmaxi = 0;
//void BFS() {
//
//	V current;
//	while (!Q.empty()) {
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.cnt = Q.front().cnt;
//		Q.pop();
//		//printf("current virus x : %d y : %d cnt : %d\n\n", current.x, current.y, current.cnt);
//		for (int i = 0; i < 4; i++) {
//
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//			int c = current.cnt + 1;
//			
//			if (x >= 1 && y >= 1 && x <= N && y <= N && !visited[x][y] && map[x][y] == 2) {
//				visited[x][y] = true;
//				map[x][y] = 2;
//				V next;
//				next.x = x;
//				next.y = y;
//				
//				next.cnt = c;
//				Q.push(next);
//
//
//
//			}
//			if (x >= 1 && y >= 1 && x <= N && y <= N && !visited[x][y] && map[x][y] == 0) {
//				visited[x][y] = true;
//				map[x][y] = c;
//				V next;
//				next.x = x;
//				next.y = y;
//				next.cnt = c;
//				//printf("새 바이러스 감염 구역  x : %d y : %d cnt : %d\n\n", x, y, c);
//				Q.push(next);
//				
//			}
//
//
//		}
//	}
//	int flag = 0;
//	/*printf("\n\n");
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	int maxi = -1;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (maxi < map[i][j] && map[i][j] != 0&&!visited[i][j]&&!map[i][j]!=1) {
//				maxi = map[i][j];
//			}
//			if (map[i][j] == 0) {
//				//printf("0검출\n\n");
//				flag = 1;
//				maxi = -1;
//				break;
//			}
//		}
//	}
//	if (flag == 1) {
//		realmaxi = -1;
//		return;
//	}
//	else {
//		realmaxi = maxi;
//		//printf("<<current shortest : %d>>\n\n", realmaxi);
//	}
//
//}
//
//void DFS(int level) {
//
//	if (level == m) {
//		
//		for (int i = 0; i < viruscnt; i++) {
//			Q.push(viruslist[i]);
//		}
//		BFS();
//		if (ans > realmaxi&&realmaxi!=-1) {
//			ans = realmaxi;
//			realmaxi = 0;
//			//printf("<<current ans : %d>>\n\n", ans);
//		}
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				map[i][j] = tmp[i][j];
//				visited[i][j] = false;
//			}
//		}
//		for (int i = 0; i < viruscnt; i++) {
//			map[viruslist[i].x][viruslist[i].y] = -1;
//		}
//		
//		return;
//	}
//	else {
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				if (map[i][j] == 2 && visited[i][j]) {
//					//printf("x : %d y : %d 이미 바이러스가 활성화되었습니다. \n\n", i, j);
//				}
//				if (map[i][j] == 2 && !visited[i][j]) {
//					V virus;
//					virus.x = i;
//					virus.y = j;
//					virus.cnt = 0;
//					//Q.push(virus);
//					visited[virus.x][virus.y] = true;
//					map[virus.x][virus.y] = -1;
//					viruslist[viruscnt++] = virus;
//
//					//printf("x : %d y : %d에서 새 바이러스를 활성화 합니다. \n\n", virus.x, virus.y);
//					//level++;
//					
//					//printf("viruscnt : %d\n\n", viruscnt);
//					DFS(viruscnt);
//					//level--;
//					viruscnt--;
//					map[virus.x][virus.y] = 2;
//					visited[virus.x][virus.y] = false;
//					
//				}
//				
//			}
//		}
//	}
//}
//
//
//
//
//
//int main() {
//	cin >> N >> m;
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			int input;
//			cin >> input;
//			map[i][j] = input;
//			tmp[i][j] = map[i][j];
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (map[i][j] == 2) {
//				V v;
//				v.x = i;
//				v.y = j;
//				v.cnt = 0;
//				//Q.push(v);
//				viruslist[viruscnt++] = v;
//				visited[v.x][v.y] = true;
//				map[v.x][v.y] = -1;
//				//printf("<<<<<최초 바이러스 활성화 1 x : %d y : %d>>>>>\n\n", v.x, v.y);
//				//printf("viruscnt : %d\n\n", viruscnt);
//				DFS(viruscnt);
//				map[v.x][v.y] = 2;
//				visited[v.x][v.y] = false;
//				viruscnt--;
//
//			}
//
//
//		}
//	}
//
//	if (ans == 10000) {
//		printf("-1");
//	}
//	else {
//		printf("%d", ans);
//	}
//
//}