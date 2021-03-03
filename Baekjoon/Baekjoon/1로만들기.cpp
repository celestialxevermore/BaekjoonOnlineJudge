//#include<stdio.h>
//#include<iostream>
//#define MAX 1000001
//using namespace std;
//
//int N;
//int dp[MAX];
//
//
//int min(int a, int b) {
//	if (a > b) { return b; }
//	else { return a; }
//}
//int main() {
//	cin >> N;
//	dp[1] = 0;
//	dp[2] = 1;
//	dp[3] = 1;
//
//
//	for (int i = 4; i < MAX; i++) {
//		if (i % 2 == 0 && i % 3 != 0) {
//			dp[i] = min(dp[i - 1], dp[i / 2]) + 1;
//		}
//		if (i % 2 != 0 && i % 3 == 0) {
//			dp[i] = min(dp[i - 1], dp[i / 3]) + 1;
//		}
//		if (i%6==0) {
//			dp[i] = min(dp[i/3],dp[i/2])+1;
//		}
//		if (i % 2 != 0 && i % 3 != 0) {
//			dp[i] = dp[i - 1] + 1;
//		}
//	}
//	/*for (int i = 1; i <= N; i++) {
//		printf("%d : %d \n", i, dp[i]);
//	}*/
//	printf("%d ", dp[N]);
//
//
//
//}