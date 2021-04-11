//#include<stdio.h>
//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//
//vector<long long int>dp(42000, 42000);
//int coin[11];
//int main() {
//	
//	int N, K;
//	dp[0] = 0;
//	cin >> N >> K;
//	for (int i = 1; i <= 10; i++) {
//		cin >> coin[i];
//	}
//
//
//	for (int i = 1; i <= N; i++) {
//		int cur = coin[i];
//		for (int j = cur; j <= K; j++) {
//			if (dp[j] > dp[j - cur] + 1) {
//				dp[j] = dp[j - cur] + 1;
//			}
//			else {
//				continue;
//			}
//		}
//	}
//	printf("%d", dp[K]);
//
//
//}