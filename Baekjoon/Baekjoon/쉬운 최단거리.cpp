//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#define MAX 1001 
//
//using namespace std;
//
//int n, m;
//int map[MAX][MAX];
//bool visited[MAX][MAX];
//
//typedef struct node {
//	int x;
//	int y;
//	int p;
//}Node;
//
//queue<Node>Q;
//
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//
//
//
//void BFS() {
//
//	Node current;
//
//	while (!Q.empty()) {
//		
//
//		current = Q.front();
//		Q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nx = current.x + dx[i];
//			int ny = current.y + dy[i];
//			int np = current.p + 1;
//
//
//			if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && !visited[nx][ny] && map[nx][ny] == 1) {
//				visited[nx][ny] = true;
//				map[nx][ny] = np;
//				Node next;
//				next.x = nx;
//				next.y = ny;
//				next.p = np;
//				//printf("next x : %d y : %d p : %d \n\n", next.x, next.y, next.p);
//				Q.push(next);
//			}
//		}
//
//	}
//
//}
//
//int main() {
//
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cin >> map[i][j];
//
//		}
//	}
//	
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (map[i][j] == 2 && !visited[i][j]) {
//				visited[i][j] = true;
//				Node start;
//				start.x = i;
//				start.y = j;
//				start.p = 0;
//				map[start.x][start.y] = start.p;
//				Q.push(start);
//				BFS();
//
//			}
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (map[i][j] == 1 && !visited[i][j]) {
//				map[i][j] = -1;
//			}
//		}
//	}
//
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//}
