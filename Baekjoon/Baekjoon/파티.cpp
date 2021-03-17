#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#define N 1001
#define M 10001
#define MAX 987654321
using namespace std;

int n, m, target;

typedef struct node {
	int target;
	int cost;

	node(int a, int b) {
		target = a;
		cost = b;
	}

	bool operator<(const node& b)const {
		return cost > b.cost;
	}
};
priority_queue<node>Q;
int dist[N][N];
int ans[N];
vector<pair<int, int> >map[M];


void BFS() {

	int currenttarget;
	int currentcost;
	while (!Q.empty()) {

		currenttarget = Q.top().target;
		currentcost = Q.top().cost;
		Q.pop();
		printf("현재 시작 노드 : %d 비용 : %d \n\n", currenttarget, currentcost);
		printf("Go1!\n\n");
		//if (dist[currenttarget][currenttarget] < currentcost) {  continue; }
		
		for (int i = 0; i < map[currenttarget].size(); i++) {
			
			int nexttarget = map[currenttarget][i].first;
			int nextcost = map[currenttarget][i].second+currentcost;

			printf("타겟 노드 : %d 비용 : %d \n\n", nexttarget, nextcost);
			if (dist[currenttarget][nexttarget] > nextcost) {
				printf("%d > %d 이므로 갱신을 합니다. \n\n", dist[currenttarget][nexttarget], nextcost);
				dist[currenttarget][nexttarget] = nextcost;
				Q.push(node(nexttarget, nextcost));
			}






		}


	}



}
int main() {

	scanf("%d %d %d", &n, &m, &target);
	
	for (int i = 0; i < m; i++) {
		int snode=0, tnode=0, cost=0;
		scanf("%d %d %d", &snode, &tnode, &cost);
		map[snode].push_back(make_pair(tnode, cost));
		
	}

	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) {
				dist[i][j] = 0;
			}
			else {
				dist[i][j] = MAX;
			}

		}
	}


	for (int i = 1; i <= n; i++) {
		printf("<<<start : %d time >>> \n\n", i);
		Q.push(node(i, 0));
		
		BFS();
		if (Q.empty()) { printf("비었습니다!\n\n"); }
	}

	for (int i = 1; i <= n; i++) {
		ans[i] = dist[i][target] + dist[target][i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", dist[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");
	for (int i = 1; i <= n; i++) {
		printf("%d ", ans[i]);
	}





}