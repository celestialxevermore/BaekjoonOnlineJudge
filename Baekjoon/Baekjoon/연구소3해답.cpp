//#include<iostream>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//
//
//typedef struct virus{
//	int x;
//	int y;
//	int time;
//}V;
//
//int N, M, ans;
//int map[51][51];
//
//int pos_size;
//V pos[10];
//int dx[] = { 0,0,-1,1 };
//int dy[] = {1, -1, 0, 0};
//
//
//int bfs(int pick[]) {
//	//0이 모두 없어지면 종료
//	int emptycount = 0;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (map[i][j] == 0) {
//				emptycount++;
//			}
//		}
//	}
//	queue<V> Q;
//	bool visited[51][51];
//	for (int i = 0; i < M; i++) {
//		Q.push(pos[pick[i]]);
//		visited[pos[pick[i]].x][pos[pick[i]].y] = true;
//	}
//	while (!Q.empty()) {
//		V current = Q.front();
//		Q.pop();
//		if (map[current.x][current.y] == 0) {
//			emptycount--;
//		}
//		if (emptycount == 0) {
//			return current.time;
//		}
//
//
//		V next;
//		next.time = current.time + 1;
//		for (int i = 0; i < 4; i++) {
//			next.x = current.x + dx[i];
//			next.y = current.y + dy[i];
//			if (next.y >= 1 && next.x >= 1 && next.x <= N && next.y <= N&&!visited[next.x][next.y]&&map[next.x][next.y]!=1) {
//				Q.push(next);
//				visited[next.x][next.y] = true;
//			}
//		}
//	}
//	return 100000;
//}
//
//void dfs(int lastpick, int pickcount, int pick[]) {
//	if (pickcount == M) {
//		int candi = bfs(pick);
//		if (ans > candi) {
//			ans = candi;
//		}
//	}
//	else {
//
//		for (int i = lastpick + 1; i < pos_size; i++) {
//			pick[pickcount] = i;
//			dfs(i, pickcount + 1, pick);
//		}
//
//	}
//}
//
//int main() {
//
//
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 2) {
//				pos[pos_size].x = i;
//				pos[pos_size].y = j;
//
//				pos[pos_size].time = 0;
//				pos_size++;
//			}
//		}
//	}
//	ans = 100000;
//
//
//	int pick[10] = { 0, };
//
//	dfs(-1, 0, pick);
//	if (ans == 100000) {
//		printf("-1");
//	}
//	else {
//		printf("%d", ans);
//	}
//
//}