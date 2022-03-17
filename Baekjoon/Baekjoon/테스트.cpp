//#include<iostream>
//#include<vector>
//#include<string>
//#include<queue>
//#define MAX 101
//using namespace std;
//
//int N;
//
//char map[MAX][MAX];
//bool visited[MAX][MAX];
//
//int res1 = 0;
//int res2 = 0;
//
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//
//
//typedef struct node {
//	int x;
//	int y;
//	bool isrb_disabled = false;
//	char curchar;
//
//}Node;
//
//queue<Node> Q;
//
//
//void BFS() {
//
//	Node current;
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//		
//		for (int i = 0; i < 4; i++) {
//			int nx = current.x + dx[i];
//			int ny = current.y + dy[i];
//
//
//
//			//만일 적록색약자에 해당하는 경우
//			if (current.isrb_disabled) {
//				
//				//범위를 벗어나지 않고
//				if (nx >= 1 && nx <= N && ny >= 1 && ny <= N && !visited[nx][ny]) {
//					
//					if (current.curchar == 'R' or current.curchar == 'G') {
//
//						if (map[nx][ny] == 'R' or map[nx][ny] == 'G') {
//							visited[nx][ny] = true;
//							Node next;
//							next.x = nx;
//							next.y = ny;
//							next.isrb_disabled = true;
//							next.curchar = map[nx][ny];
//							Q.push(next);
//						}
//					}
//					else if (current.curchar == 'B') {
//						
//						if (current.curchar == map[nx][ny]) {
//							visited[nx][ny] = true;
//							Node next;
//							next.x = nx;
//							next.y = ny;
//							next.isrb_disabled = true;
//							next.curchar = current.curchar;
//							Q.push(next);
//						}
//					}
//
//				}
//
//			}
//
//
//			else {
//				//범위를 벗어나지 않고
//				if (nx >= 1 && nx <= N && ny >= 1 && ny <= N && !visited[nx][ny]) {
//
//					if (current.curchar == map[nx][ny]) {
//
//						visited[nx][ny] = true;
//						Node next;
//						next.x = nx;
//						next.y = ny;
//						next.isrb_disabled = false;
//						next.curchar = map[nx][ny];
//						Q.push(next);
//					}
//
//				}
//
//
//
//			}
//		}
//
//	}
//
//	/*if (current.isrb_disabled == true) {
//		res1++;
//	}
//	else {
//		res2++;
//	}*/
//
//}
//
//
//
//int main() {
//
//	cin >> N;
//
//	for (int i = 1; i <= N; i++) {
//
//		string inputs = "";
//		cin >> inputs;
//
//		for (int j = 0; j < inputs.size(); j++) {
//			map[i][j + 1] = inputs[j];
//		}
//
//	}
//
//
//
//
//
//	for (int i = 1; i <= N; i++) {
//
//		for (int j = 1; j <= N; j++) {
//
//			if (!visited[i][j]) {
//				//printf("start");
//				Node start;
//				start.x = i;
//				start.y = j;
//				start.isrb_disabled = true;
//				start.curchar = map[i][j];
//				visited[i][j] = true;
//				Q.push(start);
//				//printf("%d %d %d %c \n\n", start.x, start.y, start.isrb_disabled, start.curchar);
//				BFS();
//				res1++;
//				
//			}
//		}
//	}
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			visited[i][j] = false;
//		}
//	}
//
//
//	for (int i = 1; i <= N; i++) {
//
//		for (int j = 1; j <= N; j++) {
//
//			if (!visited[i][j]) {
//
//				Node start;
//				start.x = i;
//				start.y = j;
//				start.isrb_disabled = false;
//				start.curchar = map[i][j];
//				visited[i][j] = true;
//				Q.push(start);
//				BFS();
//
//				res2++;
//			}
//		}
//	}
//
//
//
//	printf("%d %d", res2, res1);
//}