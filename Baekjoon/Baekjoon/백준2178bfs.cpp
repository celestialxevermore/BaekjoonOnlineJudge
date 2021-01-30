//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
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
//
//
//
//void BFS(int rstart, int cstart) {
//
//}
//
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
//		
//
//
//
//}