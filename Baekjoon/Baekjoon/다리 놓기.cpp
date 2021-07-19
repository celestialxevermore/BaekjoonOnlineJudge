//#include<iostream>
//#include<stdio.h>
//#include<algorithm>
//
//using namespace std;
//
//
//int map[31][31];
//
//int T, N, R;
//
//int res[100000];
//int rescnt = 0;
//int Combi(int N, int R) {
//
//	/*if (N == R) {
//		return 1;
//	}
//	else if ((R == 1 && N != 1) || (N - R == 1)) {
//		return N;
//	}
//
//	else {
//		if (map[N][R] == 0) {
//			return map[N - 1][R] + map[N - 1][R - 1];
//		}
//		else {
//			return map[N][R];
//		}
//
//	}*/
//
//	if (N == R || R == 0) { return 1; }
//	if (map[N][R] != 0) { return map[N][R]; }
//	else {
//		return map[N][R] = Combi(N - 1, R - 1) + Combi(N - 1, R);
//	}
//
//}
//
//
//
//int main() {
//
//	int start = 0;
//	
//
//	for (int i = 1; i <= 31; i++) {
//		for (int j = 1; j <= 31; j++) {
//			if (i == j) {
//				map[i][j] = 1;
//
//			}
//			else if ((j == 1 && i != 1)||(i-j==1)) {
//				map[i][j] = i;
//			}
//		}
//	}
//
//
//	cin >> T;
//	while (start < T) {
//		
//		cin >> R >> N;
//		int ans = 0;
//		ans = Combi(N, R);
//		res[rescnt++] = ans;
//		start++;
//
//	}
//
//	for (int i = 0; i < rescnt; i++) {
//		printf("%d\n", res[i]);
//	}
//
//
//}