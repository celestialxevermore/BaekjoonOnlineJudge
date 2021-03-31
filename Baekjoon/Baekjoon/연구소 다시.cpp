//#include<iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//
//const int MAX = 9;
//
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int maxi = -1;
//int N, M;
//int map[MAX][MAX];
//int temp[MAX][MAX];
//bool visited[MAX][MAX];
//
//
//int res = 0;
//queue<pair<int, int>>Q;
//
//
//
//void BFS() {
//
//	int afterspread[MAX][MAX];
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			afterspread[i][j] = temp[i][j];
//		}
//	}
//	pair<int, int>current;
//	while (!Q.empty()) {
//		
//		current.first = Q.front().first;
//		current.second = Q.front().second;
//		Q.pop();
//
//		for (int i = 0; i < 4; i++) {
//
//			int x = current.first + dx[i];
//			int y = current.second + dy[i];
//
//
//			if (!visited[x][y] && afterspread[x][y] == 0 && x >= 1 && y >= 1 && x <= N && y <= M) {
//				printf("22\n\n");
//				visited[x][y] = true;
//				afterspread[x][y] = 2;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				printf("next : x : %d y : %d \n\n", next.first, next.second);
//				Q.push(next);
//			}
//
//
//		}
//
//
//
//	}
//	/*for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", afterspread[i][j]);
//		}
//		printf("\n");
//	}*/
//	int zerocnt = 0;
//	
//	printf("res\n\n");
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", afterspread[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			visited[i][j] = false;
//		}
//	}
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			
//			if (afterspread[i][j] == 0) {
//				zerocnt++;
//				//printf("current zerocnt : %d \n\n", zerocnt);
//			}
//		}
//	}
//	if (maxi < zerocnt) {
//		printf("current maxi : %d current zerocnt : %d \n\n", maxi, zerocnt);
//		maxi = zerocnt;
//		
//	}
//
//	
//
//}
//
//void makewall(int cnt) {
//	if (cnt == 3) {
//		BFS();
//		return;
//	}
//	else {
//		
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= M; j++) {
//				if (temp[i][j] == 0) {
//					temp[i][j] = 1;
//					makewall(cnt+1);
//					temp[i][j] = 0;
//				}
//
//
//
//			}
//		}
//	}
//}
//
//
//
//int main() {
//
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			
//			if (map[i][j] == 0) {
//				for (int k = 1; k <= N; k++) {
//					for (int l = 1; l <= M; l++) {
//						temp[k][l] = map[k][l];
//					}
//				}
//			}
//			
//			
//			int input;
//			cin >> input;
//			temp[i][j] = map[i][j]=input;
//			if (input == 2) {
//				
//				Q.push(make_pair(i,j));
//				visited[i][j] = true;
//				
//			}
//		}
//	}
//	printf("11\n\n");
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (temp[i][j] == 0) {
//				
//				temp[i][j] = 1;
//				makewall(1);
//				temp[i][j] = 0;
//			}
//		}
//	}
//
//
//
//	printf("%d", maxi);
//
//
//}
//
