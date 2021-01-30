//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//#include<vector>
//using namespace std;
//
//int n, m;
//int check[1000];
//int start, target;
//int flag = 0;
//vector<int> fr[100000];
//
//
//void DFS(int vertex, int target) {
//	
//
//}
//
//int main() {
//
//
//	int SNode, TNode;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < m; i++) {
//		scanf("%d %d", &SNode, &TNode);
//		fr[SNode].push_back(TNode);
//		fr[TNode].push_back(SNode);
//	}
//
//
//	scanf("%d %d", &start, &target);
//
//	check[start] = 1;
//	DFS(start, target);
//
//
//	if (check[target] != 0) {
//		printf("YES");
//	}
//	else {
//		printf("1 \n");
//		printf("NO");
//	}
//
//
//}