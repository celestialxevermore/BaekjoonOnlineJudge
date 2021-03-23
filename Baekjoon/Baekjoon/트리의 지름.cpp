//#include<iostream>
//#include<stdio.h>
//#define MAX 10001
//#include<queue>
//#include<vector>
//using namespace std;
//
//
//typedef struct node {
//	int vex;
//	int cost;
//	node(int a, int b) {
//		vex = a;
//		cost = b;
//	}
//
//
//};
//
//int N;
//queue<node> Q;
//vector<pair<int, int> >map[MAX];
//
//bool visited[MAX][MAX];
//int dist[MAX][MAX];
//
//
//
//void BFS(int ind) {
//
//	int currentvex;
//	int currentcost;
//
//
//	while (!Q.empty()) {
//
//		currentvex = Q.front().vex;
//		currentcost = Q.front().cost;
//		Q.pop();
//		printf("currentvex : %d currentcost : %d \n\n", currentvex, currentcost);
//		for (int i = 0; i < map[currentvex].size(); i++) {
//
//			int nextvex = map[currentvex][i].first;
//			int nextcost = map[currentvex][i].second+currentcost;
//			printf("nextvex : %d nextcost : %d \n\n", nextvex, nextcost);
//			if (!visited[currentvex][nextvex]) {
//				visited[currentvex][nextvex] = true;
//				visited[nextvex][currentvex] = true;
//				
//
//				dist[currentvex][nextvex] = nextcost;
//				dist[nextvex][currentvex] = nextcost;
//				Q.push(node(nextvex, nextcost));
//
//
//
//			}
//
//
//
//
//		}
//
//
//	}
//
//
//
//
//}
//
//int main() {
//
//	cin >> N;
//
//
//	for (int i = 0; i < N - 1; i++) {
//
//		int snode, tnode, cost;
//		cin >> snode >> tnode >> cost;
//		map[snode].push_back(make_pair(tnode, cost));
//		map[tnode].push_back(make_pair(snode, cost));
//	}
//
//	for (int i = 1; i <= N; i++) {
//
//		visited[i][i] = true;
//		dist[i][i] = 0;
//		Q.push(node(i, 0));
//
//		BFS(i);
//
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				visited[i][j] = false;
//			}
//		}
//	}
//
//	/*for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			printf("%d ", dist[i][j]);
//		}
//		printf("\n");
//	}*/
//	int maxi = -1;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (maxi < dist[i][j]) {
//				maxi = dist[i][j];
//			}
//		}
//	}
//
//	printf("%d", maxi);
//}
//
//
//
//
