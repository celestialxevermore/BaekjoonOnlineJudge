//#include<iostream>
//#include<vector>
//#include<stdio.h>
//#define MAX 501
//using namespace std;
//
//
//int N, M;
//
//int map[2][MAX];
////0에는 나보다 작은애
////1에는 나보다 큰애
//vector<int>list[MAX];
//
//
//void DFS(int start) {
//
//
//	for (int i = 0; i < list[start].size(); i++) {
//
//		int bigger = list[start][i];
//		map[0][bigger]++;
//		
//		
//		map[1][start]++;
//		DFS(bigger);
//		map[1][start] += map[1][bigger];
//
//	}
//
//
//}
//
//
//int main() {
//
//
//	cin >> N >> M;
//
//
//	for (int i = 0; i < M; i++) {
//
//		int snode, tnode;
//		cin >> snode >> tnode;
//
//		list[snode].push_back(tnode);
//
//
//	}
//
//	for (int i = 1; i <= N; i++) {
//
//		DFS(i);
//
//
//	}
//
//
//
//}