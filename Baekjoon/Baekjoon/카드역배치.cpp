//#include<stdio.h>
//
//int card[21];
//
//void swapp(int* a, int* b) {
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void swap(int start, int end) {
//
//	if ((end - start) % 2 != 0) {
//		int index = (end - start + 1) / 2;
//		for (int i = 0; i < index; i++) {
//			swapp(&card[start + i], &card[end - i]);
//		}
//	}
//	if ((end - start) % 2 == 0) {
//		int mid = (end - start) / 2;
//		for (int i = 0; i < mid; i++) {
//			swapp(&card[start + i], &card[end - i]);
//		}
//	}
//
//}
//
//
//int main() {
//
//	for (int i = 1; i < 21; i++) {
//		card[i] = i;
//	}
//	
//	for (int i = 0; i < 10; i++) {
//		int start, end;
//		scanf("%d %d",&start,&end);
//		swap(start, end);
//	}
//
//
//	for (int i = 1; i < 21; i++) {
//		printf("%d ", card[i]);
//	}
//
//}