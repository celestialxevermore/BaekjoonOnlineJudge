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
//		//���� ���� M���� ũ�ٸ� s�� �ڷ� �����ش�.
//		if (sum >= M) { sum -= A[s++]; }
//		//���� ���� N�� ���ٸ� �����ش�.
//		else if (e == N) { break; }
//		//���� ���� ��ǥ �պ��� �۴ٸ� ��� e�� �ڷ� �о Ȯ���Ѵ�.
//		else {
//			sum += A[e++];
//		}
//		//���� ���� ��� cnt�� ++gksek.
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