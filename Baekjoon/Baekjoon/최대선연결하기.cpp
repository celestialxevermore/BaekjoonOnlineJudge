//#include<stdio.h>
//#include<vector>
//#include<iostream>
//using namespace std;
//
//int dy[101];
//int n;
//int arr[101];
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin >> n;
//
//	arr[0] = 0;
//	for (int i = 1; i < n + 1; i++) {
//		cin >> arr[i];
//	}
//	dy[1] = 1;
//	int ans = 0;
//	for (int i = 2; i < n + 1; i++) {
//		int max = 0;
//		//j바로 앞까지.
//		for (int j = i - 1; j > 0; j--) {
//			if (arr[j] < arr[i] && max < dy[j]) {
//				max = dy[j];
//			}
//		}
//		//for문이 다 돌고 i가 기준일 때 가장 큰 dy값이 정해짐
//		dy[i] = max + 1;
//		if (dy[i] > ans) {
//			ans = dy[i];
//		}
//	}
//
//	cout << ans;
//
//
//}