//#include<iostream>
//#include<algorithm>
//#include<stdio.h>
//#include<vector>
//
//using namespace std;
//
//
//
//int arr[1001];
//int ans[1001];
////vector<int>arr(1001);
//
//int total = 0;
//
//int main() {
//	int N;
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		cin >> arr[i];
//	}
//	
//
//	sort(arr,arr+N+1);
//	
//	
//	
//	
//	ans[1] = arr[1];
//	for (int i = 1; i <= N; i++) {
//
//		ans[i] = arr[i] + ans[i - 1];
//		total += ans[i];
//
//	}
//
//
//
//
//	printf("%d", total);
//
//
//}