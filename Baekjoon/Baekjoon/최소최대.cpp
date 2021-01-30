//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#define MAX 1000000
//using namespace std;
//
// int N[MAX];
//int isplus[MAX];
//
//int main() {
//	
//	int n;
//	scanf("%d", &n);
//	int index = 0;
//	for (int i = 0; i < n; i++) {
//		int input;
//		scanf("%d",&input);
//		if (input >= 0) { N[input] = 1; isplus[input] = 1; }
//		if (input < 0) { N[(-1)*input] = 1; isplus[(-1)*input] = -1; }
//
//	}
//	
//	//최소값 출력
//	int minuscount = 0;
//	int pluscount = 0;
//	for (int i = 0; i < MAX; i++) {
//
//		if (isplus[i] > 0) { pluscount++; }
//		if (isplus[i] < 0) { minuscount++; }
//		if (pluscount + minuscount == n) { break; }
//	}	
//	//모두 양수만 있는 경우
//	if (pluscount == n) {
//		int min;
//		int max;
//		//최소값
//		for (int i = 0; i < MAX; i++) {
//			if (N[i] == 1) {
//				min = i; break;
//			}
//		}
//		for (int i = MAX-1; i >= 0; i--) {
//			if (N[i] == 1) {
//				//printf("%d ", i);
//				max = i; break;
//			}
//		}
//
//		printf("%d %d\n", min, max);
//	}
//	//모두 음수만 있는 경우
//	if (minuscount == n) {
//		int min;
//		int max;
//
//		for (int i = 0; i < MAX; i++) {
//			if (N[i] == 1) {
//				max = (-1) * i; break;
//			}
//		}
//		for (int i = MAX; i > 0; i--) {
//			if (N[i] == 1) {
//				min = (-1) * i; break;
//			}
//		}
//
//		printf("%d %d\n", min, max);
//
//
//	}
//	//뭔가 음수와 양수가 섞여 있는 경우
//	else if(pluscount<n&&minuscount<n)
//	{
//	
//		int min;
//		int max;
//
//		for (int i = MAX; i > 0; i--) {
//			if (N[i] * isplus[i] < 0) { min = (-1) * i; break; }
//			
//		}
//		for (int i = MAX; i > 0; i--) {
//			if (N[i] * isplus[i] > 0) { max = i; break; }
//		}
//
//
//		printf("%d %d\n", min, max);
//	}
// }