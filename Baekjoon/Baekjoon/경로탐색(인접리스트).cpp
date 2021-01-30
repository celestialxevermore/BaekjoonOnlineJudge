//#include<iostream>
//#include<vector>
//using namespace std;
//int ch[30];
//int cnt = 0;
//int n;
//
//vector<int> map[30];
//
//
//void DFS(int vertex) {
//	if (vertex == n) { cnt++; }
//	else {
//		for (int i = 0; i < map[vertex].size(); i++) {
//			if (ch[map[vertex][i]] == 0) {
//				ch[map[vertex][i]] = 1;
//				DFS(map[vertex][i]);
//				ch[map[vertex][i]] = 0;
//			}
//		}
//	}
//}
//
//
//
//int main() {
//	int m, a, b;
//
//	scanf("%d %d", &n, &m);
//
//	for (int i = 1; i <= m; i++) {
//		scanf("%d %d", &a, &b);
//		map[a].push_back[b];
//	}
//	ch[1] = 1; 
//	DFS(1);
//
//	printf("%d \n", cnt);
//
//
//}