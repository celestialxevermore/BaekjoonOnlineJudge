//#include<iostream>
//#include<vector>
//#include<algorithm>
//#define MAX 501
//
//int N, M;
//int H;
//
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//
//int map[MAX][MAX];
//
//int dynamic[MAX][MAX];
//using namespace std;
//
//
//int DFS(pair<int, int>start) {
//
//
//	pair<int, int>current;
//	current = start;
//
//	if (current.first == M && current.second == N) {
//		return 1;
//	}
//	if (dynamic[current.first][current.second]!=0) {
//		return dynamic[current.first][current.second];
//	}
//	else {
//
//		for (int i = 0; i < 4; i++) {
//			int nx = current.first + dx[i];
//			int ny = current.second + dy[i];
//
//			if (nx >= 1 && nx <= M && ny >= 1 && ny <= N && map[current.first][current.second] > map[nx][ny]) {
//
//				pair<int, int>next;
//				next.first = nx;
//				next.second = ny;
//				dynamic[current.first][current.second] += DFS(next);
//			}
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
//
//int main() {
//	
//	cin >> M >> N;
//	for (int i = 1; i <= M; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	pair<int, int>start;
//	start.first = 1;
//	start.second = 1;
//	
//	
//	int res = DFS(start)-1;
//
//	printf("%d\n",res);
//
//
//
//
//
//
//}
