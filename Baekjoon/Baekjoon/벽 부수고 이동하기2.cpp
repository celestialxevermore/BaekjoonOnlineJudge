//#include<iostream>
//#include<vector>
//#include<string>
//#include<queue>
//#define MAX 1001
//using namespace std;
//
//int N, M;
//
//int res = -2;
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//
//typedef struct node {
//	int x;
//	int y;
//	int cnt = 1;
//	int breakcnt = 1;
//	
//	node(int x, int y, int cnt,int breakcnt) {
//		this->x = x;
//		this->y = y;
//		this->cnt = cnt;
//		this->breakcnt = breakcnt;
//	}
//}Node;
//
//
//int map[MAX][MAX];
//bool visited[2][MAX][MAX];
//queue<Node>Q;
//
//
//
//void BFS(Node start) {
//
//	Node current = Node(0, 0, 0, 0);
//
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//
//
//		if (current.x == N && current.y == M) {
//			res = current.cnt;
//			return;
//		}
//
//
//
//		for (int i = 0; i < 4; i++) {
//
//			int nx = current.x + dx[i];
//			int ny = current.y + dy[i];
//			int cnt = current.cnt;
//			int currentdimension = current.breakcnt;
//
//
//			//공통적으로 일단 범위를 벗어나서는 안된다.
//
//			if (nx >= 1 && nx <= N && ny >= 1 && ny <= M) {
//
//
//				//벽을 부술 수 있고, 0으로 이동하는 경우
//				if (currentdimension==1 && !visited[currentdimension][nx][ny] && map[nx][ny] == 0) {
//					visited[currentdimension][nx][ny] = true;
//					Node next = Node(nx, ny, cnt + 1, currentdimension);
//					Q.push(next);
//
//				}
//				//벽을 부술 수 있고 실제로 부숴가지고 1로 이동
//				if (map[nx][ny] == 1 && currentdimension > 0) {
//					visited[currentdimension - 1][nx][ny] = true;
//					Node next = Node(nx, ny, cnt+1, currentdimension - 1);
//					Q.push(next);
//				}
//				//벽을 더이상 부술 수 없고, 무조건 0으로만 이동해야만 하는 경우
//				else if (currentdimension == 0 && !visited[currentdimension][nx][ny] && map[nx][ny] == 0) {
//					visited[currentdimension][nx][ny] = true;
//					Node next = Node(nx, ny, cnt + 1, currentdimension);
//					Q.push(next);
//				
//				
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
//	}
//	
//}
//
//
//int main() {
//
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; i++) {
//		string input = "";
//
//		cin >> input;
//		for (int j = 0; j < input.length(); j++) {
//			map[i][j + 1] = input[j] - '0';
//		}
//	}
//
//	
//	Node start = Node(1, 1, 1, 1);
//	visited[1][1][1] = true;
//	visited[0][1][1] = true;
//	Q.push(start);
//
//	BFS(start);
//
//	if (res != -2) {
//		printf("%d", res);
//	}
//	else {
//		printf("-1");
//	}
//	
//}
