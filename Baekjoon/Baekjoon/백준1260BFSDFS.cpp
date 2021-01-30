//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//
//using namespace std;
//
//int map[1001][1001];
//int check1[1001];
//int n, m;
//int v;
//
//int queue[1001];
//int front = 0, back = 0;
//
//void DFS(int vertex) {
//	printf("%d ", vertex);
//	check1[vertex] = 1;
//	//시작점 표시
//	for (int i = 0; i <= n; i++) {
//		if (map[vertex][i] == 1 && check1[i] == 0) {
//			check1[i] = 1;
//			DFS(i);
//		}
//	}
//}
//void BFS(int vertex) {
//	
//	while (front < back) {
//		int current = queue[++front];
//		
//
//		
//		printf("%d ", current); check1[current] = 1;
//			for (int i = 0; i <= n; i++) {
//				if (map[current][i] == 1 && check1[i] == 0) {
//					queue[++back] = i; check1[i] = 1;
//				}
//			}
//		
//	}
//}
//
//int main() {
//	
//	scanf("%d %d %d", &n, &m, &v);
//	int s, t;
//	for (int i = 0; i < m; i++) {
//		scanf("%d %d", &s, &t);
//		map[s][t] = 1;
//		map[t][s] = 1;
//	}
//	
//	
//	DFS(v);
//
//	for (int i = 0; i < 1001; i++) {
//		check1[i] = 0;
//	}
//	printf("\n");
//	queue[++back] = v;
//	
//	BFS(v);
//
//}