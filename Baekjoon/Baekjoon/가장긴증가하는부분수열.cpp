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
//	//20 30 50 100 10 70 100 10 80 입력
//	//0  0  0  0   0  0  0   0  0  인 상태
//	arr[1].second = 1;
//	//20 30 50 100 10 70 100 10 80 입력
//	//1  0  0  0   0  0  0   0  0  인 상태
//
//	for (index; index <= n; index++) {
//		int uptocurrent_min = 10000;
//		int uptocurrent_max = -10000;
//		int atthatindex_ofMax = 0;
//		int atthatindex_ofMin = 0;
//		//처음부터 현재 index 바로 전까지 비교하여 최강자와 최강자의 인덱스를 가린다.
//		for (int i = 1; i < index; i++) {
//			if (uptocurrent_max < arr[i].first) { uptocurrent_max = arr[i].first; atthatindex_ofMax = i; }
//		}
//		//
//		for (int i = 1; i < index; i++) {
//			if (uptocurrent_min > arr[i].first) {
//				uptocurrent_min = arr[i].first;
//				atthatindex_ofMin = i;
//			}
//		}
//		//제일 작은 불쌍맨일 때 
//		if (uptocurrent_min > arr[index].first) { arr[index].first = 1; }
//
//		//새로운 최강자가 나타났을 때 
//		if (uptocurrent_max < arr[index].first) {
//			int indexformax = 0;
//			int maxofeach[1001];
//			for (int i = 1; i < index; i++) {
//				if (arr[index].first > arr[i].first) {
//					maxofeach[indexformax++] = arr[i].second + 1;
//				}
//			}
//			int maxmax = 0;
//			for (int i = 0; i < indexformax; i++) {
//				if (maxmax < maxofeach[i]) { maxmax = maxofeach[i]; }
//			}
//			arr[index].second = maxmax;
//		}
//		//100과 70 사이의 비교 혹은 100과 100 사이의 비교일 때
//		//그러니까 새로운 도전자가 나타났으나 여전히 최강자가 유지할 때 
//		else if (uptocurrent_max > arr[index].first) {
//			int indexformax = 0;
//			int maxofeach[1001];
//			for (int i = 1; i < index; i++) {
//				if (arr[index].first > arr[i].first) {
//					maxofeach[indexformax++] = arr[i].second + 1;
//				}
//			}
//			int maxmax = 0;
//			for (int i = 0; i < indexformax; i++) {
//				if (maxmax < maxofeach[i]) { maxmax = maxofeach[i]; }
//			}
//			arr[index].second = maxmax;
//		}
//		//도전자 == 최강자
//		else {
//			int indexformax = 0;
//			int maxofeach[1001];
//			for (int i = 1; i < index; i++) {
//				if (arr[index].first > arr[i].first) {
//					maxofeach[indexformax++] = arr[i].second + 1;
//				}
//			}
//			int maxmax = 0;
//			for (int i = 0; i < indexformax; i++) {
//				if (maxmax < maxofeach[i]) { maxmax = maxofeach[i]; }
//			}
//			arr[index].second = maxmax;
//		}
//	}
//
//	int max = -1000;
//	for (int i = 1; i <= n; i++) {
//		if (max < arr[i].second) {
//			max = arr[i].second;
//		}
//	}
//	printf("%d ", max);
//
//}