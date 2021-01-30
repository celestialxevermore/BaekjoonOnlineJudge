//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//int n, m;
//
//queue<int> Queue;
//
//int arr[1001][1001];
//int check1[1001];
//int check2[1001];
//int start;
//
//void DFS(int vertex) {
//
//	check1[vertex] = 1;
//	printf("%d ", vertex);
//	for (int i = 1; i <= n; i++) {
//		if (arr[vertex][i] == 1 && check1[i] == 0) {
//			DFS(i);
//		}
//		
//	}
//	return;
//	
//}
//void BFS(int vertex) {
//	Queue.push(vertex);
//	int current = Queue.front();
//	check2[current] = 1;
//	while (!Queue.empty()) {
//		
//		Queue.pop();
//		printf("%d ", current);
//		
//		for (int i = 1; i <= n; i++) {
//			if (arr[current][i] == 1 && check2[i] == 0) {
//				//printf("%d ", i);
//				check2[i] = 1;
//				Queue.push(i);
//			}
//		}
//	}
//}
//
//
//
//int main() {
//	
//
//	scanf("%d %d %d",&n,&m,&start);
//	int SNode, TNode;
//
//	for (int i = 0; i < m; i++) {
//		scanf("%d %d", &SNode, &TNode);
//		arr[SNode][TNode] = 1;
//		arr[TNode][SNode] = 1;
//	}
//
//
//	/*DFS(start);
//	printf("\n");*/
//
//	
//	BFS(start);
//
//
//
// }