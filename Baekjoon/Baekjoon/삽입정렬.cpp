//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int N;
//
//int arr[101];
//
//void swap(int* a, int* b) {
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//
//	for (int i = 1; i < N; i++) {
//
//		int cur = i;
//		while (arr[cur - 1] > arr[cur]) {
//			swap(&arr[cur - 1], &arr[cur]);
//			cur--;
//		}
//
//
//	}
//	for (int i = 0; i < N; i++) {
//		printf("%d ", arr[i]);
//	}
//
//}