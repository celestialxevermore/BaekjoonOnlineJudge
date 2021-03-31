//#include<iostream>
//#include<queue>
//#include<vector>
//#include<algorithm>
//#define MAX 1000001
//#define N 101
//using namespace std;
//
//
//int mini = MAX;
//int map[N][N];
//int tmp[N][N];
//bool visited[N][N];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//typedef struct node {
//	int x;
//	int y;
//	int cnt = 0;
//}Node;
//
//
//queue<Node>Q;
//int n;
//int ind = 1;
//
//void BFS1() {
//	Node current;
//	while (!Q.empty()) {
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.cnt = Q.front().cnt;
//		Q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//
//
//			if (x >= 1 && y >= 1 && x <= n && y <= n && !visited[x][y] && map[x][y] == 1) {
//				visited[x][y] = true;
//
//				Node next;
//				next.x = x;
//				next.y = y;
//				map[x][y] = ind;
//				Q.push(next);
//			}
//		}
//	}
//	ind++;
//}
//int cur = 1;
//
//
//
//void BFS2() {
//
//	Node current;
//	while (!Q.empty()) {
//
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.cnt = Q.front().cnt;
//
//		Q.pop();
//
//		
//
//
//		
//			//printf("current map : %d x : %d y :%d cnt : %d\n\n", map[current.x][current.y], current.x, current.y, current.cnt);
//
//			for (int i = 0; i < 4; i++) {
//				int x = current.x + dx[i];
//				int y = current.y + dy[i];
//
//				if (map[x][y] != map[current.x][current.y] && map[x][y] != 0) {
//				//	printf("새 다리 완성!\n\n");
//					mini = min(current.cnt, mini);
//					//printf("current mini : %d\n\n", mini);
//				}
//			}
//
//
//
//			for (int i = 0; i < 4; i++) {
//
//				int x = current.x + dx[i];
//				int y = current.y + dy[i];
//				int c = current.cnt + 1;
//				if (x >= 1 && y >= 1 && x <= n && y <= n && map[x][y] == 0 && !visited[x][y]) {
//					map[x][y] = map[current.x][current.y];
//					visited[x][y] = true;
//
//					Node next;
//					next.x = x;
//					next.y = y;
//					next.cnt = c;
//					//printf("next x :%d y : %d cnt : %d\n\n", x, y, c);
//					Q.push(next);
//					/*for (int i = 1; i <= n; i++) {
//						for (int j = 1; j <= n; j++) {
//							printf("%d ", map[i][j]);
//						}
//						printf("\n");
//					}
//					printf("\n\n");*/
//				}
//
//
//			}
//
//		
//		
//		
//
//
//
//
//	}
//
//	/*for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");*/
//	//printf("current mini : %d \n\n", mini);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			map[i][j] = tmp[i][j];
//			visited[i][j] = false;
//		}
//	}
//
//
//
//
//}
//
//
//int main() {
//
//
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//
//			if (map[i][j] == 1 && !visited[i][j]) {
//				Node start;
//				start.x = i;
//				start.y = j;
//				start.cnt = ind;
//				map[i][j] = ind;
//				visited[start.x][start.y] = true;
//				Q.push(start);
//				BFS1();
//			}
//
//
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			tmp[i][j]=map[i][j];
//		}
//	}
//
//	/*printf("\n\n");
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");*/
//
//
//	for (int i = ind-1; i >= 1; i--) {
//		//printf("current ind : %d\n\n", i);
//		for (int k = 1; k <= n; k++) {
//			for (int j = 1; j <= n; j++) {
//				if (map[k][j] == i) {
//					Node start;
//					start.x = k;
//					start.y = j;
//					Q.push(start);
//					
//				}
//			}
//		}
//		BFS2();
//	}
//
//
//	printf("%d", mini);
//
//
//
//
//
//	
//}