#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#define MAX 101
using namespace std;

vector<int> map[MAX];
bool visited[MAX];
int res[MAX];
int rescnt = 0;
int cost[MAX];
int minimum = 10000;

int N, M;


queue<int> Q;

void BFS(int start) {

	int current;

	while (!Q.empty()) {
		current = Q.front();
		Q.pop();
		//printf("current : %d\n\n", current);
		for (int i = 0; i < map[current].size(); i++) {
			if (visited[map[current][i]]) { continue; }
			if (!visited[map[current][i]]) {
				int next;
				next = map[current][i];
				//printf("next : %d\n\n", next);
				visited[next] = true;
				cost[next] = cost[current] + 1;
				Q.push(next);
			
			}
		}
	}
	int total = 0;
	for (int i = 1; i <= N; i++) {
		total += cost[i];
		//printf("%d ", cost[i]);
	}
	//printf("\n");
	res[++rescnt] = total;
	for (int i = 1; i <= N; i++) {
		visited[i] = false;
	}

}


int main() {

	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int snode, tnode;
		cin >> snode >> tnode;
		map[snode].push_back(tnode);
		map[tnode].push_back(snode);
	}
	for (int i = 1; i <= N; i++) {
		//printf("\n\n\n<<<start>>>\n\n\n");
		visited[i] = true;
		cost[i] = 0;
		Q.push(i);
		BFS(i);
	}
	

	for (int i = 1; i <= N; i++) {
		if (minimum > res[i]) {
			minimum = res[i];
		}
	}

	for (int i = 1; i <= N; i++) {
		if (minimum == res[i]) {
			printf("%d ", i);
			break;
		}
	}



}