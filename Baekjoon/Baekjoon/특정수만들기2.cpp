//#include<stdio.h>
//
//int a[11], n, m, count = 0;
//
//void DFS(int Level, int value) {
//	
//	//완성된 경우
//	if (Level == n + 1) {
//		if (value == m)count++;
//	}
//	else {
//		DFS(Level + 1, value + a[Level]);
//		DFS(Level + 1, value - a[Level]);
//		DFS(Level + 1, value);
//	}
//}
//
//
//
//int main() {
//	
//	scanf("%d %d", &n, &m);
//
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &a[i]);
//	}
//	DFS(1, 0);
//	printf("%d \n", count);
//}