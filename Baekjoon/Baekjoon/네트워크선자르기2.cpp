//#include<stdio.h>
//#include<iostream>
//using namespace std;
//
//int dy[101];
//
//int DFS(int n) {
//
//	if (dy[n] != 0)return dy[n];
//
//	if (n == 1 || n == 2) { return n; }
//	else {
//		return dy[n] = DFS(n - 1) + DFS(n - 2);
//	}
//
//}
//
//
//int main() {
//	
//	int n;
//
//
//
//	cin >> n;
//	
//	cout << DFS(n);
//
//}