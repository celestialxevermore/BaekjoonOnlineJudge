//#include<iostream>
//#include<stdio.h>
//
//using namespace std;
//
//int map[51][51][51];
//
//int w(int a, int b, int c) {
//
//	if (a <= 0 || b <= 0 || c <= 0) return 1;
//	if (a > 20 || b > 20 || c > 20)return map[20][20][20]=w(20, 20, 20);
//	if (a < b && b < c)return w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
//	else {
//	
//		return w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
//	}
//
//}
//
//
//int main() {
//
//	int a, b, c;
//	while (1) {
//		cin >> a >> b >> c;
//		if (a == b == c == -1) { break;}
//		else {
//			int ans = w(a, b, c);
//			printf("w(%d, %d, %d) = %d\n\n", a, b, c, ans);
//		}
//	}
//
//
//}