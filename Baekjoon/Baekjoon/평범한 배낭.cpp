//#include<iostream>
//#include<stdio.h>
//#include<vector>
//using namespace std;
//
//
//vector<pair<int, int>>p(101);
//int KK[100001];
//
//int N, K;
//
//
//int main() {
//
//
//	cin >> N >> K;
//	for (int i = 1; i <= N; i++) {
//		int w, v;
//		cin >> w >> v;
//		p[i].first = w;
//		p[i].second = v;
//		//printf("w : %d v : %d\n\n", p[i].first, p[i].second);
//	}
//
//
//
//	for (int i = 1; i <= N; i++) {
//
//		int w = p[i].first;
//		int v = p[i].second;
//		printf("w : %d v : %d \n\n", w, v);
//		for (int j = w; j <= K; j++) {
//			if (KK[j] < KK[j - w] + v) {
//				printf("%d < %d\n\n", KK[j], KK[j - w]+v);
//				KK[j] = KK[j - w] + v;
//			}
//			else {
//				continue;
//			}
//		}
//		for (int p = 1; p <= K; p++) {
//			printf("%d ", KK[p]);
//		}
//		printf("\n\n");
//
//	}
//	printf("%d", KK[K]);
//
//}