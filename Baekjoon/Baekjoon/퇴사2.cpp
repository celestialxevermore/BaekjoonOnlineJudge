//#include<iostream>
//#include<vector>
//#define MAX 1500001
//using namespace std;
//
//int N;
//
//int map[2][MAX];
//
//int maxi = -1;
//int flag = 0;
//void DFS(int n, int time, int total) {
//	//printf("start DFS(%d,%d,%d)\n\n", n, time, total);
//	if (n + time == N) {
//		if (maxi < total) {
//			maxi = total;
//			//printf("maxi : %d\n\n", maxi);
//		}
//		return;
//	}
//	if (n + time > N) {
//		if (2 * time > N) {
//			return;
//		}
//		else {
//			if (maxi < total-map[1][n]) {
//				maxi = total-map[1][n];
//				//printf("maxi : %d\n\n", maxi);
//			}
//		}
//	}
//	else {
//		int nn = n + time;
//		int ntime = map[0][nn];
//		total += map[1][nn];
//		//printf("next DFS(%d,%d,%d)\n\n", nn, ntime, total);
//		DFS(nn, ntime,total);
//		total -= map[1][n];
//		n++;
//		nn = n + time;
//		ntime = map[0][nn];
//		total += map[1][nn];
//		//printf("next DFS(%d,%d,%d)\n\n", nn, ntime, total);
//		DFS(nn, ntime, total);
//	}
//	
//	
//}
//
//
//int main() {
//
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		cin >> map[0][i] >> map[1][i];
//	}
//
//	DFS(1, 0, 0);
//
//
//	
//		if (map[0][N] == 1) {
//			maxi += map[1][N];
//		}
//	
//	printf("%d", maxi);
//}