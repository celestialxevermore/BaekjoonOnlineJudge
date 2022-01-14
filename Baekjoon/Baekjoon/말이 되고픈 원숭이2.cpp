//#include<iostream>
//
//
//#include<queue>
//#define MAX 201
//#define K 31
//using namespace std;
//
//
//int mdx[] = { -1,1,0,0 };
//int mdy[] = { 0,0,1,-1 };
//
//int hdx[] = {1,2,2,1,-1,-2,-2,-1};
//int hdy[] = {2,1,-1,-2,-2,-1,1,2};
//
//int map[MAX][MAX];
//
//bool visited[K][MAX][MAX];
//
//int k;
//int W, H;
//
//int isarrived = 0;
//int res = 0;
//
//typedef struct monkey {
//
//	int x;
//	int y;
//	int horse = 0;
//	int cnt = 0;
//
//}Monkey;
//
//
//queue<Monkey>Q;
//
//
//
//void BFS(Monkey start) {
//
//	Monkey cur;
//
//	while (Q.empty() != true) {
//
//		cur = Q.front();
//		Q.pop();
//
//		//도착점에 도달한 경우
//		if (cur.x == H && cur.y == W) {
//			isarrived = 1;
//			res = cur.cnt;
//			return;
//			
//		}
//
//		for (int i = 0; i < 4; i++) {
//			int nx = cur.x + mdx[i];
//			int ny = cur.y + mdy[i];
//
//			if (nx >= 1 && nx <= H && ny >= 1 && ny <= W && !visited[cur.horse][nx][ny] && map[nx][ny] != 1) {
//				Monkey next;
//				visited[cur.horse][nx][ny] = true;
//				next.x = nx;
//				next.y = ny;
//				next.cnt = cur.cnt + 1;
//				next.horse = cur.horse;
//				Q.push(next);
//			}
//
//
//		}
//		if (cur.horse <k) {
//
//			for (int i = 0; i < 8; i++) {
//				int nx = cur.x + hdx[i];
//				int ny = cur.y + hdy[i];
//				int nextv = cur.horse + 1;
//				if (nx >= 1 && nx <= H && ny >= 1 && ny <= W && !visited[nextv][nx][ny] && map[nx][ny] != 1) {
//					Monkey next;
//					visited[nextv][nx][ny] = true;
//					next.x = nx;
//					next.y = ny;
//					next.cnt = cur.cnt + 1;
//					next.horse = nextv;
//					//next.horse = cur.horse - 1;
//					Q.push(next);
//				}
//			}
//
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
//
//}
//
//
//
//
//int main() {
//
//	cin >> k;
//	cin >> W >> H;
//
//	for (int i = 1; i <= H; i++) {
//		for (int j = 1; j <= W; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	Monkey start;
//	start.x = 1;
//	start.y = 1;
//	start.horse = 0;
//
//	//printf("현재 남아있는 말 움직임의 횟수 : %d\n\n", start.horse);
//	visited[0][start.x][start.y] = true;
//	Q.push(start);
//	BFS(start);
//
//
//
//
//	if (isarrived == 1) {
//		printf("%d", res);
//	}
//	else {
//		printf("-1");
//	}
//}