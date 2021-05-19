//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//
//int res[5001];
//int top = 1;
//
//int N, K;
//
//queue<int>Q;
//void func() {
//	queue<int>cache;
//	while (!Q.empty()) {
//
//		if (Q.size() < K) {
//			if (Q.size() == 1) {
//				res[top++] = Q.front();
//				Q.pop();
//			}
//			else {
//				int div = Q.size();
//				int tmp = K % div;
//				int cnt = 1;
//				while (cnt < tmp) {
//					cache.push(Q.front());
//					Q.pop();
//					cnt++;
//				}
//				while (!cache.empty()) {
//					Q.push(cache.front());
//					cache.pop();
//				}
//				res[top++] = Q.front();
//				Q.pop();
//			}
//
//		}
//		
//		else {
//			
//			int cnt = 1;
//			while (cnt < K) {
//				cache.push(Q.front());
//				Q.pop();
//				cnt++;
//			}
//			while (!cache.empty()) {
//				Q.push(cache.front());
//				cache.pop();
//			}
//			res[top++] = Q.front();
//			Q.pop();
//
//		}
//
//	}
//
//}
//
//
//
//int main() {
//
//	cin >> N >> K;
//
//	for (int i = 1; i <= N; i++) {
//		
//		Q.push(i);
//	}
//	
//	func();
//	
//	printf("<");
//	for (int i = 1; i < top-1; i++) {
//		printf("%d, ", res[i]);
//	}
//	printf("%d>",res[top-1]);
//	
//
//}