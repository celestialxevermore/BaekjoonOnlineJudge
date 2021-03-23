//#include<iostream>
//#include<queue>
//#include<vector>
//#include<algorithm>
//#define MAX 1000000
//#define N 801
//#define E 200001
//using namespace std;
//
//
//typedef struct node {
//	int vex;
//	int cost;
//
//
//	node(int a, int b) {
//		vex = a;
//		cost = b;
//	}
//
//	bool operator<(const node& b) const{
//		return cost > b.cost;
//	}
//};
//
//priority_queue<node> Q;
//
//
//int dist[N][N];
//bool check[N];
//vector<pair<int, int>> map[E];
//
//int v1, v2;
//int n, e;
//int mini = MAX;
//int flag = 0;
//void BFS(int ind) {
//	ios::sync_with_stdio(false);
//	int currentvex;
//	int currentcost;
//
//	while (!Q.empty()) {
//
//
//		//여기가 전부 순회한 경우에 해당함
//	/*	if (check[Q.top().vex] && check[n1] && check[n2]) {
//			if (mini > Q.top().cost) {
//				mini = Q.top().cost;
//			}
//		}*/
//
//		currentvex = Q.top().vex;
//		currentcost = Q.top().cost;
//		Q.pop();
//		//if (dist[ind][currentvex] < currentcost) { continue; }
//		for (int i = 0; i < map[currentvex].size(); i++) {
//
//			int nextvex = map[currentvex][i].first;
//			int nextcost = map[currentvex][i].second+currentcost;
//
//			if (dist[ind][nextvex] > nextcost) {
//
//				dist[ind][nextvex] = nextcost;
//				//check[nextvex] = true;
//				Q.push(node(nextvex, nextcost));
//
//			}
//
//		}
//
//
//	}
//
//
//
//
//
//}
//
//
//
//
//
//int main() {
//
//	
//	cin >> n >> e;
//
//
//	for (int i = 1; i <= e; i++) {
//		int snode, tnode, cost;
//		cin >> snode >> tnode >> cost;
//		map[snode].push_back(make_pair(tnode, cost));
//		map[tnode].push_back(make_pair(snode, cost));
//	}
//
//	cin >> v1 >> v2;
//
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (i == j) {
//				dist[i][j] = 0;
//			}
//			else {
//				dist[i][j] = MAX;
//			}
//		}
//	}
//
//	
//	for (int i = 1; i <= n; i++) {
//		dist[i][i] = 0;
//		Q.push(node(i, 0));
//		BFS(i);
//	}
//	
//	/*for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			printf("%d ", dist[i][j]);
//		}
//		printf("\n");
//	}*/
//
//
//
//	int ans1 = min(dist[1][v1],dist[1][v2]);
//	int ans2 = min(dist[v1][v2],dist[v2][v1]);
//	int ans3 = min(dist[v1][n], dist[v2][n]);
//
//
//	int ans = ans1 + ans2 + ans3;
//
//
//	if (ans > MAX) {
//		printf("-1");
//	}
//	else {
//		printf("%d", ans);
//	}
//
//
//
//
//}
//
