//#include<iostream>
//#include<stdio.h>
//#include<queue>
//using namespace std;
//int N, K;
//
//int ch[1001];
//
//
//int main() {
//	scanf("%d %d", &N, &K);
//	int cnt = 0;
//	int pos;
//
//	queue<int> Q;
//	
//	for (int i = 1; i <= N; i++) {
//		Q.push(i);
//	}
//	while (!Q.empty()) {
//		for (int i = 1; i < K; i++) {
//			Q.push(Q.front());
//			Q.pop();
//		}
//		Q.pop();
//		if (Q.size() == 1) {
//			printf("%d \n", Q.front());
//			Q.pop();
//		}
//	}
//	
//
//
//}