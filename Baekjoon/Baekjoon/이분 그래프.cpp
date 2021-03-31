//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#define MAX 20001
//using namespace std;
//
//
//vector<int>g[MAX];
//bool visited[MAX];
//int flag = 0;
//
//void DFS(int start) {
//
//	for (int i = 0; i < g[start].size(); i++) {
//		
//		//방문한 곳을 재방문하려고 하면 튕겨냄
//		if (visited[g[start][i]]) {
//			flag = 1;
//			printf("flag : %d\n\n", flag);
//			return;
//		}
//		if (!visited[g[start][i]]) {
//			visited[g[start][i]] = true;
//			printf("next DFS(%d)\n\n", g[start][i]);
//			DFS(g[start][i]);
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
//	int K;
//
//	cin >> K;
//
//	int start = 0;
//	while (start < K) {
//
//		int v, e;
//		cin >> v >> e;
//		for (int i = 1; i <= e; i++) {
//			int snode, tnode;
//			cin >> snode >> tnode;
//			g[snode].push_back(tnode);
//			//g[tnode].push_back(snode);
//		}
//		
//		for (int i = 1; i <= v; i++) {
//			
//			printf("start DFS(%d)\n\n",i);
//			DFS(i);
//			for (int j = 1; j <= v; j++) {
//				visited[j] = false;
//			}
//			
//		}
//		
//		if (flag == 1) {
//			printf("NO\n");
//		}
//		else {
//			printf("YES\n");
//		}
//		flag = 0;
//		for (int i = 1; i <= v; i++) {
//			visited[i] = false;
//		}
//		start++;
//	}
//
//	
//
//
//
//}