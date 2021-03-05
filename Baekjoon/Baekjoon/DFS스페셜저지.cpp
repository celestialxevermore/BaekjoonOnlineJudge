//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<math.h>
//#include<algorithm>
//#define MAX 100001
//using namespace std;
//
//int N;
//vector<int>map[MAX];
//
//int flag = 0;
//int test[MAX];
//int ans[MAX];
//int anscnt = 0;
//bool visited[MAX];
//
//
//void DFS(int anscnt, int current) {
//
//	if (anscnt == N) {
//		printf("test : ");
//		for (int i = 0; i < N; i++) {
//			printf("%d ", test[i]);
//		}
//		printf("ans : ");
//		for (int i = 0; i < N; i++) {
//			printf("%d ", ans[i]);
//		}
//	}
//
//	for (int i = 0; i < map[current].size(); i++) {
//		if (!visited[map[current][i]]) {
//
//			visited[map[current][i]] = true;
//			ans[++anscnt] = map[current][i];
//			printf("DFS(%d,%d)\n", anscnt, map[current][i]);
//			DFS(anscnt, map[current][i]);
//			visited[map[current][i]] = false;
//		}
//	}
//	
//
//}
//
//int main() {
//	cin >> N;
//
//	for (int i = 0; i < N - 1; i++) {
//		int snode, tnode;
//		cin >> snode >> tnode;
//		map[snode].push_back(tnode);
//		map[tnode].push_back(snode);
//	}
//	for (int i = 0; i < N; i++) {
//		cin >> test[i];
//	}
//
//
//	visited[1] = true;
//	
//	ans[anscnt++] = 1;
//	
//	DFS(1,1);
//
//
//
//
//
//
//}