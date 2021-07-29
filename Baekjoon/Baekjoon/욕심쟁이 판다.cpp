//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//int n;
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//int map[501][501];
//bool visited[501][501];
//int dp[501][501];
//
//int maxi = -1;
//void DFS(pair<int, int> start, int depth) {
//
//	pair<int, int> current;
//
//	if (maxi < depth) {
//		maxi = depth;
//		return maxi;
//	}
//	else {
//		for (int i = 0; i < 4; i++) {
//			int x = start.first + dx[i];
//			int y = start.second + dy[i];
//			
//			//범위를 벗어나는 경우
//			if (x<1 || y<1 || x>n || y>n) { continue; }
//			
//			//실제 맵에서 인접 수치보다 높아서 dfs를 돌 이유가 없는 경우
//			if (map[current.first][current.second] > map[x][y]) {
//				continue;
//			}
//			
//			if (x >= 1 && x <= n && y >= 1 && y <= n && !visited[x][y]) {
//
//				if (map[current.first][current.second] < map[x][y]) {
//				
//					if (dp[x][y] == 1) {
//						visited[x][y] = true;
//						pair<int, int>next;
//						next.first = x;
//						next.second = y;
//						int nextdepth = depth + 1;
//						DFS(next, nextdepth);
//
//					}
//					else {
//						dp[current.first][current.second] += dp[x][y];
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
//}
//
//
//
//int main() {
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			int input;
//			cin >> input;
//			map[i][j] = input;
//			dp[i][j] = 1;
//		}
//	}
//	
//
//	pair<int, int>start;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			start.first = i;
//			start.second = j;
//			//사방탐색
//			printf("<<<<start map[%d]%d] : %d dp[%d][%d] : %d>>>>\n\n", i, j, map[i][j], i, j, dp[i][j]);
//			int maxi = -1;
//			DFS(start, dp[i][j]);
//
//		}
//	}
//
//
//}