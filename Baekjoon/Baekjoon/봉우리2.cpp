//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
////int map[60][60];
//
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//int main() {
//	int n, k, count = 0;
//	scanf("%d", &n);
//
//
//	vector<vector<int>>map(n + 2,vector<int>(n+2));
//    //행 크기와 열 크기 세로2 가로 3 
//
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//
//	int flag = 0;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			flag = 0;
//			for (int k = 0; k < 4; k++) {
//				if (map[i][j] <= map[i + dx[k]][j + dy[k]]) {
//					flag = 1; //더 돌 이유가 없음 만일 큰게 발견이 되어버리면 
//					break;
//				}
//			}
//			if (flag == 0) {
//				count++;
//			}
//		}
//	}
//	printf("%d \n", count);
//
//
//
//}