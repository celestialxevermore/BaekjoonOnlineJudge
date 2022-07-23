//#include<iostream>
//#include<vector>
//
//#include<algorithm>
//#define MAX 100001
//
//using namespace std;
//
//
//int N;
//int input[MAX];
//int sum[MAX];
//int res[MAX];
//
//
//
//int start = 0;
//
//int main() {
//
//
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		cin >> input[i];
//	}
//
//
//	int M;
//
//	cin >> M;
//
//	int time = 0;
//	
//	sum[1] = input[1];
//	for (int i = 2; i <= N; i++) {
//		sum[i] = sum[i - 1] + input[i];
//	}
//
//	while (time < M) {
//		int s = 0, e = 0;
//		cin >> s >> e;
//
//
//
//		if (s == e) {
//			res[time] = input[s];
//		}
//		else {
//
//			res[time] = sum[e] - sum[s-1];
//
//		}
//		
//		time++;
//
//
//	}
//
//
//
//
//
//
//
//	for (int i = 0; i < M; i++) {
//		printf("%d \n", res[i]);
//	}
//
//
//}