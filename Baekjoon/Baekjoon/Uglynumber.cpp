//#include<stdio.h>
//#include<stdlib.h>
//#include<algorithm>
//#include<vector>
//
//
//using namespace std;
//
//int main() {
//
//	int N;
//	int ugly_number[100000];
//
//
//	scanf("%d", &N);
//	int p2 = 1;
//	int p3 = 1;
//	int p5 = 1;
//	int min = 0;
//	ugly_number[0] = 0; ugly_number[1] = 1;
//
//
//	for (int i = 2; i <=N; i++) {
//		if (ugly_number[p2] * 2 < ugly_number[p3] * 3) { min = ugly_number[p2] * 2; }
//		else { min = ugly_number[p3] * 3; }
//		
//		if (ugly_number[p5] * 5 < min) { min = ugly_number[p5] * 5; }
//
//		if (min == ugly_number[p2] * 2)p2++;
//		if (min == ugly_number[p3] * 3)p3++;
//		if (min == ugly_number[p5] * 5)p5++;
//		
//		ugly_number[i] = min;
//
//
//	}
//
//	printf("%d \n", ugly_number[N]);
//
//
//
// }