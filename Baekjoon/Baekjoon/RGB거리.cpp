//#include<stdio.h>
//#include<iostream>
//#define MAX 1001
//
//using namespace std;
//int N;
//int minimum = 10000000;
//int map[MAX][4];
//int res[MAX][4];
//int result = 0;
//
//int min(int a, int b) {
//	if (a > b) {
//		return b;
//	}
//	else { return a; }
//}
//
//void DP(int Level, int start) {
//	if (Level ==  N ) {
//		return;
//	}
//	else {
//		int currentindex = 0;
//		
//		int first=1, second = 2, third = 3;
//		int nextmin = 0;
//		for (int i = 1; i < 4; i++) {
//			if (map[Level][i] == start) {
//				 currentindex = i;
//				// printf("현재 인덱스는 %d 입니다. \n\n", currentindex);
//			}
//		}
//
//		if (currentindex == 1) {
//
//			nextmin = min(map[Level + 1][second], map[Level + 1][third]);
//			//printf("최솟값 : %d \n\n", nextmin);
//			if (nextmin == map[Level+1][second]) {
//				res[Level + 1][second] = nextmin + res[Level][currentindex];
//				//printf("현재 합 : %d \n\n", res[Level + 1][second]);
//				DP(Level + 1, nextmin);
//
//			}
//			if (nextmin == map[Level + 1][third]) {
//				res[Level + 1][third] = nextmin + res[Level][currentindex];
//				//printf("현재 합 : %d \n\n", res[Level + 1][third]);
//				DP(Level + 1, nextmin);
//			}
//		}
//		if (currentindex == 2) {
//
//			nextmin = min(map[Level + 1][first], map[Level + 1][third]);
//			//printf("최솟값 : %d \n\n", nextmin);
//			if (nextmin == map[Level+1][first]) {
//				res[Level + 1][first] = nextmin + res[Level][currentindex];
//				//printf("현재 합 : %d \n\n", res[Level + 1][first]);
//				DP(Level + 1, nextmin);
//			}
//			if (nextmin == map[Level + 1][third]) {
//				res[Level + 1][third] = nextmin + res[Level][currentindex];
//				//printf("현재 합 : %d \n\n", res[Level + 1][third]);
//				DP(Level + 1, nextmin);
//			}
//			
//		}
//		if (currentindex == 3) {
//
//			nextmin = min(map[Level + 1][first], map[Level + 1][second]);
//			//printf("최솟값 : %d \n\n", nextmin);
//			if (nextmin == map[Level + 1][first]) {
//				res[Level + 1][first] = nextmin + res[Level][currentindex];
//				//printf("현재 합 : %d \n\n", res[Level + 1][first]);
//				DP(Level + 1, nextmin);
//			}
//			if (nextmin == map[Level+1][second]) {
//				res[Level + 1][second] = nextmin + res[Level][currentindex];
//				//printf("현재 합 : %d \n\n", res[Level + 1][second]);
//				DP(Level + 1, nextmin);
//			}
//		}
//	}
//
//}
//
//
//int main() {
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j < 4; j++) {
//			cin >> map[i][j];
//		}
//
//	}
//	
//	for (int i = 1; i < 4; i++) {
//		res[1][i] = map[1][i];
//	}
//
//	for (int i = 1; i < 4; i++) {
//		//printf("<<현재 레벨 : %d 시작점 : %d 에서 탐색을 시작합니다. >>\n\n", 1, map[1][i]);
//		DP(1, map[1][i]);
//		
//	}
//	
//	for (int i = 1; i < 4; i++) {
//		if (res[N][i] != 0 && minimum > res[N][i]) {
//			minimum = res[N][i];
//		}
//	}
//
//	printf("%d ", minimum);
//
//
//
//}
