//#include<iostream>
//#include<vector>
//#include<queue>
//#include<string>
//using namespace std;
//char map[101][101];
//int N, M;
//bool visited[101][101];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//
//typedef struct node {
//	int x;
//	int y;
//	int cnt = 0;
//
//	node(int a, int b, int c) {
//		x = a;
//		y = b;
//		cnt = c;
//	}
//
//
//}Node;
//
//queue<Node>Q;
//int ans = 0;
//
//void BFS() {
//
//	Node current(0,0,0);
//	while (!Q.empty()) {
//		current = Q.front();
//		//printf("%d %d %d\n\n", current.x, current.y, current.cnt);
//		Q.pop();
//
//
//		if (current.x == N && current.y == M) {
//			ans = current.cnt;
//		}
//		else {
//			for (int i = 0; i < 4; i++) {
//				int x = current.x + dx[i];
//				int y = current.y + dy[i];
//				int c = current.cnt + 1;
//
//				if (x >= 1 && x <= N && y >= 1 && y <= M && !visited[x][y] && map[x][y] == '1') {
//					Node next(x, y, c);
//					visited[x][y] = true;
//					Q.push(next);
//
//				}
//
//
//			}
//		}
//
//		
//
//	}
//
//
//}
//
//int main() {
//	
//
//	
//
//	cin >> N >> M;
//	
//	for (int i = 1; i <= N; i++) {
//		string a;
//		cin >> a;
//
//		
//		for (int k = 1; k <= M; k++) {
//			map[i][k] = a[k - 1];
//		}
//		
//
//	}
//	
//
//
//	Node start(1, 1, 0);
//	visited[1][1] = true;
//	Q.push(start);
//	BFS();
//
//
//
//
//	printf("%d", ans+1);
//
//}
//
//
//
