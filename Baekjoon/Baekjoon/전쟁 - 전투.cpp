//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<queue>
//#include<stdio.h>
//using namespace std;
//
//int N, M;
//char map[101][101];
//bool W[101][101];
//bool B[101][101];
//int wcnt = 1;
//int bcnt = 1;
//int Ww = 0;
//int Bb = 0;
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//
//
//
//void wDFS(pair<int, int>w) {
//
//
//	int curx = w.first;
//	int cury = w.second;
//
//	for (int i = 0; i < 4; i++) {
//		int nextx = curx + dx[i];
//		int nexty = cury + dy[i];
//
//
//		if (nextx >= 1 && nextx <= M && nexty >= 1 && nexty <= N && !W[nextx][nexty] && map[nextx][nexty] == 'W') {
//
//			W[nextx][nexty] = true;
//			wcnt++;
//			pair<int, int>next;
//			next.first = nextx;
//			next.second = nexty;
//			wDFS(next);
//
//
//
//		}
//
//
//	}
//
//
//
//}
//
//void bDFS(pair<int, int>b) {
//
//	int curx = b.first;
//	int cury = b.second;
//
//	for (int i = 0; i < 4; i++) {
//		int nextx = curx + dx[i];
//		int nexty = cury + dy[i];
//
//
//		if (nextx >= 1 && nextx <= M && nexty >= 1 && nexty <= N && !B[nextx][nexty] && map[nextx][nexty] == 'B') {
//
//			B[nextx][nexty] = true;
//			bcnt++;
//			pair<int, int>next;
//			next.first = nextx;
//			next.second = nexty;
//			bDFS(next);
//
//			
//
//
//		}
//
//
//	}
//	
//
//}
//
//
//
//
//
//int main() {
//	
//	cin >> N >> M;
//	
//	for (int i = 0; i < M; i++) {
//
//		string inputs = "";
//		cin >> inputs;
//
//		for (int j = 0; j < inputs.size(); j++) {
//
//			map[i + 1][j + 1] = inputs[j];
//		}
//
//	}
//
//
//
//	for (int i = 1; i <= M; i++) {
//		for (int j = 1; j <= N; j++) {
//
//			if (map[i][j] == 'W' && !W[i][j]) {
//				pair<int, int>w;
//				
//				w.first = i;
//				w.second = j;
//				W[i][j] = true;
//				wDFS(w);
//				//printf("current wcnt : %d", wcnt);
//				int res = wcnt * wcnt;
//				//printf("wres : %d \n", res);
//				Ww += res;
//				
//				//printf("current Ww : %d\n\n", Ww);
//			}
//			wcnt = 1;
//			if (map[i][j] == 'B' && !B[i][j]) {
//				pair<int, int>b;
//
//				b.first = i;
//				b.second = j;
//				B[i][j] = true;
//				bDFS(b);
//				//printf("curent bcnt %d:", bcnt);
//				int res = bcnt * bcnt;
//				//printf("res :%d \n", res);
//				Bb += res;
//
//				//printf("current Bb : %d\n\n", Bb);
//
//			}
//			bcnt = 1;
//		}
//	}
//
//	/*for (int i = 1; i <= M; i++) {
//		for (int j = 1; j <= N; j++) {
//
//
//			if (map[i][j] == 'B' && !B[i][j]) {
//				pair<int, int>b;
//
//				b.first = i;
//				b.second = j;
//				B[i][j] = true;
//				bDFS(b);
//				printf("curent bcnt %d:", bcnt);
//				int res = bcnt * bcnt;
//				printf("res :%d \n", res);
//				Bb += res;
//				
//				printf("current Bb : %d\n\n", Bb);
//
//			}
//			bcnt = 1;
//			
//		}
//	}*/
//
//
//	printf("%d %d", Ww, Bb);
//
//
//}
//
