//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//
//using namespace std;
//int n, m;
//int start;
//queue<int> Queue;
//vector<int> map[1001];
//int check1[1001];
//int check2[1001];
//
//
//void DFS(int vertex) {
//	//if(vertex==n){}
//	
//		for (int i = 0; i <= map[vertex].size(); i++) {
//			if (check1[map[vertex][i]] == 0) {
//				check1[map[vertex][i]] = 1;
//				printf("%d ", map[vertex][i]);
//				DFS(map[vertex][i]);
//			}
//			/*else if(check1[map[vertex][i]]==1) {
//				continue;
//			}*/
//
//		}
//	
//
//}
//
//
//void BFS(int vertex) {
//	
//	while (!Queue.empty()) {
//		int current = Queue.front();
//		printf("%d ", current); check2[current] = 1;
//		Queue.pop();
//		for (int i = 0; i < map[current].size(); i++) {
//			if (check2[map[current][i]] == 0) {
//				check2[map[current][i]] = 1;
//				Queue.push(map[current][i]);
//			}
//			else {
//				continue;
//			}
//			
//		}
//	}
//}
//
//
//
//int main() {
//
//
//
//	scanf("%d %d %d", &n, &m, &start);
//
//	int SNode, TNode;
//
//
//	for (int i = 1; i <= m; i++) {
//		scanf("%d %d", &SNode, &TNode);
//		map[SNode].push_back(TNode);
//		map[TNode].push_back(SNode);
//	}
//	for (int i = 1; i <= m; i++) {
//
//		sort(map[i].begin(), map[i].end());
//
//	}
//
//
//
//
//	check1[start] = 1;
//	//printf("%d ", start);
//	DFS(start);
//	printf("\n");
//	
//
//	Queue.push(start);
//	BFS(start);
//
//
//}