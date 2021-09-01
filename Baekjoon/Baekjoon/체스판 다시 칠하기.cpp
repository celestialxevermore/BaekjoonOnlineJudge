//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//int N, M;
//int mini = 10000;
//
//
//char space[51][51];
//char map[9][9];
//char criteria[9][9];
//
//int copy_(int x, int y, char start) {
//	int recount = 0;
//	//일단 복사를 한다.
//	for (int i = x; i <= 8 + x; i++) {
//		for (int j = y; j <= 8 + y; j++) {
//
//			map[i - x + 1][j - y + 1] = space[i][j];
//		}
//	}
//
//	if (start == 'B') {
//
//		for (int i = 1; i <= 8; i++) {
//			for (int j = 1; j <= 8; j++) {
//
//				if ((i + j) % 2 == 0) {
//					criteria[i][j] = 'B';
//				}
//				else {
//					criteria[i][j] = 'W';
//				}
//			}
//		}
//	}
//	else if (start == 'W') {
//		for (int i = 1; i <= 8; i++) {
//			for (int j = 1; j <= 8; j++) {
//				if ((i + j) % 2 == 0) {
//					criteria[i][j] = 'W';
//				}
//				else {
//					criteria[i][j] = 'B';
//				}
//			}
//		}
//	}
//	
//	for (int i = 1; i <= 8; i++) {
//		for (int j = 1; j <= 8; j++) {
//			if (map[i][j] != criteria[i][j]) {
//				recount++;
//			}
//		}
//	}
//
//	return recount;
//
//
//
//}
//
//
//
//int main() {
//
//	cin >> N >> M;
//
//
//	for (int i = 1; i <= N; i++) {
//		string a;
//		cin >> a;
//		for (int j = 0; j < a.size(); j++) {
//			space[i][j + 1] = a[j];
//		}
//	}
//
//
//	int current = 0;
//
//	for (int i = 1; i <= N; i++) {
//
//		for (int j = 1; j <= M; j++) {
//
//			if ((i + 7 <= N) && (j + 7 <= M)) {
//				//printf("x : %d y : %d에서 탐색 시작\n\n",i,j);
//				current = copy_(i, j, 'B');
//				mini = min(current, mini);
//				
//				current = copy_(i, j, 'W');
//				mini = min(current, mini);
//
//			}
//
//
//		}
//	}
//
//
//	printf("%d", mini);
//}
