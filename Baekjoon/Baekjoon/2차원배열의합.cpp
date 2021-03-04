//#include<stdio.h>
//#include<iostream>
//
//using namespace std;
//
//int N, M;
//int map[301][301];
//
//
//
//int main() {
//	
//	scanf("%d %d", &N, &M);
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//	int cnt;
//
//	cin >> cnt;
//	for (int i = 0; i < cnt; i++) {
//		pair<int, int>start;
//		pair<int, int>end;
//		cin >> start.first >> start.second >> end.first >> end.second;
//		int ans = 0;
//
//		for (int i = start.first; i <= end.first; i++) {
//			for (int j = start.second; j <= end.second; j++) {
//				ans += map[i][j];
//			}
//		}
//		printf("%d\n", ans);
//	}
//
//
//
//}