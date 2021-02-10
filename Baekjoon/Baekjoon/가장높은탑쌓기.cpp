//#include<stdio.h>
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//typedef struct block {
//	int space;
//	int height;
//	int weight;
//}Block;
//
//int dy[101];
//Block blocklist[101];
//
//
//int n;
//int main() {
//
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		int s, h, w;
//		cin >> s >> h >> w;
//		blocklist[i].space = s;
//		blocklist[i].height = h;
//		blocklist[i].weight = w;
//	}
//
//
//	int ans = 0;
//	dy[1] = blocklist[1].height;
//	
//	for (int i = 2; i <= n; i++) {
//		int max = 0;
//		//printf("\n\n<<현재 기준점 블럭의 정보 : %d %d %d >>\n\n", blocklist[i].space, blocklist[i].height, blocklist[i].weight);
//		for (int j = i - 1; j > 0; j--) {
//
//			if (blocklist[j].space > blocklist[i].space && blocklist[j].weight > blocklist[i].weight && max < dy[j]) {
//				//printf("넓이 비교 %d > %d \n\n", blocklist[j].space, blocklist[i].space);
//				//printf("무게 비교 %d > %d \n\n", blocklist[j].weight, blocklist[i].weight);
//				
//				max = dy[j];
//				//printf("현재 max값 : %d\n\n\n", max);
//			}
//		}
//		max = max + blocklist[i].height;
//		/*printf("새로 쌓을 수 있는 블럭의 높이 :%d\n\n", blocklist[i].height);
//		printf("새로 갱신된 max값 : %d\n\n", max);*/
//		dy[i] = max;
//		//이거 안해줘가지고 계속 안된거임. 
//		if (max > ans) {
//			ans = max;
//		}
//	}
//
//	cout << ans;
//
//}
