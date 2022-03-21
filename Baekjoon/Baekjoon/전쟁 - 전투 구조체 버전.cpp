//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//int wcnt = 1;
//int bcnt = 1;
//int W, B;
//
//int N, M;
//
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//char map[101][101];
//bool visited[101][101];
//
//typedef struct node {
//	int x;
//	int y;
//	int cnt = 1;
//	char c = ' ';
//	node(int x, int y, char c, int cnt) {
//		this->x = x;
//		this->y = y;
//		this->c = c;
//		this->cnt = cnt;
//	}
//
//}Node;
//
//
//void DFS(Node start) {
//
//	for (int i = 0; i < 4; i++) {
//		int nx = start.x + dx[i];
//		int ny = start.y + dy[i];
//
//		int nc = start.cnt + 1;
//
//		if (nx >= 1 && nx <= M && ny >= 1 && ny <= N && map[nx][ny] == start.c && !visited[nx][ny]) {
//			visited[nx][ny] = true;
//			Node next(nx, ny, start.c, nc);
//			
//			if (start.c == 'W') {
//				wcnt += 1;
//				
//			}
//			else {
//				bcnt += 1;
//				
//			}
//			DFS(next);
//		}
//	}
//
//
//
//}
//int main() {
//
//	cin >> N >> M;
//
//	for (int i = 1; i <= M; i++) {
//		string inputs = "";
//		cin >> inputs;
//		for (int j = 0; j < inputs.size(); j++) {
//			map[i][j + 1] = inputs[j];
//		}
//	}
//
//	for (int i = 1; i <= M; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (!visited[i][j]) {
//				visited[i][j] = true;
//				Node start(i, j, map[i][j], 1);
//				DFS(start);
//
//				if (start.c == 'W') {
//					wcnt = wcnt * wcnt;
//					W += wcnt;
//					wcnt = 1;
//				}
//				else {
//					bcnt = bcnt * bcnt;
//					B += bcnt;
//					bcnt = 1;
//				}
//
//			}
//		}
//	}
//
//	printf("%d %d", W, B);
//}
