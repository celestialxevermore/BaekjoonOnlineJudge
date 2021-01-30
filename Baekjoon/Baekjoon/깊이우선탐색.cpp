//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//
//using namespace std;
//
//void DFS(int v) {
//	if (v > 7)return;
//	else {
//		//printf("%d ", v); //전위 순회 일때
//		DFS(v * 2); //왼쪽 노드
//		//printf("%d ", v); //중위 순회 일때
//		DFS(v * 2 + 1); //오른쪽 노드
//		printf("%d " ,v); //후위 순회 일때
//	}
//}
//
//int main() {
//	DFS(1);
//	return 0;
//}