//#include<stdio.h>
//#include<stdlib.h>
//#include<algorithm>
//#include<vector>
//#include<queue>
//
//using namespace std;
//int n;
//
//int map[30][30];
//int visited[30][30];
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,-1,0,1 };
//
//int house_cnt[1000];
//int DangiNumber = 0;
//void DFS(int rstart, int cstart) {
//	int x, y;
//	for (int i = 0; i < 4; i++) {
//		x = rstart + dx[i];
//		y = cstart + dy[i];
//		if (x < 0 || y < 0 || x >= n || y >= n) { continue; }
//		if (map[x][y] == 1 && visited[x][y] == 0) {
//			//방문 표시 해주고
//			visited[x][y] = 1;
//			//하나 세주고
//			house_cnt[DangiNumber]++;
//			DFS(x, y);
//		}
//	}
//}
//
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%1d", &map[i][j]);
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (map[i][j] == 1 && visited[i][j]==0) {
//				visited[i][j] = 1;
//				house_cnt[DangiNumber]++;
//				DFS(i, j);
//				//DFS가 하나 끝났다는 말은 단지 하나가 완성되었음을 의미
//				DangiNumber++;
//			}
//		}
//	}
//	printf("%d \n", DangiNumber);
//	
//	sort(house_cnt, house_cnt + DangiNumber);
//
//
//	for (int i = 0; i < DangiNumber; i++) {
//		printf("%d \n", house_cnt[i]);
//	}
//
//
//
//
//}
