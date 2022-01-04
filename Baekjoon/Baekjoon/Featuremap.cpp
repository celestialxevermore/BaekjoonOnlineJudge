//#include<iostream>
//#include<vector>
//#include<stdio.h>
//
//using namespace std;
//
//
//int images[28][28];
//int nextimages[30][30];
//
//int filters[9][9];
//int kernel[9][9];
//int res[100][100];
//int N, M,O;
//
//int main() {
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		
//		for (int j = 0; j < N; j++) {
//			cin >> images[i][j];
//
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		
//		for (int j = 0; j < N; j++) {
//			nextimages[i + 1][j + 1] = images[i][j];
//
//		}
//	}
//
//	
//
//	cin >> M;
//	
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> kernel[i][j];
//		}
//	}
//
//
//
//	for (int i = 0; i < N - M + 1; i++) {
//
//		for (int j = 0; j < N - M + 1; j++) {
//
//			
//			int sum = 0;
//			
//			for (int ii = 0; ii < M; ii++) {
//				for (int jj = 0; jj < M; jj++) {
//
//					sum += (nextimages[i + ii][j + jj] * kernel[ii][jj]);
//
//				}
//			}
//			
//			res[i][j] = sum;
//
//
//
//		}
//
//	}
//
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < M; j++) {
//			printf("%d ", res[i][j]);
//		}
//		printf("\n");
//	}
//
//
//
//
//
//	
//
//}