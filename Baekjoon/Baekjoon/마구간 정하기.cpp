//#include<stdio.h>
//#include<stdlib.h>
//#include<vector>
//#define _CRT_SECURE_NO_WARNINGS
//#include<algorithm>
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	
//	int N; //마굿간 숫자
//	int C; // 말 마리 수
//	int input[200001] = { 0, };
//	scanf("%d %d", &N, &C);
//
//	//C만큼 배열 위에 1을 표하게 될 것
//
//	int magutgan[20001] = { 0, };
//	int start = 0;
//	int end = 0;
//	//input안에 1,2,8,4,9
//	//최대가 되도록 하면 되는 거니까 
//	//가장 작을 때 위치와 가장 클 때 위치를 일단 정한다. 
//
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &input[i]);
//	}
//
//	for (int i = 0; i < 201; i++) {
//		if (input[i] != 0) 
//		{
//			magutgan[input[i]]++;
//		}
//	}
//	printf("\n");
//	
//	for (int i = 0; i < 201; i++) {
//		if (magutgan[i] != 0) {
//			start = i;
//			break;
//		}
//	}
//	for (int i = 201; i > 0; i--) {
//		if (magutgan[i] != 0) {
//			end = i; break;
//		}
//		
//	}
//	//start와 end를 각각 성공적으로 구하였다. 
//	//가장 가까운 두 말의 최대 거리
//	int distance=0;
//	int maxdistance = 0;
//
//	//양 끝만 주어지는 경우는 그 사이가 최대가 되도록 합니다. 
//	if (C == 2) {
//		maxdistance = end - start; printf("%d", maxdistance);
//	}
//	else {
//	
//		sort(input, input + N);
//
//		for (int i = 1; i < N - 1; i++) {
//			
//			if (input[i] - start > end - input[i]) {
//				distance = input[i] - start;
//				if (distance > maxdistance) { maxdistance = distance; }
//			}
//			if (input[i] - start <= end - input[i]) {
//				distance = end - input[i];
//				if (distance > maxdistance) { maxdistance = distance; }
//			}
//		}
//	}
//	printf("\n");
//
//
//	printf("%d", maxdistance);
//
//}