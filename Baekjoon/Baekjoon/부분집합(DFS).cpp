//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//
//using namespace std;
//int N;
//int check[51];
//
//void DFS(int L) {
//	//일단 종료지점 먼저 설정합니다. 
//	int sum = 0;
//	if (L == N + 1) {
//		for (int i = 1; i <= N; i++) {
//			if (check[i] == 1) {
//				sum+=i;
//			}
//		}
//		printf("%d ", sum);
//		printf("\n");
//	}
//	else {
//		//먼저 부분집합을 가지고 있는 경우
//		check[L] = 1;
//		DFS(L + 1); //이게 끝까지 내려갈 예정임!!
//		
//		
//		//부분집합을 가지고 있지 않은 경우 
//		check[L] = 0;
//		DFS(L + 1);
//
//	}
//
//
//}
//
//
//int main() {
//
//
//
//
//	scanf("%d", &N);
//	DFS(1);
//
//}
//
//
