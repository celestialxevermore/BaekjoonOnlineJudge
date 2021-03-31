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
//V viruslist[10000];
//int viruscnt = 0;
//int ch[10000];
//queue<V>Q;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int ans = 0;
//
//int res = 987654321;
//
//
//
//
//
//void BFS() {
//
//	V current;
//	
//	while (!Q.empty()) {
//		
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.cnt = Q.front().cnt;
//		Q.pop();
//		//printf("current x : %d y : %d cnt : %d \n\n", current.x, current.y,current.cnt);
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//			int c = current.cnt + 1;
//
//			if (visited[x][y]) { continue; }
//			if (x >= 1 && y >= 1 && x <= N && y <= N && !visited[x][y] && map[x][y] == 2) {
//				visited[x][y] = true;
//				V next;
//				next.x = x;
//				next.y = y;
//				next.cnt = c;
//				map[x][y] = c;
//				//printf("next x : %d y : %d cnt : %d \n\n", next.x, next.y, next.cnt);
//				Q.push(next);
//			}
//
//			if (x >= 1 && y >= 1 && x <= N && y <= N && !visited[x][y] && map[x][y] == 0) {
//				visited[x][y] = true;
//				V next;
//				next.x = x;
//				next.y = y;
//				next.cnt = c;
//				map[x][y] = c;
//				//printf("next x : %d y : %d cnt : %d \n\n", next.x, next.y, next.cnt);
//				Q.push(next);
//			}
//
//		}
//
//
//	}
//	/*for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");*/
//	int flag = 0;
//	int maxi = -1;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (map[i][j] == 1) { continue; }
//			
//			if (!visited[i][j]) {
//				//0°ËÃâ
//				flag = 1;
//				break;
//
//			}
//			else if (maxi < map[i][j]) {
//				maxi = map[i][j];
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//	if (flag == 1) {
//		return;
//	}
//	else {
//		
//		res = min(res, maxi);
//
//	}
//
//
//
//}
//
//
//
//
//void DFS(int index, int Level) {
//	if (Level == M) {
//		for (int i = 0; i < Level; i++) {
//			//printf("x : %d y : %d \n\n", viruslist[ch[i]].x, viruslist[ch[i]].y);
//			Q.push(viruslist[ch[i]]);
//			visited[viruslist[ch[i]].x][viruslist[ch[i]].y] = true;
//			map[viruslist[ch[i]].x][viruslist[ch[i]].y] = 0;
//		}
//		BFS();
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				map[i][j] = tmp[i][j];
//				visited[i][j] = false;
//			}
//		}
//		for (int i = 0; i < viruscnt; i++) {
//			visited[viruslist[i].x][viruslist[i].y] = true;
//		}
//	}
//	else {
//		
//		for (int i = index; i < viruscnt; i++) {
//			ch[Level] = i;
//			DFS(i + 1, Level + 1);
//		}
//
//
//	}
//
//
//
//}
//
//
//
//int main() {
//
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			int input;
//			cin >> input;
//			tmp[i][j] = map[i][j] = input;
//		}
//	}
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (map[i][j] == 2) {
//				V start;
//				start.x = i;
//				start.y = j;
//				start.cnt = 0;
//				visited[start.x][start.y] = true;
//				viruslist[viruscnt++] = start;
//
//
//			}
//		}
//	}
//
//
//
//	DFS(0, 0);
//
//
//
//
//
//
//
//	if (res == 987654321) {
//		printf("-1");
//	}
//	else {
//		printf("%d",res);
//	}
//}
//
//
