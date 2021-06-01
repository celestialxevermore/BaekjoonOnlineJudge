//#include<iostream>
//#include<vector>
//#include<algorithm>
//#define MAX 10001
//using namespace std;
//
//int N;
//int map[MAX][MAX];
//int thisside[21];
//int depth;
//
//
//
////int combi2(int start, int level) {
////
////
////
////
////
////}
////int combi3(int start, int level) {
////
////
////
////
////}
//
//
//void combi1(int start, int level) {
//
//	if (level == N / 2+1) {
//		
//		int check[100] = { 0, };
//		int otherside[100] = { 0, };
//		int othercnt = 0;
//		for (int i = 1; i <= level; i++) {
//			//printf("%d ", check[i]);
//			check[thisside[i]]++;
//		}
//		//printf("\n\n");
//		
//		for (int i = 1; i <= N; i++) {
//			if (check[i] == 0) {
//				otherside[othercnt++] = i;
//			}
//		}
//		/*int ans = 10000;
//
//		int ans1 = combi2();
//		int ans2 = combi3();
//
//		ans = min(ans, abs(ans1 - ans2));*/
//
//		for (int i = 1; i <= N / 2; i++) {
//			printf("%d ", thisside[i]);
//		}
//		for (int i = 1; i <= N / 2; i++) {
//			printf("%d ", otherside[i]);
//		}
//		printf("\n\n");
//	}
//	else {
//		for (int i = start; i <= N; i++) {
//			thisside[level] = i;
//			combi1(i + 1, level + 1);
//		}
//
//	}
//
//}
//
//int main() {
//
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> map[i][j];
//		}
//	}
//	
//	combi1(1, 1);
//
//
//
//}