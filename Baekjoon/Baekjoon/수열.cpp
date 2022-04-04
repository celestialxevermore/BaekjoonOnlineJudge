//#include<iostream>
//#include<vector>
//#include<algorithm>
//#define MAX 100001
//using namespace std;
//
//int map[1000][MAX];
//int input[MAX];
//int N, K;
//
//int main() {
//
//	cin >> N >> K;
//
//	for (int i = 1; i <= N; i++) {
//		cin >> input[i];
//		map[1][i] = input[i];
//
//
//	}
//	
//
//
//
//	for (int window = 2; window <= K; window++) {
//
//		for (int cur = window; cur <= N; cur++) {
//
//			map[window][cur] = map[window - 1][cur] + input[cur-window+1];
//
//
//		}
//
//
//
//	}
//
//
//	int maxi = -100000;
//	for (int i = 1; i <= MAX; i++) {
//		maxi = max(maxi, map[K][i]);
//	}
//
//	cout << maxi;
//
//
//}