//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//
//int N, M;
//int maxi = -1;
//
//int map[501][501];
//int ret[501][501];
//bool visited[501][501];
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { 1,-1,0,0 };
//
//typedef struct node {
//	int x;
//	int y;
//	int cnt = 0;
//	int sum = 0;
//}Node;
//queue<Node>Q;
//
//
//int DFS(Node start) {
//	int res = 0;
//	Node current;
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//		if (current.cnt == 3) {
//			if (res < current.sum) {
//				res = current.sum;
//				
//			}
//		}
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//			int c = current.cnt + 1;
//			int sum = current.sum + map[x][y];
//			if (x >= 1 && y >= 1 && x <= N && y <= M && !visited[x][y]) {
//				visited[x][y] = true;
//				Node next;
//				next.x = x;
//				next.y = y;
//				next.cnt = c;
//				next.sum = sum;
//				Q.push(next);
//			}
//
//		}
//	}
//
//	return res;
//
//}
//
//
//int dir(Node start) {
//	Node current;
//	current = start;
//
//	int total = 0;
//	int sumcnt = 0;
//	total += map[current.x][current.y];
//	for (int i = 0; i < 4; i++) {
//		int x = current.x + dx[i];
//		int y = current.y + dy[i];
//
//		if (x >= 1 && y >= 1 && x <= N && y <= M) {
//			total += map[x][y];
//			sumcnt++;
//		}
//
//
//	}
//
//	if (sumcnt == 2) {
//		return 0;
//	}
//	if (sumcnt == 3) {
//		return total;
//	}
//	else {
//		int ans = 0;
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//
//
//			if (x >= 1 && y >= 1 && x <= N && y <= M) {
//				int candi = total - map[x][y];
//				if (ans < candi) {
//
//					ans = candi;
//				}
//			}
//		}
//		//printf("dir ans!! : %d\n\n", ans);
//		return ans;
//	}
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
//		for (int j = 1; j <= M; j++) {
//
//			cin >> map[i][j];
//		}
//	}
//
//	for (int x = 1; x <= N; x++) {
//		for (int y = 1; y <= M; y++) {
//
//			int ans1 = 0;
//			int ans2 = 0;
//			Node start;
//			start.x = x;
//			start.y = y;
//			start.cnt = 0;
//			start.sum += map[x][y];
//			ans1 = dir(start);
//			visited[start.x][start.y] = true;
//			Q.push(start);
//			ans2 = DFS(start);
//			/*printf("ans1 : %d\n\n", ans1);
//			printf("ans2 : %d\n\n", ans2);*/
//			ret[start.x][start.y] = max(ans1, ans2);
//
//		}
//		
//			for (int i = 1; i <= N; i++) {
//				for (int j = 1; j <= M; j++) {
//					visited[i][j] = false;
//				}
//			}
//
//
//
//		
//
//	}
//
//
//
//	/*for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", ret[i][j]);
//		}
//		printf("\n");
//	}*/
//	int maxi = -1;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (maxi < ret[i][j]) {
//				maxi = ret[i][j];
//			}
//		}
//	}
//	printf("%d", maxi);
//
//
//}