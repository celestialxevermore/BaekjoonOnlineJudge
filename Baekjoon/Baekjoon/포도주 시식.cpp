//#include<iostream>
//#include<stdio.h>
//#define MAX 10001
//#include<algorithm>
//using namespace std;
//
//int N;
//int arr[MAX];
//int dp[MAX];
//
//
//int main() {
//
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		cin >> arr[i];
//	}
//
//	dp[1] = arr[1];
//	dp[2] = arr[1] + arr[2];
//
//	for (int i = 3; i <= N; i++) {
//		dp[i] = dp[i - 1];
//		if (dp[i] < dp[i - 2] + arr[i]) {
//			dp[i] = dp[i - 2] + arr[i];
//		}
//		if (dp[i] < dp[i - 3] + arr[i - 1] + arr[i]) {
//			dp[i] = dp[i - 3] + arr[i - 1] + arr[i];
//		}
//
//
//	}
//
//	cout << dp[N] << '\n';
//}