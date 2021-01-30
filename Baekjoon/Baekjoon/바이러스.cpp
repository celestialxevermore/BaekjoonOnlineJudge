//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//#include<vector>
//#include<queue>
//using namespace std;
//
//int check[101];
//int map[101][101];
//
//
//int N;
//
//void DFS(int start) {
//
//	for (int i = 1; i < map[i].size(); i++) {
//		if (map[start][i] == 1 && check[start] == 0) {
//			check[start] = 1;
//			DFS(i);
//		}
//	}
//
//
//}
//
//
//int main() {
//	int vertex;
//	//간선 개수 	
//	cin >> N;
//	cin >> vertex;
//
//
//	int SNode, TNode;
//	for (int i = 0; i < vertex; i++) {
//		cin >> SNode >> TNode;
//		map[SNode][TNode] = 1;
//	}
//	check[1] = 1;
//	DFS(1);
//
//
//	for (int i = 0; i < N; i++) {
//		printf("%d ", check[i]);
//	}
//
//	return 0;
//}
//
//
