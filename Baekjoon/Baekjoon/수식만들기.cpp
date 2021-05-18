//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//int N;
//int arr[12];
//int ops[4];
//
//typedef struct Node {
//	int cur = 0;
//	int op[4] = { 0, };
//	
//
//}Node;
//int mini = 987654321;
//int maxi = -1000;
//
//void DFS(int level, Node current) {
//	Node next;
//	if (level == N - 1) {
//		maxi = max(current.cur, maxi);
//		mini = min(current.cur, mini);
//		return;
//	}
//	else {
//
//		for (int i = 0; i < 4; i++) {
//			if (current.op[i] != 0) {
//
//			}
//		}
//
//
//	}
//
//}
//
//
//int main() {
//
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 0; i < 4; i++) {
//		cin >> ops[i];
//	}
//
//	Node start;
//	start.cur = arr[0];
//	for (int i = 0; i < 4; i++) {
//		start.op[i] = ops[i];
//	}
//	int level = 0;
//
//	DFS(level, start);
//
//
//
//
//}