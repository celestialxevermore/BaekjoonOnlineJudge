//#include<iostream>
//#include<vector>
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//
//int N, K;
//int input[100];
//int res[101];
//int tmpcnt = 0;
//int main() {
//
//	cin >> N >> K;
//
//	for (int i = 0; i < N; i++) {
//		int a;
//		cin >> a;
//		input[i] = a;
//	}
//	
//	sort(input, input + N);
//	
//
//	/*for (int i = N - 1; i >= 0; i--) {
//		printf("%d ", input[i]);
//	}*/
//
//	
//	for (int i = N - 1; i >= 0; i--) {
//		int tmp = 0;
//		int cur = input[i];
//
//		for (int j = i-1; j >= 0; j--) {
//			int next = input[j];
//			
//			for (int k = j - 1; k >= 0; k--) {
//				int end = input[k];
//				tmp = cur + next + end;
//				res[tmpcnt++] = tmp;
//			}
//		}
//	}
//
//
//	printf("%d", res[K - 1]);
//
//
//}
