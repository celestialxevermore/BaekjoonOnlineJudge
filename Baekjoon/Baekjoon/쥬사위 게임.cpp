//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//
//int indice[7];
//int res[1001];
//int rescnt = 0;
//int main() {
//
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//
//		int input[3] = { 0, };
//		int out = 0;
//		for (int j = 0; j < 3; j++) {
//			cin >> input[j];
//			indice[input[j]]++;
//		}
//		int key = -1;
//
//		//indice는 주사위의 경우의 수가 1일때, 2일때, 3일때를 구분하기 위함
//
//		for (int j = 1; j < 7; j++) {
//			if (indice[j] == 3) {
//				out = 10000 + j * 1000;
//				res[rescnt++] = out;
//			}
//			else if (indice[j] == 2) {
//				out = 1000 + j * 100;
//				res[rescnt++] = out;
//			}
//			//세 개의 것들이 전부 다른 경우에 해당
//		}
//		for (int j = 1; j < 7; j++) {
//			if (indice[j] == 1) {
//				key = j;
//			}
//		}
//		out = key * 100;
//		res[rescnt++] = out;
//	}
//	int maxi = -1;
//	for (int i = 0; i < rescnt; i++) {
//		if (maxi < res[i]) {
//			maxi = res[i];
//		}
//	}
//	printf("%d", maxi);
//
//}