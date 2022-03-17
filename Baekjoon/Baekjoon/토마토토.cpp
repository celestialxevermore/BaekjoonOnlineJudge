//#include<iostream>
//#include<vector>
//#include<string>
//#include<queue>
//using namespace std;
//
//int M, N;
//int res = 0;
//
//int map[1001][1001];
//
//bool visited[1001][1001];
//
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//typedef struct tomato {
//
//	int x;
//	int y;
//	int cnt = 0;
//	
//
//}T;
//
//queue<T>Q;
//
//
//
//void BFS() {
//
//	T current;
//	while (!Q.empty()) {
//		current = Q.front();
//
//		Q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nx = current.x + dx[i];
//			int ny = current.y + dy[i];
//			int nc = current.cnt + 1;
//
//			if (nx >= 1 && nx <= N && ny >= 1 && ny <= M && map[nx][ny] != -1 && map[nx][ny] != 1 && map[nx][ny] == 0 && !visited[nx][ny]) {
//				visited[nx][ny] = true;
//				map[nx][ny] = 1;
//				T next;
//				next.x = nx;
//				next.y = ny;
//				next.cnt = nc;
//				//printf("next :%d %d %d", next.x, next.y, next.cnt);
//				Q.push(next);
//
//			}
//		}
//
//	}
//	res = current.cnt;
//
//
//
//}
//
//
//
//int main() {
//
//	cin >> M >> N;
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			
//			if (map[i][j] == 1) {
//				T start;
//				start.x = i;
//				start.y = j;
//				start.cnt = 0;
//				Q.push(start);
//
//			}
//		}
//		
//	}
//	BFS();
//	int flag = 0;
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (map[i][j] == 0) {
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//	if (flag == 1) {
//		printf("-1");
//	}
//	else {
//		printf("%d", res);
//	}
//
//}