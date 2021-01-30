//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//pair<int, int> Red;
//pair<int, int> Blue;
//pair<int, int> Hole;
//
//char map[10][10];
//char visited[10][10];
//int n, m;
//int Trial = 0;
//int dx[4] = { 0,1,0,-1 };
//int dy[4] = { 1,0,-1,0 };
//queue<pair <int, int> > Queue;
//
//void DFS(int Redx, int Redy) {
//	if (Redx == Hole.first && Redy == Hole.second) { return; }
//	
//	for (int i = 0; i < 4; i++) {
//		int x = Redx + dx[i];
//		int y = Redy + dy[i];
//		if (map[x][y] == '.') { DFS(x, y); }
//	}
//
//
//}
//
//
//
//int main() {
//
//
//	scanf("%d %d",&n, &m);
//	
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			map[i][j] = '0';
//			visited[i][j] = '0';
//		}
//	}
//	for(int i=0; i<n;i++){
//		scanf("%s", map[i]);
//	}
//	
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (map[i][j] == 'R') {
//				Red.first = i;
//				Red.second = j;
//			}
//			
//		}
//	}
//	printf("\n");
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (map[i][j] == 'B') {
//				Blue.first = i;
//				Blue.second = j;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (map[i][j] == 'O') {
//				Hole.first = i;
//				Hole.second = j;
//			}
//		}
//	}
//
//	DFS(Red.first, Red.second);
//	printf("µµÂø! \n");
//	printf("%d ", Trial);
//
//}
