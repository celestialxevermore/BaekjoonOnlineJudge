//#include<stdio.h>
//#include<iostream>
//#define MAX 10001
//using namespace std;
//
//int A[MAX];
//int main() {
//
//	int N, M;
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) {
//		cin >> A[i];
//	}
//
//	int s, e;
//	s = e = 0;
//
//	int cnt = 0;
//	int sum = 0;
//	while (1) {
//		
//
//
//		if (sum >= M) { sum -= A[s++]; }
//		else if (e == N) { break; }
//		else {
//			sum += A[e++];
//		}
//		if (sum == M)cnt++;
//		/*if (sum < M) {
//			sum += A[e++];
//		}
//		else if (sum >= M) {
//			sum -= A[s++];
//			
//		}
//		else if (e == N) { break; }
//		if (sum == M) {
//			cnt++;
//		}*/
//
//
//	}
//	printf("%d \n", cnt);
//
//}