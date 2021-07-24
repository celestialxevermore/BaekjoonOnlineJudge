//#include<iostream>
//#define MAX 100001
//
//using namespace std;
//
//long long int A[MAX];
//int main() {
//
//	int N, M;
//
//	cin >> N >> M;
//
//
//	for (int i = 0; i < N; i++) {
//		cin >> A[i];
//	}
//
//
//	int s, e;
//	s = e = 0;
//
//	int cnt = 0;
//	int sum = 0;
//	int mini = 100000;
//	while (1) {
//
//		//현재 합이 M보다 크다면 s를 뒤로 땡겨준다.
//		if (sum >= M) { sum -= A[s++]; }
//		//만일 끝이 N과 같다면 멈춰준다.
//		else if (e == N) { break; }
//		//현재 합이 목표 합보다 작다면 계속 e를 뒤로 밀어서 확장한다.
//		else {
//			sum += A[e++];
//		}
//		//합이 같을 경우 cnt를 ++gksek.
//		if (sum == M) { 
//			int currentlength = e - s;
//			//printf("s : %d e :%d currentlength : %d\n\n", s, e, currentlength);
//			if (mini >= currentlength) {
//				mini = currentlength;
//			}
//		}
//
//	}
//
//	if (mini == 100000) {
//		printf("0");
//	}
//	else {
//		printf("%d\n", mini);
//	}
//}