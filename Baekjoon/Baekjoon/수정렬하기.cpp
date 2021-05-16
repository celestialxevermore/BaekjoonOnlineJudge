//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//
//int N;
//int input[1001];
//void swap(int* a, int* b) {
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main() {
//	cin >> N;
//	
//	for (int i = 0; i < N; i++) {
//		cin >> input[i];
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N - 1; j++) {
//			if (input[j] > input[j + 1]) {
//				swap(&input[j], &input[j + 1]);
//			}
//			
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		printf("%d\n", input[i]);
//	}
//
//	
//
//}