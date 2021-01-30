//#include<stdio.h>
//#include<stdlib.h>
//#include<vector>
//#include<queue>
//
//using namespace std;
//int n, m;
//int** map;
//int** visitedmap;
//int visitedcount = 0;
//int cnt[100];
//int index = 0;
//int min = 10000;
//
//void DFS(int rstart, int cstart) {
//	if (rstart < 0 || rstart >= n || cstart >= m || cstart < 0) { return; }
//	
//	if (rstart == n - 1 && cstart == m - 1) {
//		cnt[index++] = visitedcount;
//		visitedcount--;
//		return;
//	}
//	else {
//		//위쪽
//	
//		if (rstart-1>=0 && map[rstart - 1][cstart] == 1 && visitedmap[rstart - 1][cstart] == 0) {
//			visitedcount++;
//			visitedmap[rstart - 1][cstart] = 1;
//			DFS(rstart - 1, cstart);
//			//되돌아가는 경우 처리
//			visitedcount--; 
//			visitedmap[rstart - 1][cstart] = 0;
//		}
//		//아래쪽
//		if (rstart+1<=n-1&&map[rstart + 1][cstart] == 1 && visitedmap[rstart + 1][cstart] == 0) {
//			visitedcount++;
//			visitedmap[rstart + 1][cstart] = 1;
//			DFS(rstart + 1, cstart);
//			//되돌아가는 경우 처리
//			visitedcount--;
//			visitedmap[rstart + 1][cstart] = 0;
//		}
//		//오른쪽
//		if (cstart+1<=m&&map[rstart][cstart+1] == 1 && visitedmap[rstart][cstart+1] == 0) {
//			visitedcount++;
//			visitedmap[rstart][cstart+1] = 1;
//			DFS(rstart, cstart+1);
//			//되돌아가는 경우 처리
//			visitedcount--;
//			visitedmap[rstart][cstart+1] = 0;
//		}
//		//왼쪽
//		if (cstart-1>=0&&map[rstart][cstart -1] == 1 && visitedmap[rstart][cstart - 1] == 0) {
//			visitedcount++;
//			visitedmap[rstart][cstart - 1] = 1;
//			DFS(rstart, cstart - 1);
//			//되돌아가는 경우 처리
//			visitedcount--;
//			visitedmap[rstart][cstart - 1] = 0;
//		}
//		//else { return; }
//
//	}
//}
//
//
//
//int main() {
//	scanf("%d %d", &n, &m);
//
//	map = (int**)malloc(sizeof(int*) * n);
//	for (int i = 0; i < n; i++) {
//		map[i] = (int*)malloc(sizeof(int) * m);
//	}
//
//	visitedmap = (int**)malloc(sizeof(int*) * n);
//	for (int i = 0; i < n; i++) {
//		visitedmap[i] = (int*)malloc(sizeof(int) * m);
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			visitedmap[i][j] = 0;
//		}
//	}
//
//
//	char** input;
//	input = (char**)malloc(sizeof(char*) * n);
//	
//	for (int i = 0; i < n; i++) {
//		input[i] = (char*)malloc(sizeof(char) * m);
//		scanf("%s", input[i]);
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			map[i][j] = input[i][j] - '0';
//		}
//	}
//	printf("\n");
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < m; j++) {
//	//		printf("%d", map[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	visitedmap[0][0] = 1;
//	map[0][0] = 1;
//	DFS(0, 0);
//
//	for (int i = 0; i < index; i++) {
//		printf("%d ", cnt[i]);
//	}
//
//
//
//}