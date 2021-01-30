//#include<stdio.h>
//#include<stdlib.h>
//#include<algorithm>
//#include<vector>
//#include<iostream>
//using namespace std;
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	int** map = (int**)malloc(sizeof(int*) * N);
//
//	for (int i = 0; i < N; i++) {
//		map[i] = (int*)malloc(sizeof(int) * N);
//	}
//
//	vector<int>front(N);
//	vector<int>right(N);
//
//	for (int i = 0; i < N; i++) {
//		cin >> front[i];
//	}
//	for (int i = 0; i < N; i++) {
//		cin >> right[i];
//	}
//
//	
//	for (int j = N-1; j>=0; j--) {
//		int block = 0;
//		for (int i = 0; i < N; i++) {
//			if (front[i] < right[j]) {
//				block = front[i]; map[N - j - 1][i] = block; continue;
//			}
//			else {
//				block = right[j]; map[N - j - 1][i] = block; continue;
//			}
//		}
//	}
//	printf("\n");
//	int ans = 0;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			ans += map[i][j];
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	printf("%d ", ans);
//
//
//}