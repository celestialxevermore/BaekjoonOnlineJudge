//#include<iostream>
//#include<stdio.h>
//#include<queue>
//#include<vector>
//
//using namespace std;
//
//
//vector<int> Q[101];
//queue<int> QQ;
//int Queue[101];
//int check[101];
//int front = 0, back = 0;
//
//
//int main() {
//
//	//인접리스트를 활용한 이진트리 구현
//
//	int SNode, TNode;
//	int vertex, NodeCount;
//
//	scanf("%d %d", &NodeCount, &vertex);
//
//	for (int i = 0; i < vertex; i++) {
//		scanf("%d %d", &SNode, &TNode);
//		//무방향 그래프이니까.
//		Q[SNode].push_back(TNode);
//		Q[TNode].push_back(SNode);
//	}
//
//	check[1] = 1;
//	
//	Queue[1] = 1;
//	QQ.push(1);
//	while (!QQ.empty()) {
//		int x = QQ.front();
//		printf("%d ", x);
//		QQ.pop();
//		for (int i = 0; i < Q[x].size(); i++) {
//			//방문한 적이 없다면
//			if (check[Q[x][i]] == 0) {
//				check[Q[x][i]] = 1;
//				QQ.push(Q[x][i]);
//			}
//		}
//
//	}
//
//
//
//
//}