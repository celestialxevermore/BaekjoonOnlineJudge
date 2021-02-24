//#include<stdio.h>
//#include<iostream>
//#include<queue>
//#include<vector>
//#define MAX 101
//using namespace std;
//
//
//int n;
//int start, target, cnt;
//bool visited[MAX];
//vector<int>relative[MAX];
//queue<int>Q;
//int flag = 0;
//
//int ans = 0;
//void DFS(int start, int relativecnt) {
//	if (start == target) {
//		flag = 1;
//		printf("%d에서 %d까지 도달하였습니다!! 모든 탐색을 종료합니다. \n\n", start, target);
//		printf("결과값 : %d\n\n", relativecnt);
//		ans = relativecnt;
//		return;
//	}
//	else {
//		printf("<<<%d에서 DFS 탐색을 시작합니다!!!>>> \n\n", start);
//		for (int i = 0; i < relative[start].size(); i++) {
//			if (!visited[relative[start][i]]) {
//				printf("%d는 아직 방문하지 않았고, %d와 연결되어 있습니다.\n\n", relative[start][i], start);
//				visited[relative[start][i]] = true;
//				relativecnt++;
//				printf("현재까지의 촌수 계산 결과 : %d\n\n", relativecnt);
//				int next = relative[start][i];
//				printf("%d에서 새로운 DFS 탐색을 시작합니다. \n\n", next);
//				
//				DFS(next, relativecnt);
//			}
//		}
//
//
//	}
//
//
//
//}
//
//
//int main() {
//
//	cin >> n; //n은 전체인구
//	
//	cin >> start >> target;
//
//	cin >> cnt;
//
//
//	for (int i = 0; i < cnt; i++) {
//		int snode, tnode;
//		cin >> snode >> tnode;
//		relative[snode].push_back(tnode);
//		relative[tnode].push_back(snode);
//	}
//
//	Q.push(start);
//	visited[start] = true;
//	int relativecnt = 0;
//	DFS(start,relativecnt);
//
//
//	if (flag == 1) {
//		printf("%d ", ans);
//	}
//	else {
//		printf("-1");
//	}
//
//
//
//}