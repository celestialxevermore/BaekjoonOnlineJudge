//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<math.h>
//#include<algorithm>
//using namespace std;
//
//int map[51][51];
//bool visited[51][51];
//int N, L , R;
//
//int cnt = 0;
//int yhcnt = 1;
//int total = 0;
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//int flag = 0;
//typedef struct node {
//	int x;
//	int y;
//	int csum = 0;
//}Node;
//
//
//queue<Node>Q;
//
//
//
//void BFS() {
//
//	Node current;
//	while (!Q.empty()) {
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		
//		Q.pop();
//
//		total += map[current.x][current.y];
//		//printf("current total : %d\n\n", total);
//		for (int i = 0; i < 4; i++) {
//
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//			
//
//			if (x<1 || y<1 || x>N || y>N) { continue; }
//			if (visited[x][y]) { continue; }
//
//			int next = abs(map[current.x][current.y] - map[x][y]);
//			//printf("current next : %d\n\n", next);
//
//			if (next<L || next>R) { continue; }
//			if (next >= L && next <= R && !visited[x][y]) {
//				//바뀐게 있으면
//				flag = 1;
//				visited[x][y] = true;
//				yhcnt++;
//				Node next_;
//				next_.x = x;
//				next_.y = y;
//				Q.push(next_);
//
//			}
//
//		}
//	}
//
//	if (flag == 1) {
//		
//		cnt++;
//
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				printf("%d ", map[i][j]);
//			}
//			printf("\n");
//		}
//
//	}
//	
//
//}
//
//int main() {
//
//
//	cin >> N >> L >> R;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//
//	
//
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (!visited[i][j]) {
//				Node start;
//				start.x = i;
//				start.y = j;
//				visited[i][j] = true;
//				Q.push(start);
//				BFS();
//				yhcnt = 1;
//				total = 0;
//				for (int i = 1; i <= N; i++) {
//					for (int j = 1; j <= N; j++) {
//						visited[i][j] = false;
//					}
//				}
//			}
//		}
//	}
//
//
//	printf("%d\n", cnt);
//
//	/*for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}*/
//
//
//
//
//}
