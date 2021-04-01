//#include<iostream>
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//
//int N;
//int map[501][501];
//int dp[501][501];
//
//int main() {
//
//
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= i; j++) {
//			cin >> map[i][j];
//		}
//	}
//	dp[1][1] = map[1][1];
//	dp[2][1] = map[2][1]+dp[1][1];
//	dp[2][2] = map[2][2]+dp[1][1];
//	for (int i = 3; i <= N; i++) {
//		dp[i][1] = dp[i - 1][1] + map[i][1];
//		dp[i][i] = dp[i - 1][i - 1] + map[i][i];
//	}
//	/*for (int i = 3; i <= N; i++) {
//		printf("dp[%d][1] : %d\n\n", i,dp[i][1]);
//		
//	}
//	for (int i = 3; i <= N; i++) {
//		
//		printf("dp[%d][%d] : %d\n\n", i, i, dp[i][i]);
//	}*/
//	for (int i = 2; i <= N; i++) {
//		
//		for (int j = 1; j < i; j++) {
//			dp[i + 1][j+1] = max(dp[i][j], dp[i][j+1])+map[i+1][j+1];
//		}
//	}
//	int maxi = -1;
//	for (int i = 1; i <= N; i++) {
//		if (maxi < dp[N][i]) {
//			maxi = dp[N][i];
//		}
//	}
//	printf("%d", maxi);
//}