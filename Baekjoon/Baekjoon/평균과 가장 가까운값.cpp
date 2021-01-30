//#include<stdio.h>
//#include<stdlib.h>
//#include<algorithm>
//#include<vector>
//#include<math.h>
//using namespace std;
//
//int main() {
//
//
//	//격자판 생성
//	
//	int map[9][9];
//	double sum[9] = { 0, };
//	int min[9] = { 0, };
//	//테스트용 격자판 생성
//	int test_map[9][9] = {
//		{3,23,85,34,17,74,25,52,65}
//		,{10,7,39,42,88,52,14,72,63}
//		,{87,42,18,78,53,45,18,84,53}
//		,{34,28,64,85,12,16,75,36,55}
//		,{21,77,45,35,28,75,90,76,1}
//		,{25,87,65,15,28,11,37,28,74}
//		,{65,27,75,41,7,89,78,64,39}
//		,{47,47,70,45,23,65,3,41,44}
//		,{87,13,82,38,50,12,48,29,80}
//
//	};
//
//
//	/*int test_map[9][9];
//
//
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9; j++) {
//			scanf("%d", &test_map[i][j]);
//		}
//	}*/
//
//
//
//
//	//모두 정렬을 합니다. 
//	for (int i = 0; i < 9; i++) {
//		
//		for (int j = 0; j <= 9; j++) {
//			sort(test_map[i], test_map[i] + j);
//		}
//	}
//	
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9; j++) {
//			printf("%d ", test_map[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("\n");
//
//	for (int i = 0; i < 9; i++) {
//		int totalindex = 0;
//		for (int j = 0; j < 9; j++) {
//			sum[i] += *(test_map[i] + j);
//		}
//		sum[i] = (double)sum[i] / 9;
//		
//		int index = 4;
//		int min_check[9] = { 0, };
//		int min_ans[9] = { 0, };
//		for (int k = 0; k < 9; k++) {
//			min_check[k] = abs(sum[i] - *(test_map[i] + k));
//		}
//		//for (int p = 0; p < 7; p++) { printf(" (%d %d) ",*(test_map[i]+p), min_check[p]); }
//		//이 부분에서 숫자가 소실되는 현상이 발생합니다!ㅜㅜㅜㅜ
//		printf("\n");
//		int min = 1000;
//		for (int q = 0; q < 9; q++) {
//			int index = 0;
//			if (min > min_check[q]) {
//				min = min_check[q]; totalindex = q;
//			}
//
//		}
//		printf("%.0f %d \n",sum[i],*(test_map[i]+totalindex));
//		printf("\n");
//	}
//	printf("\n");
//
//	}
//
//
