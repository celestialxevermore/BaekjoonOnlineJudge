//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<vector>
//
//
//using namespace std;
//
//int Q[101];
//int ch[101];
//vector<int> map[101];
//int front = 0, back = 0;
//
//int main() {
//
//	int SNode, TNode;
//	for (int i = 0; i < 6; i++) {
//		scanf("%d %d", &SNode, &TNode);
//		map[SNode].push_back(TNode);
//		map[TNode].push_back(SNode);
//	}
//
//	Q[++back] = 1;
//	ch[1] = 1;
//
//	while (front < back) {
//		int x = Q[++front]; //맨 앞에 있는 놈을 하나 건네줌
//		printf("%d ", x);
//		for (int i = 0; i < map[x].size(); i++) {
//			if (ch[map[x][i]] == 0) {
//				ch[map[x][i]] = 1;
//				Q[++back] = map[x][i];
//			}
//		}
//
//	}
//
//
//
//
//}