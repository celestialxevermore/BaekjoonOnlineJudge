//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<queue>
//#define MAX 2001
//using namespace std;
//
//
//int N, M;
//int depth = 0;
//int flag = 0;
//vector<int> fr[MAX];
//bool visited[MAX];
//
//void DFS(int start) {
//
//	if (depth == 4) {
//		flag = 1;
//		return;
//	}
//
//	for (int i = 0; i < fr[start].size(); i++) {
//
//		if (!visited[fr[start][i]]) {
//			visited[fr[start][i]] = true;
//			depth++;
//			/*printf("DFS(%d)", fr[start][i]);
//			printf("current depth : %d\n\n", depth);*/
//			DFS(fr[start][i]);
//			visited[fr[start][i]] = false;
//			depth--;
//
//
//		}
//
//
//
//	}
//
//
//}
//
//
//
//int main() {
//
//
//	cin >> N >> M;
//
//	for (int i = 0; i < M; i++) {
//		int snode, tnode;
//
//		cin >> snode >> tnode;
//		fr[snode].push_back(tnode);
//		fr[tnode].push_back(snode);
//	}
//
//	for (int i = 0; i < N; i++) {
//		visited[i] = true;
//		//printf("DFS(%d)\n\n", i);
//		DFS(i);
//
//		visited[i] = false;
//
//		if (flag==1) {
//			
//			break;
//		}
//		
//
//	}
//
//	if (flag == 1) {
//		printf("1");
//	}
//	else {
//		printf("0");
//	}
//
//
//
//}
//
//
