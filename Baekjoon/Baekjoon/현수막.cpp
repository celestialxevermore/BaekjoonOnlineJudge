//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//#include<queue>
//
//using namespace std;
//
//#define MAX 251
//int N, M;
//int rescnt = 0;
//int map[MAX][MAX];
//
//bool visited[MAX][MAX];
//
//queue<pair<int,int>>Q;
//
//
//
//
//int dx[] = { 0,1,-1,0,-1,-1,1,1 };
//int dy[] = { 1,0,0,-1,-1,1,-1,1 };
//
//
//
//void BFS(pair<int, int> start) {
//
//	pair<int, int>cur;
//	while (!Q.empty()) {
//
//		cur.first = Q.front().first;
//		cur.second = Q.front().second;
//
//		Q.pop();
//
//
//
//		for (int i = 0; i < 8; i++) {
//			int nx = cur.first + dx[i];
//			int ny = cur.second + dy[i];
//
//			if (nx >= 1 && nx <= M && ny >= 1 && ny <= N && !visited[nx][ny] && map[nx][ny] == 1) {
//				visited[nx][ny] = true;
//				pair<int, int>next;
//				next.first = nx;
//				next.second = ny;
//				Q.push(next);
//			}
//
//
//
//		}
//
//
//
//
//
//	}
//
//	//탐색을 전부 마친 경우
//	rescnt++;
//
//
//
//
//
//}
//
//
//
//
//
//int main() {
//
//
//	cin >> M >> N;
//	
//	for (int i = 1; i <= M; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	
//
//
//	for (int i = 1; i <= M; i++) {
//		for (int j = 1; j <= N; j++) {
//
//			if (!visited[i][j] && map[i][j] == 1) {
//				visited[i][j] = true;
//				pair<int, int>start;
//				start.first = i;
//				start.second = j;
//				Q.push(start);
//				BFS(start);
//			}
//
//
//
//		}
//	}
//
//
//	cout << rescnt << endl;
//
//
//}
//
//
//
//
