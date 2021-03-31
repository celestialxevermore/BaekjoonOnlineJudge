//#include<iostream>
//#include<stdio.h>
//#include<queue>
//#include<vector>
//#define MAX 1001
//using namespace std;
//
//
//typedef struct node {
//	int x;
//	int y;
//	int cnt = 0;
//	int wall = 0;
//}Node;
//
//
//int N, M;
//int map[MAX][MAX];
//bool visited[2][MAX][MAX];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int stx, sty;
//int ttx, tty;
//int ans = 0;
//int flag = 0;
//
//queue<Node>Q;
//void BFS() {
//
//	Node current;
//	while (!Q.empty()) {
//
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.cnt = Q.front().cnt;
//		current.wall = Q.front().wall;
//		Q.pop();
//
//
//
//		if (current.x == ttx && current.y == tty) {
//			ans = current.cnt;
//			flag = 1;
//			return;
//		}
//
//		//상하좌우 먼저 큐에 넣기
//		for (int i = 0; i < 4; i++) {
//
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//			int w = current.wall;
//			if (map[x][y] == 1) { continue; }
//			if (!visited[w][x][y] && map[x][y] == 0 && x > 0 && y > 0 && x <= N && y <= M) {
//				visited[w][x][y] = true;
//				Node next;
//				next.x = x;
//				next.y = y;
//				next.wall = w;
//				int nextcnt = current.cnt + 1;
//				next.cnt = nextcnt;
//				//printf("next // x : %d y : %d cnt : %d wall break time : %d \n\n", next.x, next.y, next.cnt, next.wall);
//				Q.push(next);
//			}
//
//
//
//		}
//		//그다음 벽을 부순 것을 큐에 넣기
//		if (current.wall < 1) {
//
//			for (int i = 0; i < 4; i++) {
//
//				int x = current.x + dx[i];
//				int y = current.y + dy[i];
//
//				int w = current.wall+1;
//				/*if (map[x][y] == 1) {
//					map[x][y] = 0;
//				}*/
//				if (!visited[w][x][y] && map[x][y] == 1 && x > 0 && y > 0 && x <= N && y <= M) {
//					visited[w][x][y] = true;
//					Node next;
//					next.x = x;
//					next.y = y;
//					int nextwall = w;
//					int nextcnt = current.cnt + 1;
//					next.wall = nextwall;
//					next.cnt = nextcnt;
//					//map[x][y] = 1;
//					//printf("next // x : %d y : %d cnt : %d wall break time : %d \n\n", next.x, next.y, next.cnt,next.wall);
//					Q.push(next);
//				}
//
//
//
//			}
//
//
//
//
//		}
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
//int main() {
//
//	cin >> N >> M;
//	
//
//	cin >> stx >> sty;
//	cin >> ttx >> tty;
//	Node start;
//	start.x = stx;
//	start.y = sty;
//	start.cnt = 0;
//	start.wall = 0;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j];
//		}
//	}
//	Q.push(start);
//	visited[0][stx][sty] = true;
//	visited[1][stx][sty] = true;
//	BFS();
//
//
//
//	if (flag == 1) {
//		printf("%d", ans);
//	}
//	else {
//		printf("-1");
//	}
//}
