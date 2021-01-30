//#include<iostream>
//#include<stdio.h>
//#include<vector>
//
//#include<queue>
//using namespace std;
//
//int ch[101];
//queue<int> Q;
//vector<int> vertex[101];
//int PathCost[101];
//
//int main() {
//	int N, M;
//	int SNode, TNode;
//	scanf("%d %d", &N, &M);
//
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d", &SNode, &TNode);
//		vertex[SNode].push_back(TNode); //방향그래프입니다.
//	}
//
//	ch[1] = 1;
//	Q.push(1);
//	PathCost[1] = 0;
//
//	//이제 시작.
//	while (!Q.empty()) {
//		int current = Q.front();
//		Q.pop();
//		for (int i = 0; i < vertex[current].size(); i++) {
//			if (ch[vertex[current][i]] == 0) {
//				ch[vertex[current][i]] = 1; //방문 처리를 해주고 
//				PathCost[vertex[current][i]] = PathCost[current] + ch[vertex[current][i]];
//				//그 다음 집어넣어 준다. 큐에
//				Q.push(vertex[current][i]);
//			}
//		}
//	}
//
//	for (int i = 2; i < N + 1; i++) {
//		printf("%d ", PathCost[i]);
//	}
//
//
//
//}
