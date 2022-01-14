//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//
//int N, M;
//
//long long int map[101][101];
//
//int main() {
//
//	cin >> N >> M;
//	for (int n = 1; n < 101; n++) {
//		map[n][n] = 1;
//		map[n][1] = n;
//	}
//
//	for (int n = 3; n <= N; n++) {
//		for (int m = 2; m <= M; m++) {
//			map[n][m] = map[n - 1][m] + map[n - 1][m - 1];
//		}
//	}
//
//
//	printf("%lld", map[N][M]);
//}