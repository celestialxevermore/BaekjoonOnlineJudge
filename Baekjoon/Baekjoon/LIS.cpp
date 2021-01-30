//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int n;
//int index = 2;
//
//pair<int, int> arr[1001];
//
//int main() {
//
//	scanf("%d", &n);
//	for (int i = 1; i < n + 1; i++) {
//		scanf("%d", &arr[i].first);
//	}
//	arr[1].second = 1;
//	
//	int min = 10000;
//	for (int i = 1; i <= n; i++) {
//		if (min > arr[i].first) {
//			min = arr[i].first;
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		if (min == arr[i].first) {
//			arr[i].second = 1;
//		}
//	}
//
//
//
//
//	for (index; index <= n; index++) {
//		//불쌍맨이면 지나가세여
//		if (arr[index].first == min) { continue; }
//		
//		
//		
//		int indexformax = 0;
//		int maxofeach[1001];
//		for (int i = 1; i < index; i++) {
//			if (arr[index].first > arr[i].first) {
//				maxofeach[indexformax++] = arr[i].second + 1;
//			}
//		}
//		int maxmax = 0;
//		for (int i = 0; i < indexformax; i++) {
//			if (maxmax < maxofeach[i]) { maxmax = maxofeach[i]; }
//		}
//		arr[index].second = maxmax;
//	
//	}
//
//	int max = -1000;
//	for (int i = 1; i <= n; i++) {
//		if (max < arr[i].second) {
//			max = arr[i].second;
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		printf("%d ", arr[i].second);
//	}
//	printf("\n");
//	printf("%d ", max);
//
//
//}