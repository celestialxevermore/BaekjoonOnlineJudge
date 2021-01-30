//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//
//using namespace std;
//int* input;
//int N, R;
//
//int check[21];
//int cnt = 0;
//
//void DFS(int Level) {
//	for (int i = 1; i < N + 1; i++) {
//		if (check[i] == 1) { cnt++; }
//	}
//	if (cnt == R) {
//		for (int i = 1; i < R + 1; i++) {
//			printf("%d ", input[i]);
//		}
//		return;
//	}
//	else {
//		check[Level] = 1;
//		DFS(Level + 1); cnt--;
//		check[Level] = 0;
//		DFS(Level+1);
//	}
//
//	
//}
//
//int main() {
//	
//	scanf("%d %d", &N, &R);
//	input = (int*)malloc(sizeof(int) * (N + 1)); input[0] = 0;
//	//check = (int*)malloc(sizeof(int) * (N + 1)); check[0] = 0;
//
//	for (int i = 1; i < N + 1; i++) {
//		scanf("%d", &input[i]);
//	}
//	DFS(1);
//
//}