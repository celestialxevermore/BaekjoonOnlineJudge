//#include<iostream>
//#include<stdio.h>
//#include<queue>
//#define K 31
//using namespace std;
//
//typedef struct node {
//	int x;
//	int y;
//	int cnt = 0;
//	int horse = 0;
//}Node;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int hx[8] = { -2,-1,1,2,2,1,-1,-2 };
//int hy[8] = { -1,-2,-2,-1,1,2,2,1 };
//
//queue<node>Q;
//int map[201][201];
//bool visited[K][201][201];
//int h = 0;
//
//int W, H;
//
//int ans = 0;
//int flag = 0;
//
//void BFS(Node start) {
//
//	Node current;
//	while (!Q.empty()) {
//
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.cnt = Q.front().cnt;
//		current.horse = Q.front().horse;
//		Q.pop();
//		//printf("current :: x=%d y=%d cnt=%d horse used time =%d\n\n", current.x, current.y, current.cnt, current.horse);
//
//		if (current.x == H && current.y == W) {
//			flag = 1;
//			ans = current.cnt;
//			return;
//		}
//		//if (current.horse < 0) { continue; }
//
//
//		for (int i = 0; i < 4; i++) {
//
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//
//			if (!visited[current.horse][x][y] && x > 0 && y > 0 &&x<=H&&y<=W&& map[x][y] != 1) {
//				visited[current.horse][x][y] = true;
//				Node next;
//				next.x = x;
//				next.y = y;
//				int nextcnt = current.cnt + 1;
//				int nexthorse = current.horse;
//				next.cnt = nextcnt;
//				next.horse=nexthorse;
//				//printf("next :: x=%d y=%d cnt=%d horse used time =%d\n\n", next.x, next.y, next.cnt, next.horse);
//
//				Q.push(next);
//			}
//		}
//		if (current.horse < h) {
//			for (int i = 0; i < 8; i++) {
//
//				int x = current.x + hx[i];
//				int y = current.y + hy[i];
//				int tmp = current.horse+1;
//				if (!visited[tmp][x][y] && x > 0 && y > 0 &&x<=H&&y<=W&& map[x][y] != 1) {
//					visited[tmp][x][y] = true;
//					Node next;
//					next.x = x;
//					next.y = y;
//					int nextcnt = current.cnt + 1;
//					int nexthorse = current.horse + 1;
//					next.cnt = nextcnt;
//					next.horse = nexthorse;
//
//					//printf("next :: x=%d y=%d cnt=%d horse used time =%d\n\n", next.x, next.y, next.cnt, next.horse);
//					Q.push(next);
//
//				}
//
//			}
//
//		}
//		
//
//
//
//	}
//
//}
//
//
//
//
//
//int main() {
//
//
//	cin >> h;
//	
//	cin >> W >> H;
//	for (int i = 1; i <= H; i++) {
//		for (int j = 1; j <= W; j++) {
//			cin >> map[i][j];
//		}
//	}
//	/*printf("\n");
//	for (int i = 1; i <= H; i++) {
//		for (int j = 1; j <= W; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}*/
//
//
//	Node start;
//	start.x = 1;
//	start.y = 1;
//	start.cnt = 0;
//	start.horse = 0;
//	Q.push(start);
//	//printf("<<start / x : %d y : %d >>\n\n", start.x, start.y);
//	visited[0][start.x][start.y] = true;
//	BFS(start);
//
//	if (flag == 1) {
//		printf("%d", ans);
//	}
//	else {
//		printf("-1");
//	}
//
//}
//
//
