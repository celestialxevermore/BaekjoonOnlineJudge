//#include<iostream>
//#include<vector>
//#include<queue>
//#include<string>
//#include<algorithm>
//#define MAX 1001
//
//using namespace std;
//
//int N, M, K;
//int map[MAX][MAX];
//bool visited[12][MAX][MAX];
//int flag = 0;
//int res = 10000;
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//
//
//typedef struct node {
//	int x;
//	int y;
//	int bcnt = 0;
//	int movecnt = 0;
//}Node;
//
//Node start;
//queue<Node>Q;
//
//
//void BFS() {
//
//	Node current;
//	while (!Q.empty()) {
//
//		current = Q.front();
//		Q.pop();
//
//		if (current.x == N && current.y == M) {
//			flag = 1;
//			res = min(res, current.movecnt);
//		}
//
//
//		for (int i = 0; i < 4; i++) {
//
//			int nx = current.x + dx[i];
//			int ny = current.y + dy[i];
//			int bcnt = current.bcnt;
//			int nbcnt = bcnt - 1;
//
//			if (nx >= 1 && nx <= N && ny >= 1 && ny <= M) {
//				
//				
//				////���� ���� �μ� �� �ִ� Ƚ���� �����ִ� ���
//				//if (bcnt >=1 ) {
//				//	//���� �μ� �� ������ �׳� ���� �μ��� �ʰ� �׳� �� ���� ���ݾ�.
//				//	if (map[nx][ny] == 0 && !visited[bcnt][nx][ny]) {
//				//		visited[bcnt][nx][ny] = true;
//				//		Node next;
//				//		next.x = nx;
//				//		next.y = ny;
//				//		next.bcnt = bcnt;
//				//		next.movecnt = current.movecnt+1;
//				//		Q.push(next);
//				//	}
//				//	//���� ���� ������ ���� �μ��� ���� ���
//				//	if (map[nx][ny] == 1 && !visited[nbcnt][nx][ny]) {
//				//		visited[nbcnt][nx][ny] = true;
//				//		Node next;x
//				//		next.x = nx;
//				//		next.y = ny;
//				//		next.bcnt = nbcnt;
//				//		next.movecnt = current.movecnt + 1;
//				//		Q.push(next);
//				//	}
//
//				//}
//				////�� �̻� ���� �μ� �� ���� ��� �׷��� ������ 0���θ� ���� �ϴ� ���
//				//else if(bcnt==0){
//				//	if (map[nx][ny] == 0 && !visited[bcnt][nx][ny]) {
//				//		visited[bcnt][nx][ny] = true;
//				//		Node next;
//				//		next.x = nx;
//				//		next.y = ny;
//				//		next.bcnt = bcnt;
//				//		next.movecnt = current.movecnt + 1;
//				//		Q.push(next);
//				//	}
//
//
//
//				//}
//
//				if (!visited[bcnt][nx][ny]) {
//					if (map[nx][ny] == 0) {
//						Node next;
//						next.x = nx;
//						next.y = ny;
//						next.bcnt = current.bcnt;
//						next.movecnt = current.movecnt + 1;
//						visited[bcnt][nx][ny] = true;
//						Q.push(next);
//					}
//					else if (map[nx][ny] == 1) {
//						if (bcnt > 0) {
//							visited[bcnt - 1][nx][ny] = true;
//							Node next;
//							next.x = nx;
//							next.y = ny;
//							next.bcnt = bcnt - 1;
//							next.movecnt = current.movecnt + 1;
//							Q.push(next);
//						}
//					}
//				}
//
//
//
//
//			}
//
//
//
//		}
//
//
//
//	}
//
//
//}
//
//
//int main() {
//
//	cin >> N >> M >> K;
//
//	for (int i = 1; i <= N; i++) {
//
//		string inputs = "";
//		cin >> inputs;
//
//		for (int j = 0; j < inputs.length(); j++) {
//			map[i][j + 1] = inputs[j] - '0';
//		}
//
//	}
//
//	start.x = 1;
//	start.y = 1;
//	start.bcnt = K;
//	visited[start.bcnt][start.x][start.y] = true;
//	Q.push(start);
//	BFS();
//
//
//	if (flag == 1) {
//		printf("%d", res+1);
//	}
//	else {
//		printf("-1");
//	}
//
//}
//
//
