//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//int ch[30];
//int dis[30];
//int n, m;
//int main() {
//	vector<int> map[30];
//
//	queue<int> Q;
//
//	scanf("%d %d", &n, &m);
//	int a, b;
//	for (int i = 1; i <= m; i++) {
//		scanf("%d %d", &a, &b);
//		map[a].push_back(b);
//	}
//
//	Q.push(1);
//	ch[1] = 1;
//
//	while (!Q.empty()) {
//		int x = Q.front();
//		Q.pop();
//		for (int i = 0; i < map[x].size(); i++) {
//			if (ch[map[x][i]] == 0) {
//				ch[map[x][i]] = 1;
//				Q.push(map[x][i]);
//
//				//x까지 오는 최소값에 +1을 해주면 됨.
//				dis[map[x][i]] = dis[x] + 1;
//
//
//
//			}
//		}
//	}
//	for (int i = 2; i <= n; i++) {
//		printf("%d : %d \n", i, dis[i]);
//	}
//
//}