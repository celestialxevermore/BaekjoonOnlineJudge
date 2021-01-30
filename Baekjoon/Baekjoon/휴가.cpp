//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//
//using namespace std;
//
//
//
//int* T;
//int* P;
//int N;
//int Tindex = 0;
//int Total = 0;
//int totalarray[100];
//int cnt = 0;
//void DFS(int Tindex, int Total) {
//	if (Tindex + T[Tindex] > N) { totalarray[cnt++] = Total;  return; }
//		
//	else {
//		
//
//		DFS(Tindex + T[Tindex], Total + P[Tindex + T[Tindex]]);
//		
//	}
//
//
//}
//
//
//
//int main() {
//
//	scanf("%d", &N);
//
//	T = (int*)malloc(sizeof(int) * (N + 1));
//	P = (int*)malloc(sizeof(int) * (N + 1));
//
//	for (int i = 1; i < N+1; i++) {
//		scanf("%d %d", &T[i], &P[i]);
//	}
//
//	T[0] = 1;
//	P[0] = 0;
//
//
//	DFS(0, 0);
//	//DFS(1, 0);
//	int max = 0;
//	for (int i = 0; i < 100; i++) {
//		if (max < totalarray[i]) {
//			max = totalarray[i];
//		}
//	}
//
//	printf("%d", max);
//
//}