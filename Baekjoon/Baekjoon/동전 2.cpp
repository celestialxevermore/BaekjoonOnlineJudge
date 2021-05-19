//#include<iostream>
//#include<vector>
//#include<algorithm>
//#define MAX 10001
//
//using namespace std;
//
//int n, k;
//
//int arr[MAX];
//int coins[MAX];
//
//int main() {
//
//
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++) {
//		cin >> coins[i];
//	}
//	for (int i = 0; i <= k; i++) {
//		arr[i] = 100000;
//	}
//	arr[0] = 0;
//
//	for (int i = 0; i < n; i++) {
//		int cur = coins[i];
//		for (int j = cur; j <= k; j++) {	
//			arr[j] = min(arr[j], arr[j - cur] + 1);
//		}
//		/*for (int p = 1; p <= k; p++) {
//			printf("%d ", arr[p]);
//		}
//		printf("\n");*/
//	}
//
//
//	if (arr[k] == 100000) {
//		printf("-1");
//	}
//	else {
//
//		printf("%d\n", arr[k]);
//
//	}
//
//
//}