//#include<stdio.h>
//#include<iostream>
//
//using namespace std;
//
//int map[1][41];
//int res[1][41];
//
//int main() {
//
//	map[0][0] = 1;
//	map[1][0] = 0;
//	map[0][1] = 0;
//	map[1][1] = 1;
//
//	int n;
//
//	cin >> n;
//
//	for (int i = 2; i <= 40; i++) {
//		map[0][i] = map[0][i - 1] + map[0][i - 2];
//		map[1][i] = map[1][i - 1] + map[1][i - 2];
//	}
//
//	
//		/*for (int j = 0; j < 41; j++) {
//			printf("%d %d\n", map[0][j], map[1][j]);
//		}
//	*/
//
//
//
//	int i = 0; 
//	while (i < n) {
//		int input;
//		cin >> input;
//		printf("%d %d\n", map[0][input], map[1][input]);
//
//		i++;
//	}
//
//
//
//}
