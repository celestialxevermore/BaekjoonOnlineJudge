//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<math.h>
//#include<vector>
//
//using namespace std;
//
//
//
//
//
//int arrforL1[10];
//int arrforL2[10];
//int arrforR1[10];
//int arrforR2[10];
//void swap(int* a, int* b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int D(int x) {
//	int res = 2 * x;
//	if (res > 9999) {
//		int realres = res % 10000;
//		return realres;
//	}
//	else {
//		return res;
//	}
//}
//int S(int x) {
//	return x - 1;
//}
//
//int L(int x) {
//	int tmp1 = x;
//	int zaritsu = 0;
//	int result = 1;
//	while (tmp1 > 0) {
//		tmp1 / 10;
//		zaritsu++;
//		tmp1 = tmp1 / 10;
//	}
//	for (int i = 0; i < zaritsu; i++) {
//		arrforL1[i] = x % 10;
//		x = x / 10;
//	}//4 3 2 1이 각각 들어갑니다. 
//	int index = 0;
//	for (int i = zaritsu-1; i >=0; i--) {
//		arrforL2[index] = arrforL1[i];
//		index++;
//	
//	}
//	int joker = arrforL2[0];
//	for (int i = 1; i < zaritsu; i++) {
//		arrforL2[i - 1] = arrforL2[i];
//	}
//	arrforL2[zaritsu - 1] = joker;
//	printf("\n");
//
//
//	for (int i = 0; i < zaritsu-1; i++) {
//		if (arrforL2[i] == 0) {
//			continue;
//		}
//		else if(arrforL2[i]!=0){
//			result += arrforL2[i]*pow(10, zaritsu - i - 1);
//		}
//	}
//	result += joker - 1;
//	return result;
//}
//int R(int x) {
//	int tmp1 = x;
//	int zaritsu = 0;
//	int result = 1;
//	while (tmp1 > 0) {
//		tmp1 / 10;
//		zaritsu++;
//		tmp1 = tmp1 / 10;
//	}
//	for (int i = 0; i < zaritsu; i++) {
//		arrforR1[i] = x % 10;
//		x = x / 10;
//	}//4 3 2 1이 각각 들어갑니다. 
//
//	int index = 0;
//	for (int i = zaritsu - 1; i >= 0; i--) {
//		arrforR2[index] = arrforR1[i];
//		index++;
//	}
//	int joker = arrforR2[zaritsu - 1];
//	for (int i = zaritsu - 2; i >= 0; i--) {
//
//		arrforR2[i + 1] = arrforR2[i];
//	}
//	arrforR2[0] = joker;
//
//	for (int i = 0; i < zaritsu; i++) {
//		if (arrforR2[i] == 0) {
//			continue;
//		}
//		else if (arrforR2[i] != 0) {
//			result += arrforR2[i] * pow(10, zaritsu - i - 1);
//		}
//	}
//	result += -1;
//
//	return result;
//}
//int minimum= 1000;
//int gogo[4];
//void DFS(int count, int start, int target) {
//	if (start == target) { 
//		if (minimum > count) { minimum = count;return;}
//	}
//	else {
//		int current;
//		current = D(start); count++; 
//		DFS(count, current, target);
//
//	}
//
//
//}
//
//
//int main() {
//	
//	int A;
//	int B;
//	scanf("%d %d", &A, &B);
//
//	DFS(0, A, B);
//
//}