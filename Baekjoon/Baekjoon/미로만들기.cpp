//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#include<string>
//#define MAX 10000
//
//using namespace std;
//
//int mini = MAX;
//
//
//int n;
//
//int dx[] = { 1,0,-1,0};
//int dy[] = { 0,1,0,-1};
//
//typedef struct node {
//	int x;
//	int y;
//	int cnt = 0;
//}Node;
//
//queue<Node>Q;
//
//char map[51][51];
//bool visited[51][51];
//int check[51][51];
//
//void BFS() {
//
//	Node current;
//
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//
//			for (int i = 0; i < 4; i++) {
//				int x = current.x + dx[i];
//				int y = current.y + dy[i];
//				Node next;
//				
//				if (x<1 || x>n || y<1 || y>n) { continue; }
//				
//				//다음 방이 흰 방인 경우
//				if (map[x][y] == 1) {
//					if (check[x][y] == MAX || check[x][y] > check[current.x][current.y]) {
//						check[x][y] = check[current.x][current.y];
//						next.x = x;
//						next.y = y;
//						Q.push(next);
//					}
//				}
//				//다음 방이 검은 방인 경우
//				else {
//					if (check[x][y] == MAX || check[x][y] > check[current.x][current.y] + 1) {
//						check[x][y] = check[current.x][current.y] + 1;
//						next.x = x;
//						next.y = y;
//						Q.push(next);
//					}
//				}
//
//
//
//			}
//			/*for (int i = 1; i <= n; i++) {
//				for (int j = 1; j <= n; j++) {
//					printf("%d ", check[i][j]);
//				}
//				printf("\n");
//			}
//			printf("\n\n");*/
//		
//	}
//
//}
//
//
//
//int main() {
//
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		string a;
//		cin >> a;
//
//		for (int j = 0; j < a.size(); j++) {
//			map[i][j + 1] = a[j];
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			map[i][j] = map[i][j] - '0';
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			check[i][j] = MAX;
//		}
//	}
//	check[1][1] = 0;
//
//	Node start;
//	start.x = 1;
//	start.y = 1;
//	start.cnt = 0;
//	visited[start.x][start.y] = true;
//	Q.push(start);
//
//
//	BFS();
//
//	printf("%d", check[n][n]);
//	
//}