//#include<stdio.h>
//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//int main() {
//
//	int n;
//
//	cin >> n;
//
//	vector<int> arr(n + 1), dy(n+1);
//
//	int res = 0;
//
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//	}
//	dy[1] = 1;
//	int res = 0;
//
//
//	for (int i = 2; i <= n; i++) {
//		int max = 0;
//		for (int j = i - 1; j > 0; j--) {
//
//			if (arr[j] < arr[i] && max < arr[j]) {
//				max = arr[j];
//			}
//		}
//		dy[i] = max + 1;
//		if (dy[i] > res) { res = dy[i]; }
//
//	}
//	
//
//	cout << res;
//	return 0;
//
//
//
//}