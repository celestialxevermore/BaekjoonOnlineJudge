//#include<iostream>
//#include<vector>
//#include<algorithm>
//#define MAX 51
//using namespace std;
//
//int N, M;
//int map[MAX][MAX];
//bool visited[MAX][MAX];
//
//int res = 0;
//int maxx = -1;
//
//typedef struct virus {
//	int x;
//	int y;
//}V;
//
//int viruscnt = 0;
//V viruslist[11];
//
//
//bool iszero(int map[MAX][MAX]) {
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (map[i][j] == 0) {
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//
//
//int main() {
//
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	if (iszero(map)) {
//		printf("0이 있습니다. \n\n");
//	}
//	else {
//		printf("0이 없습니다. \n\n");
//	}
//
//
//
//}