//#include<iostream>
//
//using namespace std;
//
//
//int main() {
//
//
//	int memory[101][101];
//	int seg[101][101];
//	for (int i = 0; i < 101; i++) {
//		for (int j = 0; j < 101; j++) {
//			memory[i][j] = j;
//			seg[i][j] = j;
//		}
//	}
//
//
//	printf("%d \n", memory[3][5]);
//	printf("%d \n", *(memory[3] + 5));
//	printf("%d \n", *(memory + 3));
//	printf("%d \n", *(memory+3) + 5);
//
//
//	printf("%d \n", *(seg[3] + 5));
//	printf("%d \n", *(seg[3]));
//	printf("%d \n", *(seg[3]) + 5);
//
//}