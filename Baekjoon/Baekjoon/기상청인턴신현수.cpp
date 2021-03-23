//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//int N, K;
//int arr[101];
//int ans[101];
//int start = 1;
//int main() {
//
//
//
//	cin >> N >> K;
//
//	for (int i = 1; i <= N; i++) {
//		cin >> arr[i];
//	}
//	
//	for (int i= K; i <= N; i++) {
//		
//		for (int j = 0; j < K; j++) {
//			
//			//printf("%d \n",arr[i - j]);
//			ans[i] += arr[i - j];
//			
//			//printf("ans[start] : %d \n", ans[i]);
//		}
//		//printf("\n\n");
//	}
//
//	/*for (int i = 0; i < N+1; i++) {
//		printf("%d ", ans[i]);
//	}*/
//
//
//
//	int maxi = -100000;
//	for (int i = 1; i <= 101; i++){
//		if (maxi < ans[i]&&ans[i]!=0) {
//			maxi=ans[i];
//		}
//	}
//
//	printf("%d",maxi);
//}