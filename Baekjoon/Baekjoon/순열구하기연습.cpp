//#include<iostream>
//#include<stdio.h>
//#include<vector>
//
//using namespace std;
//
//int n, r;
//
//int* input;
//int* check;
//
//vector<int> map[1001];
//
//void DFS(int Level) {
//	if (Level == n + 1) {
//		int cnt = 0;
//		for (int i = 1; i < n + 1; i++) {
//			if (check[i] == 1) { cnt++; }
//		}
//		부분집합의 원소의 개수가 3인 경우만 추림
//
//		if (cnt == r) {
//			for (int i = 1; i < n + 1; i++) {
//				if (check[i] == 1) {
//					printf("%d ", input[i]);
//				}
//				
//			}
//			printf("\n");
//		}
//		/*if (cnt == r) {
//			for (int i = 1; i < n + 1; i++) {
//				if (check[i] == 1) {
//					map[check[i]].push_back(input[i]);
//				}
//			}
//		}*/
//	}
//	else {
//		check[Level] = 1;
//		DFS(Level + 1);
//		check[Level] = 0;
//		DFS(Level + 1);
//	}
//}
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
//	DFS(1);
//
//
//}
//
