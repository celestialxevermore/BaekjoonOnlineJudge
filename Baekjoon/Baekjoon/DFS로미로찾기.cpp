//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#define MAX 101
//using namespace std;
//
//int map[MAX][MAX];
//bool visited[MAX][MAX];
//
//int M, N, K;
//
//int areacnt = 0;
//vector<int> arealist[10001];
//int areaa = 1;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//void DFS(pair<int, int> start) {
//
//	for (int i = 0; i < 4; i++) {
//		int x = start.first+dx[i];
//		int y = start.second+dy[i];
//
//		if (x < 0 || y < 0 || x >= M || y >= N) { continue; }
//		if (visited[x][y]) { continue; }
//		if (!visited[x][y] && map[x][y] == 0) {
//			visited[x][y] = true;
//			map[x][y] = 1;
//			areaa += map[x][y];
//			pair<int, int>next;
//			next.first = x;
//			next.second = y;
//			DFS(next);
//		}
//	}
//
//
//
//}
//
//
//
//int main() {
//	cin >> M >> N >> K;
//
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			map[i][j] = 0;
//		}
//	}
//	int x1, y1, x2, y2;
//	for (int i = 0; i < K; i++) {
//		cin >> x1 >> y1 >> x2 >> y2;
//		for (int i = x1; i < x2; i++) {
//			for (int j = y1; j < y2; j++) {
//				map[j][i] = 1;
//			}
//		}
//		
//	}
//	/*for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			printf("%d ",map[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			if (!visited[i][j] && map[i][j] == 0) {
//				
//				pair<int, int>start;
//				start.first = i;
//				start.second = j;
//				visited[i][j] = true;
//
//				DFS(start);
//				arealist[areacnt].push_back(areaa);
//				areacnt++;
//				areaa = 1;
//			}
//		}
//	}
//
//	printf("%d\n", areacnt);
//	sort(arealist, arealist + areacnt);
//	for (int i = 0; i < areacnt; i++) {
//		printf("%d ", arealist[i][0]);
//	}
//
//
//
//}
