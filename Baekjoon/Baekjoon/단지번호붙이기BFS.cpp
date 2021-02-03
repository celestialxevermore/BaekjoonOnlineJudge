//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<iostream>
//#include<queue>
//#include<algorithm>
//
//using namespace std;
//
//char chmap[26][26];
//int map[26][26];
//int N;
//bool visited[26][26];
//int dangicnt = 0;
//int Dangiarray[1000];
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//queue<pair<int, int>>Q;
//void BFS(pair<int, int> start) {
//	pair<int, int> current;
//
//	int housecnt = 0;
//	while (!Q.empty()) {
//		current.first = Q.front().first;
//		current.second = Q.front().second;
//		Q.pop();
//		housecnt++;
//		for (int i = 0; i < 4; i++) {
//			int x = current.first + dx[i];
//			int y = current.second + dy[i];
//
//			if (x < 0 || y < 0 || x >= N || y >= N) { continue; }
//			if (visited[x][y]) { continue; }
//			if (map[x][y] == 1 && !visited[x][y]) {
//				visited[x][y] = true;
//				
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				Q.push(next);
//			}
//
//
//		}
//		
//
//	}
//	Dangiarray[dangicnt++] = housecnt;
//
//
//
//}
//
//
//int main() {
//	
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		scanf("%s",chmap[i]);
//	}
//	
//
//
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			
//			map[i][j] = chmap[i][j]-48;
//		}
//	}
//	/*for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			printf("%d", map[i][j]);
//		}
//		printf("\n");
//	}*/
//
//
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (map[i][j] == 1 && !visited[i][j]) {
//				visited[i][j] = true;
//				pair<int, int>start;
//				start.first = i;
//				start.second = j;
//				Q.push(start);
//				BFS(start);
//
//
//			}
//		}
//	}
//	sort(Dangiarray, Dangiarray + dangicnt);
//	printf("%d\n", dangicnt);
//	for (int i = 0; i < dangicnt; i++) {
//		printf("%d\n", Dangiarray[i]);
//	}
//	
//
//
//
//
//}