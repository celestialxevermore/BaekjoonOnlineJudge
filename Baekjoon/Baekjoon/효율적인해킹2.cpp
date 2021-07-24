//#include<iostream>
//#include<vector>
//#include<algorithm>
//#define COM 10001
//using namespace std;
//
//int maxi = -1;
//
//int res[COM];
//int comcnt = 0;
//
//vector<int>computer[COM];
//bool visited[COM];
//
//int N, M;
//
//
//void DFS(int startcom, int cnt) {
//
//
//	for (int i = 0; i < computer[startcom].size(); i++) {
//
//		if (!visited[computer[startcom][i]]) {
//			visited[computer[startcom][i]] = true;
//			cnt = cnt + 1;
//			//printf("DFS(%d,%d)\n\n",computer[startcom][i],cnt);
//			DFS(computer[startcom][i], cnt);
//			visited[computer[startcom][i]] = false;
//			cnt = cnt - 1;
//		}
//
//	}
//	maxi = max(maxi, cnt);
//	
//}
//
//
//int main() {
//
//	cin >> N >> M;
//
//	for (int i = 0; i < M; i++) {
//		int Snode, Tnode;
//		cin >> Snode >> Tnode;
//		computer[Tnode].push_back(Snode);
//	}
//	/*for (int i = 1; i <= M; i++) {
//		printf("computer %d : ",i);
//		for (int j = 0; j < computer[i].size(); j++) {
//			printf("%d ", computer[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	for (int i = 1; i <= N; i++) {
//		
//		
//		DFS(i, 0);
//		
//		res[i] = maxi;
//		
//		maxi = -1;
//		
//	}
//
//	int maxx = -1;
//	for (int i = 1; i <= N; i++) {
//		if (maxx < res[i]) {
//			maxx = res[i];
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		if (maxx == res[i]) {
//			printf("%d ", i);
//		}
//	}
//
//	
//}