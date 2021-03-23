//#include<stdio.h>
//#include<iostream>
//#include<queue>
//#include<vector>
//#define MAX 987654321
//#define N 1001
//#define M 100001
//using namespace std;
//
//int n, m;
//typedef struct node {
//	int target;
//	int cost;
//
//
//	node(int a, int b) {
//		target = a;
//		cost = b;
//
//	}
//
//	bool operator<(const node& b) const{
//		return cost > b.cost;
//	}
//};
//
//priority_queue<node>Q;
//vector<int>dist(N, MAX);
//vector<pair<int, int> > map[N];
//
//
//void BFS() {
//
//	while (!Q.empty()) {
//
//		int currenttarget = Q.top().target;
//		int currentcost = Q.top().cost;
//		Q.pop();
//
//
//		printf("현재 시작 정점 : %d 비용 : %d \n\n", currenttarget, currentcost);
//		if (currentcost > dist[currenttarget]) { continue; }
//		for (int i = 0; i < map[currenttarget].size(); i++) {
//
//			int nexttarget = map[currenttarget][i].first;
//			int nextcost = map[currenttarget][i].second+currentcost;
//			
//			if (dist[nexttarget] > nextcost) {
//
//				printf("현재 거리(%d)가 새로 들어온 거리(%d(%d+%d))보다 작으므로 갱신합니다. \n\n", dist[nexttarget], nextcost, map[currenttarget][i].second, currentcost);
//				dist[nexttarget] = nextcost;
//
//				//저절로 <연산자에 의해 cost가 제일 작은 값이 큐의 최상단으로 올라감.
//				Q.push(node(nexttarget, nextcost));
//			}
//
//		}
//	}
//
//
//
//}
//
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> n;
//	cin >> m;
//
//	for (int i = 1; i <= m; i++) {
//
//		int snode, tnode, cost;
//		cin >> snode >> tnode >> cost;
//		map[snode].push_back(make_pair(tnode, cost));
//	}
//
//	int snode, tnode;
//	cin >> snode >> tnode;
//
//
//
//	Q.push(node(snode, 0));
//	dist[snode] = 0;
//	BFS();
//
//
//
//	for (int i = 1; i <= n; i++) {
//		printf("%d ", dist[i]);
//	}
//	printf("\n");
//	for (int i = 1; i <= n; i++) {
//		if (i == tnode) {
//			printf("%d", dist[i]);
//		}
//	}
//
//}
