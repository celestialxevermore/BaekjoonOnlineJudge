//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//
//int map[8][8];
//int check[7][7];
//int count = 0;
//int move[2] = { -1,1 }; //-1은 왼쪽, 그리고 위 +1은 오른쪽, 그리고 아래
//void DFS(int row, int col) {
//	//종단점 지정
//	if (row == 7 && col == 7) {
//		count++;
//	}
//	else {
//		//지도의 범위를 벗어나지 않을 때
//		if (row >0 || row<8 || col>0 || col < 8) {
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
//	for (int i = 0; i < 7; i++) {
//		for (int j = 0; j < 7; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//
//	DFS(1, 1);
//}