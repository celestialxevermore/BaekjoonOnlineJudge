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
//		//indice�� �ֻ����� ����� ���� 1�϶�, 2�϶�, 3�϶��� �����ϱ� ����
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
//			//�� ���� �͵��� ���� �ٸ� ��쿡 �ش�
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