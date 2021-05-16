//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//
//int N;
//int map[101][101];
//bool visited[101][101];
//
//
//int minlevel = 101;
//int maxlevel = -1;
//int curlevel = 0;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//int ans = -1;
//int curres = 0;
//queue<pair<int, int>>Q;
//
//
//void BFS() {
//
//	pair<int, int>current;
//	while (!Q.empty()) {
//
//		current = Q.front();
//		Q.pop();
//
//		for (int i = 0; i < 4; i++) {
//
//			int x = current.first + dx[i];
//			int y = current.second + dy[i];
//
//			if (x >= 1 && y <= N && y >= 1 && y <= N && !visited[x][y] && map[x][y] > curlevel) {
//
//				visited[x][y] = true;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				Q.push(next);
//
//
//			}
//
//
//		}
//
//
//	}
//	
//}
//int flag = 0;
//
//int main() {
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			int input;
//			cin >> input;
//			map[i][j]=input;
//			minlevel = min(minlevel, input);
//			maxlevel = max(maxlevel, input);
//		}
//	}
//	
//	for (curlevel = minlevel; curlevel <= maxlevel; curlevel++) {
//
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				if (map[i][j] > curlevel&&!visited[i][j]) {
//					//printf("%d %d %d %d\n",map[i][j], i, j,curres);
//					flag = 1;
//					visited[i][j] = true;
//					pair<int, int>start;
//					start.first = i;
//					start.second = j;
//					Q.push(start);
//					BFS();
//					curres++;
//				}
//			}
//		}
//		if (flag == 1) {
//			ans = max(ans, curres);
//		}
//		curres = 0;
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				visited[i][j] = false;
//			}
//		}
//
//
//
//	}
//
//	if (flag == 0) {
//		printf("1");
//	}
//	else {
//		printf("%d", ans);
//	}
//
//
//}