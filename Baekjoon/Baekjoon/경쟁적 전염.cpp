//#include<iostream>
//#include<vector>
//#include<queue>
//#define MAX 1001
//using namespace std;
//
//int N, K, S, X, Y;
//
//int map[201][201];
//bool visited[201][201];
//
//
//vector<pair< pair<int, int>, int>>start(100000);
//queue<pair<pair<int, int>, int>>Q;
//
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//int index[MAX];
//int second = 0;
//int ans = 0;
//
//void BFS() {
//
//	pair<pair<int, int>, int>current;
//
//
//
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//
//		//printf("current x : %d y :%d key : %d\n\n", current.first.first, current.first.second, current.second);
//
//		if (current.second == K) {
//			second++;
//		}
//
//		for (int i = 0; i < 4; i++) {
//
//			int x = current.first.first + dx[i];
//			int y = current.first.second + dy[i];
//
//			if (x >= 1 && x <= N && y >= 1 && y <= N && !visited[x][y] && map[x][y] == 0) {
//				visited[x][y] = true;
//				map[x][y] = current.second;
//				pair<pair<int, int>, int>next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = current.second;
//				Q.push(next);
//
//				/*for (int i = 1; i <= N; i++) {
//					for (int j = 1; j <= N; j++) {
//						printf("%d ", map[i][j]);
//					}
//					printf("\n");
//				}
//				printf("\n");*/
//			}
//
//		}
//
//	}
//	if (second == S) {
//		ans = map[X][Y];
//	}
//
//}
//
//
//int main() {
//
//	cin >> N >> K;
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			int input;
//			cin >> input;
//			
//			if (input != 0) {
//				start[input].first.first = i;
//				start[input].first.second = j;
//				start[input].second = input;
//				map[i][j] = input;
//			}
//
//
//
//		}
//	}
//	
//	cin >> S >> X >> Y;
//
//
//	if (S == 0) {
//		printf("0");
//	}
//	else {
//		
//		for (int i = 1; i <= K; i++) {
//			//printf("%d %d %d \n\n", start[i].first.first, start[i].first.second, start[i].second);
//			visited[start[i].first.first][start[i].first.first] = true;
//			Q.push(start[i]);
//		}
//		BFS();
//
//
//		if (ans == 0) {
//			printf("0");
//		}
//		else {
//			printf("%d", ans);
//		}
//
//	}
//
//	
//}