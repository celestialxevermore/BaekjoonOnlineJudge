//#include<stdio.h>
//#include<iostream>
//#define MAX 100001
//using namespace std;
//
//int N;
//int a[MAX];
//int dp[MAX];
//
//
//int main() {
//
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		cin >> a[i];
//	}
//	
//	dp[1] = a[1];
//	for (int i = 2; i <= N; i++) {
//		if (a[i] > dp[i - 1]) { 
//			if (dp[i - 1] > 0) {
//				dp[i] = a[i] + dp[i - 1];
//			}
//			else {
//				dp[i] = a[i];
//			}
//			 }
//		if (a[i] <= dp[i - 1]) { dp[i] = dp[i - 1] + a[i]; }
//	}
//	int max = -100000;
//	for (int i = 1; i <= N; i++) {
//		if (max < dp[i]) {
//			max = dp[i];
//		}
//	}
//	printf("%d ",max);
//
//}