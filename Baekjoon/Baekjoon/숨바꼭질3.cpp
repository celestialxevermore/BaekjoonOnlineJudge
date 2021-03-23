//#include<iostream>
//#include<vector>
//#include<stdio.h>
//#include<queue>
//#define MAX 100001
//using namespace std;
//
//
//
//int map[MAX];
//int mintime[MAX];
//bool visited[MAX];
//int dx[3] = { 1,-1,2 };
//
//typedef struct node {
//
//	int x;
//	int time;
//
//
//	node(int a, int b) {
//		x = a;
//		time = b;
//	}
//};
//
//
//int N, K;
//int ans;
//queue<node> Q;
//
//
//
//void BFS() {
//
//
//	node current(1, 0);
//
//	while (!Q.empty()) {
//
//		current.x = Q.front().x;
//		current.time = Q.front().time;
//		Q.pop();
//
//		if (current.x == K) {
//			//printf("<<<<<<<<<<<<<<<<<<<<<<<<답을 찾았습니다!!>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
//			if (mintime[current.x] > current.time) {
//				//printf("mintime[current.x] : %d current.time : %d \n\n", current.x, current.time);
//				mintime[current.x] = current.time;
//			}
//			
//			
//			//printf("최솟값 : %d \n\n", mintime[current.x]);
//			
//		}
//
//		for (int i = 0; i < 3; i++) {
//
//			int next = dx[i];
//
//			if (next != 2) {
//
//				int x = current.x + dx[i];
//				int nexttime = current.time + 1;
//				
//
//				if (visited[x] && mintime[x] > nexttime) {
//					//printf("방문하였으나 최솟값 갱신이 필요합니다. mintime[x] : %d nexttime : %d \n\n", mintime[x], nexttime);
//					mintime[x] = nexttime;
//					
//					Q.push(node(x, nexttime));
//				}
//
//				if (!visited[x] && 0 <= x && x <= MAX) {
//					visited[x] = true;
//					mintime[x] = nexttime;
//					//printf("next x : %d next mintime : %d \n\n", x, mintime[x]);
//					Q.push(node(x,nexttime));
//
//
//				}
//				else {
//					continue;
//				}
//
//			}
//
//			else {
//				int x = current.x * dx[i];
//				int nexttime = current.time;
//
//				if (visited[x] && mintime[x] > nexttime) {
//					//printf("방문하였으나 최솟값 갱신이 필요합니다. mintime[x] : %d nexttime : %d \n\n", mintime[x], nexttime);
//					mintime[x] = nexttime;
//					
//					Q.push(node(x, nexttime));
//				}
//
//
//				if (!visited[x] && 0 <= x && x <= MAX) {
//					visited[x] = true;
//					mintime[x] = nexttime;
//					//printf("next x : %d next mintime : %d \n\n", x, mintime[x]);
//					Q.push(node(x,nexttime));
//
//
//				}
//				else {
//					continue;
//				}
//
//
//
//
//			}
//				
//		}
//
//	}
//}
//
//
//int main() {
//
//	cin >> N >> K;
//
//	visited[N] = true;
//	
//	
//	for (int i = 0; i <= MAX; i++) {
//		mintime[i] = 10000;
//	}
//	
//	mintime[N] = 0;
//	Q.push(node(N, 0));
//	BFS();
//	ans = mintime[K];
//	printf("%d", ans);
//
//
//}