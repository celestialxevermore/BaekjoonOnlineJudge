//#include<stdio.h>
//#include<iostream>
//#define MAX 5001
//using namespace std;
//
//int N;
//
//int sugar[MAX];
//
//int main() {
//	cin >> N;
//
//	for (int i = 3; i < MAX; i++) {
//		
//		if (i % 3 == 0) {
//			sugar[i] = i / 3;
//			sugar[i + 5] = sugar[i] + 1;
//		}
//		
//	}
//	for (int i = 3; i < MAX; i++) {
//		if (i % 5 == 0) {
//			sugar[i] = i / 5;
//			sugar[i + 3] = sugar[i] + 1;
//		}
//	}
//	
//
//
//	for (int i = 10; i <= N; i++) {
//		if (i % 3 != 0 && i % 5 != 0&&i!=0) {
//			sugar[i + 3] = sugar[i]+1;
//		}
//		if (sugar[i] == i / 3) {
//			sugar[i] = sugar[i - 3]+1;
//		}
//	}
//
//	/*for (int i = 3; i <= N; i++) {
//		printf("%d : %d\n", i, sugar[i]);
//	}*/
//
//
//	if (sugar[N] == 0) {
//		printf("-1");
//	}
//	else {
//		printf("%d ", sugar[N]);
//	}
//
//
//}