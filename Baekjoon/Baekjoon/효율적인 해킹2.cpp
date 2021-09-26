//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//#define MAX 100001
//using namespace std;
//
//int N, M;
//
//vector<int> map[MAX];
//bool visited[MAX];
//int dist[MAX];
//int cnt = 1;
//
//
//void DFS(int start) {
//
//	for (int i = 0; i < map[start].size(); i++) {
//
//		if (dist[map[start][i]] != 1) {
//
//		}
//	}
//
//
//}
//
//
//int main() {
//
//
//	cin >> N >> M;
//
//	for (int i = 0; i < M; i++) {
//
//		int a, b;
//		cin >> a >> b;
//		map[b].push_back(a);
//	}
//
//	/*for (int i = 1; i <= N; i++) {
//		printf("%d : ", i);
//		for (int j = 0; j < map[i].size(); j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}*/
//	
//	for (int i = 1; i <= N; i++) {
//		
//		int start = i;
//		
//		if (dist[start] != 1) {
//			DFS(start);
//		}
//
//
//	}
//
//
//
//}