//#include<stdio.h>
//#include<stack>
//#include<iostream>
//#include<algorithm>
//#define MAX 100000
//using namespace std;
//
//
//int K;
//stack<int>test;
//int input[MAX];
//int ans[MAX];
//int main() {
//
//	cin >> K;
//	for (int i = 0; i < K; i++) {
//		cin >> input[i];
//	}
//	for (int i = 0; i < K; i++) {
//
//		if (test.empty()) {
//			//printf("현재 모든 스택이 비어있습니다. \n\n");
//			test.push(input[i]);
//			//printf("현재 스택의 최상단 : %d \n\n", test.top());
//		}
//		else {
//			if (input[i] == 0) {
//				//printf("현재 새로 들어온 원소가 0이므로 스택의 최상단을 제거합니다. \n\n");
//				test.pop();
//				//printf("현재 스택의 최상단 : %d \n\n", test.top());
//			}
//			else {
//				test.push(input[i]);
//			}
//
//
//
//
//
//		}
//
//
//	}
//
//	int ans = 0;
//	while (!test.empty()) {
//		ans += test.top();
//		test.pop();
//	}
//	printf("%d", ans);
//
//
//
//}