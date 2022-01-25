//#include<iostream>
//#include<vector>
//#include<string>
//#include<queue>
//#include<algorithm>
//#define MAX 51
//
//using namespace std;
//
//int N, M;
//int mini = -1;
//
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//
//char map[MAX][MAX];
//bool visited[MAX][MAX];
//
//
//typedef struct node {
//	int x;
//	int y;
//	int cnt = 0;
//}Node;
//
//
//queue<Node>Q;
//
//
//int BFS(Node start) {
//
//	Node current;
//
//	while (!Q.empty()) {
//
//		current = Q.front();
//		Q.pop();
//
//
//		for (int i = 0; i < 4; i++) {
//
//			int nx = current.x + dx[i];
//			int ny = current.y + dy[i];
//			int nc = current.cnt + 1;
//
//			if (nx >= 1 && nx <= N && ny >= 1 && ny <= M && !visited[nx][ny] && map[nx][ny] == 'L') {
//
//				visited[nx][ny] = true;
//				Node next;
//				next.x = nx;
//				next.y = ny;
//				next.cnt = nc;
//				Q.push(next);
//
//			}
//
//
//		}
//
//	}
//	//printf("!! %d\n", current.cnt);
//	return current.cnt;
//
//
//
//}
//
//
//
//int main() {
//
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; i++) {
//		string inputs = "";
//		cin >> inputs;
//
//		for (int j = 0; j < inputs.length(); j++) {
//			map[i][j + 1] = inputs[j];
//		}
//	}
//
//
//
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (map[i][j] == 'L' && !visited[i][j]) {
//				//printf("start x : %d y : %d\n\n", i, j);
//				Node start;
//				start.x = i;
//				start.y = j;
//				start.cnt = 0;
//				visited[i][j] = true;
//				Q.push(start);
//				
//				int candi = BFS(start);
//				//printf("candi : %d\n\n", candi);
//				mini = max(candi, mini);
//
//			}
//
//
//
//		
//			for (int i = 1; i <= N; i++) {
//				for (int j = 1; j <= M; j++) {
//					if (visited[i][j]) {
//						visited[i][j] = false;
//					}
//				}
//			}
//
//
//		}
//	}
//
//	printf("%d", mini);
//
//
//}
//
