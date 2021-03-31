//#include<iostream>
//#include<stdio.h>
//#include<queue>
//#include<vector>
//#include<string>
//#define MAX 1001
//using namespace std;
//
//typedef struct node {
//	int x;
//	int y;
//	int cnt;
//	int w;
//}Node;
//
//
//queue<Node>Q;
//
//int N, M;
//int map[MAX][MAX];
//bool visited[2][MAX][MAX];
//
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//
//
//int ans = 0;
//int flag = 0;
//
//
//
//void BFS() {
//
//	Node current;
//	while (!Q.empty()) {
//
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.cnt = Q.front().cnt;
//		current.w = Q.front().w;
//		Q.pop();
//
//
//
//		if (current.x == N && current.y == M) {
//			ans = current.cnt;
//			flag = 1;
//			return;
//		}
//
//
//		//벽을 부수지 않았을 때를 먼저 큐에 넣습니다.
//		//이미 벽을 부수었든, 부수지 않았든 작동됩니다.
//		for (int i = 0; i < 4; i++) {
//
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//			int c = current.cnt;
//			int w = current.w;
//
//			if (!visited[w][x][y] && x <= N && y <= M && x >= 1 && y >= 1 && map[x][y] == 0) {
//
//				visited[w][x][y] = true;
//				Node next;
//				next.x = x;
//				next.y = y;
//				next.cnt = c + 1;
//				next.w = w;
//				//printf("next // x : %d y : %d cnt : %d wall break time : %d \n\n", next.x, next.y, next.cnt, next.w);
//				Q.push(next);
//
//			}
//
//
//
//
//
//		}
//		//벽을 부수지 않았을 때 다음에 벽을 부수는 경우를 큐에 넣습니다.
//		if (current.w < 1) {
//			for (int i = 0; i < 4; i++) {
//				int x = current.x + dx[i];
//				int y = current.y + dy[i];
//				int c = current.cnt;
//				int w = current.w+1;
//
//				if (!visited[w][x][y] && x <= N && y <= M && x >= 1 && y >= 1 && map[x][y] == 1) {
//
//					visited[w][x][y] = true;
//					Node next;
//					next.x = x;
//					next.y = y;
//					next.cnt = c + 1;
//					next.w = w;
//					//printf("next // x : %d y : %d cnt : %d wall break time : %d \n\n", next.x, next.y, next.cnt,next.w);
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
//
//int main() {
//
//
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; i++) {
//
//		string input;
//		cin >> input;
//		for (int j = 0; j < input.size(); j++) {
//
//			map[i][j + 1] = input[j] - '0';
//
//		}
//	}
//	
//
//	Node start;
//	start.x = 1;
//	start.y = 1;
//	start.cnt = 0;
//	start.w = 0;
//	visited[0][start.x][start.y] = true;
//	visited[1][start.x][start.y] = true;
//	Q.push(start);
//	BFS();
//
//
//	if (flag == 1) {
//		printf("%d", ans+1);
//	}
//	else {
//		printf("-1");
//	}
//
//}
