//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//
//using namespace std;
//
//
//
//int n, r;
//int* input;
//int* check;
//int res[20];
//void DFS(int Level) {
//	if (Level == r + 1) {
//		for (int i = 1; i < n + 1; i++) {
//			if (check[i] == 1) {
//				printf("%d ", res[i]);
//			}
//		}
//		printf("\n");
//	}
//	else {
//		for (int i = 1; i < n + 1; i++) {
//			if (check[i] == 0) {
//				res[Level] = input[i];
//				check[i] = 1;
//				DFS(i);
//				check[i] = 0;
//			}
//		}
//	}
//}
//
//
//
//int main() {
//	scanf("%d %d", &n, &r);
//
//	input = (int*)malloc(sizeof(int) * (n + 1));
//	check = (int*)malloc(sizeof(int) * (n + 1));
//	input[0] = 0;
//	check[0] = 0;
//	for (int i = 1; i < n + 1; i++) {
//		scanf("%d", &input[i]);
//	}
//
//
//
//
//
//
//
//
//}