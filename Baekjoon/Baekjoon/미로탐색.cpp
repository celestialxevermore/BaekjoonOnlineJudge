//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//
//
//int map[7][7];
//int check[7][7];
//int count = 0;
//
//void DFS(int row, int col) {
//	if (row - 1 == 7 && col - 1 == 7) {
//		count++;
//	}
//	else {
//		if (row>0 && row<8 && col>0 && col < 8) {
//			//오른쪽
//			if (map[row][col + 1] == 0) {
//				map[row][col + 1] = 1; //해당 방문
//				DFS(row, col + 1);
//				map[row][col + 1] = 0; //풀어준다. 
//			}
//			//왼쪽
//			if (map[row][col - 1] == 0) {
//				map[row][col - 1] = 1;
//				DFS(row, col - 1);
//				map[row][col - 1] = 0;
//			}
//			//위쪽
//			if (map[row - 1][col]==0) {
//				map[row - 1][col] = 1;
//				DFS(row - 1, col);
//				map[row - 1][col] = 0;
//			}
//			//아래쪽
//			if (map[row + 1][col] == 0) {
//				map[row + 1][col] = 1;
//				DFS(row + 1, col);
//				map[row - 1][col] = 0;
//			}
//		}
//	}
//}
//
//int main() {
//	map[1][1] = 1;
//
//	DFS(1, 1);
//
//}
//
