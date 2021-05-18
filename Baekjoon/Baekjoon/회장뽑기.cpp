//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int n, a, b, score;
//
//	cin >> n;
//
//	vector<vector<int> > dis(n + 1, vector<int>(n + 1, 100));
//	vector<int>res(n + 1);
//
//
//	for (int i = 1; i <= n; i++) { dis[i][i] = 0; }
//
//	while (1) {
//		cin >> a >> b;
//
//		if (a == -1 && b == -1) { break; }
//		dis[a][b] = 1;
//		dis[b][a] = 1;
//
//		for (int k = 1; k <= n; k++) {
//			for (int i = 1; i <= n; i++) {
//				for (int j = 1; j <= n; j++) {
//					dis[i][j] = min(dis[i][k] + dis[k][j], dis[i][j]);
//				}
//			}
//		}
//	}
//
//	score = 100;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			res[i] = max(res[i], dis[i][j]);
//		}
//		score = min(res[i], score);
//
//	}
//	int cnt = 0;
//	for (int i = 1; i <= n; i++) {
//		if (res[i] == score) {
//			cnt++;
//		}
//	}
//	cout << score << " " << cnt << endl;
//	for (int i = 1; i <= n; i++) {
//		if (res[i] == score) {
//			cout << i << " ";
//		}
//	}
//
//
//}