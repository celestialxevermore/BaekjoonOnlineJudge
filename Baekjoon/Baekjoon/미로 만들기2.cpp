//#include<iostream>
//#include<string>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//int n;
//
//int map[2602][51][51];
//bool visited[2602][51][51];
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//int minn = 100000;
//
//typedef struct node {
//	int x = 1;
//	int y = 1;
//	int cnt = 0;
//	node(int x, int y, int cnt) {
//		this->x = x;
//		this->y = y;
//		this->cnt = cnt;
//	}
//
//}Node;
//
//queue<Node>Q;
//
//void BFS() {
//
//	Node current = node(1, 1, 0);
//
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//
//		if (current.x == n && current.y == n) {
//			printf("µµÂøÇß¾¹´Ï´Ù.\n\n");
//			minn = min(current.cnt, minn);
//		}
//
//		else {
//			for (int i = 0; i < 4; i++) {
//				int nx = current.x + dx[i];
//				int ny = current.y + dy[i];
//
//				if (nx >= 1 && nx <= n && ny >= 1 && ny <= n) {
//
//				}
//			}
//
//		}
//	}
//
//
//}
//
//
//
//int main() {
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		string inputs = "";
//		cin >> inputs;
//		for (int j = 0; j < inputs.size(); j++) {
//			map[i][j + 1] = inputs[j]-'0';
//		}
//	}
//
//	Q.push(node(1, 1, 0));
//	visited[0][1][1] = true;
//	BFS();
//
//	printf("%d", minn);
//
//	
//
//
//}