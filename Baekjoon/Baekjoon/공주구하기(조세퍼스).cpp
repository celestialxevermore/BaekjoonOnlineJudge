//#include<stdio.h>
//#include<stdlib.h>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//int main() {
//
//	int N, K;
//	scanf("%d %d", &N, &K);
//	int* prince = (int*)malloc(sizeof(int) * N+1);
//	for (int i = 0; i < N + 1; i++) {
//		prince[i] = 1;
//	}
//	for (int i = 0; i < N + 1; i++) { printf("%d ", prince[i]); }
//	int check[2] = { 0,N };
//
//	printf("\n");
//	for (int i = 0; i < 2; i++) { printf("%d ", check[i]); }
//	int start = 0;
//	int end = K;
//	
//	
//	while (check[1] != 1) {
//		int pos = 1; //3주기로 돌기 위해 설정 
//		while ((pos % 3)!= 0) { //1 2 3(0) 1 2 3(0)이렇게 계속 돌기
//		
//			if (((start % N) + 1) % K == 0&&prince[(start%N)+1]!=0) //1에서 N사이에서만 계속 놀 것임. )
//			{
//				prince[(start % N) + 1]--; 
//				start++;
//				check[1]--; check[0]++; pos++;
//			} 
//			else {
//				start++; pos++;
//			}
//
//
//		}
//	}
//
//	printf("\n");
//	for (int i = 0; i < 2; i++) {
//		printf("%d ", check[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < N; i++) { printf("%d ", prince[i]); }
//
//}