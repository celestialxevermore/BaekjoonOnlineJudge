//#include<iostream>
//#include<stdio.h>
//#define MAX 100001
//#include<vector>
//using namespace std;
//
//vector<pair<int, int>>list[MAX];
//bool visited[MAX];
//int V;
//
//
//
//int cost = 0;
//int dist[MAX];
//
//void DFS1(int start,int cost) {
//	
//	
//	for (int i = 0; i < list[start].size(); i++) {
//		int next = list[start][i].first;
//		int nextcost = list[start][i].second;
//		
//		if (!visited[next]) {
//		//	printf("next : %d nextcost : %d\n\n", next, nextcost);
//			visited[next] = true;
//			cost += nextcost;
//			dist[next] = cost;
//
//
//			//printf("cost : %d \n\n", cost);
//			DFS1(next, cost);
//			visited[next] = false;
//			cost -= nextcost;
//		}
//
//
//	}
//	
//
//
//}
//
//int main() {
//	cin >> V;
//
//
//	for (int i = 1; i <= V; i++) {
//
//		int snode=0, tnode=0, cost=0;
//		cin >> snode;
//		while (1) {
//			cin >> tnode;
//			if (tnode != -1) {
//				cin >> cost;
//				
//				list[snode].push_back(make_pair(tnode, cost));
//			}
//			else {
//				break;
//			}
//		}
//		
//		
//	}
//	int start = 1;
//	dist[start] = 0;
//	visited[start] = true;
//	DFS1(start,dist[start]);
//	
//
//
//	int maxi = -1;
//	int id = -1;
//	for (int i = 1; i <= V; i++) {
//		if (maxi < dist[i]) {
//			maxi = dist[i];
//		}
//	}
//	for (int i = 1; i <= V; i++) {
//		if (maxi == dist[i]) {
//			id = i;
//		}
//	}
//	start = id;
//	//printf("start : %d\n\n", start);
//	dist[start] = 0;
//
//	
//	for (int i = 1; i <= V; i++) {
//		visited[i] = false;
//	}
//	visited[start] = true;
//
//
//	//printf("DFS again\n\n");
//	//for (int i = 1; i <= V; i++) {
//	//	dist[i] = 0;
//	//	//printf("%d : %d ",i, dist[i]);
//	//}
//	//printf("\n\n");
//	//printf("start : %d dist[start] : %d \n\n", start, dist[start]);
//	DFS1(start, dist[start]);
//	maxi = -1;
//	for (int i = 1; i <= V; i++) {
//		if (maxi < dist[i]) {
//			maxi = dist[i];
//		}
//	}
//
//	printf("%d", maxi);
//
//}
//
//
//
