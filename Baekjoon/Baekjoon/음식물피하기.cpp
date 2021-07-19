//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int map[101][101];
//bool visited[101][101];
//
//int N, M,K;
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//int currenttmp = 1;
//int res = -1;
//
//void DFS(pair<int, int>start) {
//
//
//	for (int i = 0; i < 4; i++) {
//		int x = start.first + dx[i];
//		int y = start.second + dy[i];
//		
//		if (x >= 1 && x <= N && y >= 1 && y <= M && !visited[x][y] && map[x][y] == 1) {
//			pair<int, int>next;
//			next.first = x;
//			next.second = y;
//			visited[x][y] = true;
//			currenttmp++;
//			//printf("DFS(%d, %d, %d)\n\n", next.first, next.second, currenttmp);
//			DFS(next);
//			//visited[x][y] = false;
//		}
//
//	}
//
//	
//}
//
//
//
//int main() {
//
//	cin >> N >> M >> K;
//
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			map[i][j] = 0;
//		}
//	}
//	for (int i = 0; i < K; i++) {
//		int a, b;
//		cin >> a >> b;
//		map[a][b] = 1;
//	}
//	/*for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (map[i][j] == 1&&!visited[i][j]) {
//				pair<int, int>start;
//				start.first = i;
//				start.second = j;
//				visited[start.first][start.second] = true;
//				
//				//printf("DFS(%d, %d, %d)\n\n",start.first,start.second, currenttmp);
//				DFS(start);
//				res = max(res, currenttmp);
//				//printf("<<<<<current res : %d>>>>>\n\n", res);
//				currenttmp = 1;
//			}
//		}
//	}
//
//
//
//	printf("%d", res);
//
//
//}
