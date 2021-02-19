//#include<stdio.h>
//#include<vector>
//#include<iostream>
//#define MAX 16
//using namespace std;
//
//int N, R;
//
//int check[MAX];
//int input[MAX];
//int cnt = 0;
//
//
//void DFS(int start,int Level) {
//
//	if (Level == 3) {
//		for (int i = 0; i < MAX; i++) {
//			if (check[i] == 1) {
//				printf("%d ", i);
//				cnt++;
//			}
//		}
//		printf("\n");
//	}
//	else {
//		for (int i = 0; i < N; i++) {
//			
//			if (check[i] == 0) {
//				check[i] = 1;
//				Level++;
//				DFS(input[i], Level);
//				check[input[i]] = 0;
//			}
//
//
//
//		}
//
//
//
//
//	}
//	
//
//
//}
//int main() {
//
//	cin >> N >> R;
//	
//	for (int i = 0; i < N; i++) {
//		cin >> input[i];
//	}
//	
//	DFS(0, 0);
//
//
//
//
//}