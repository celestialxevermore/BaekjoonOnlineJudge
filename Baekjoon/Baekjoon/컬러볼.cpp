//#include<stdio.h>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//#define MAX 200001
//
//
//typedef struct Ball {
//	int color;
//	int space;
//}ball;
//
//ball balllist[MAX];
//int res[MAX];
//int N;
//int cnt = 0;
//int main() {
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		int c, s;
//		scanf("%d %d", &c, &s);
//		ball ex;
//		ex.color = c;
//		ex.space = s;
//		balllist[++cnt] = ex;
//	}
//	sort(balllist + 1, balllist + N);
//	for (int i = 1; i <= N; i++) {
//		printf("%d %d\n", balllist[i].color, balllist[i].space);
//	}
//
//
//
//	cnt = 0;
//	/*for (int i = 1; i <= N; i++) {
//		ball current = balllist[i];
//		
//		int total = 0;
//		for (int j = 1; j <= N; j++) {
//
//			if (current.color != balllist[j].color && current.space > balllist[j].space) {
//				total += balllist[j].space;
//			}
//		}
//		res[++cnt] = total;
//
//	}*/
//	/*for (int i = 1; i <= cnt; i++) {
//		printf("%d\n",res[i]);
//	}*/
//}