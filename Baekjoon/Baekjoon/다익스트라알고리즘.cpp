//#include<bits/stdc++.h>
//
//
//
//using namespace std;
//
//typedef struct Edge {
//	int vex;
//	int dis;
//	Edge(int a, int b) {
//		vex = a;
//		dis = b;
//	}
//
//	bool operator<(const Edge& b)const {
//		return dis > b.dis;
//	}
//};
//vector<pair<int, int>>map_[51];
//
//int N, M;
////N은 정점의 수, M은 간선의 수임 
//int distance_[21];
////거리는 10000으로 초기화
////1에서 시작하니까 distance[1]=0으로 합니다. 
//
//
////O(n)을 O(logn)으로 줄여줄..
//priority_queue<Edge>Q;
//
//void Dijk() {
//
//	
//	while (!Q.empty()) {
//
//		int currentnode = Q.top().vex;
//		int currentcost = Q.top().dis;
//		//printf("currentnode : %d currentcost : %d\n\n", currentnode, currentcost);
//		Q.pop();
//
//		for (int i = 0; i < map_[currentnode].size(); i++) {
//			int targetnode = map_[currentnode][i].first;
//			int targetcost = map_[currentnode][i].second+currentcost;
//			//printf("targetnode : %d targetcost : %d\n\n", targetnode, targetcost);
//			//if (distance_[currentnode] < currentcost) { continue; }
//			if (distance_[targetnode] > targetcost) {
//				distance_[targetnode] = targetcost;
//				Q.push(Edge(targetnode,targetcost));
//			}
//
//		}
//
//
//
//
//	}
//
//
//}
//
//
//int main() {
//	cin >> N >> M;
//
//
//	for (int i = 0; i < M; i++) {
//
//		int start, target, cost;
//		cin >> start >> target >> cost;
//		map_[start].push_back(make_pair(target, cost));
//	}
//	distance_[1] = 0;
//	for (int i = 0; i < 21; i++) {
//		distance_[i] = 10000;
//	}
//
//	Q.push(Edge(1, 0));
//	Dijk();
//
//	for (int i = 2; i <= N; i++) {
//		if (distance_[i] == 10000) {
//			printf("%d : %s\n", i, "impossible");
//		}
//		else {
//			printf("%d : %d\n", i, distance_[i]);
//		}
//	}
//
//
//
//}
//
//
