//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#include<math.h>
//
//
//using namespace std;
//
//int map[31][31];
//int ch[31];
//bool teamdivide[31];
//int startteam[31];
//int linkteam[31];
//int sans[2];
//int lans[2];
//int scnt = 0;
//int lcnt = 0;
//int N;
//int mini = 10000;
//
//int total = 0;
//
//
//
//
//int DFS2(int start, int level) {
//	int ans = 0;
//
//	if (level == 2) {
//		int cr = startteam[0] + startteam[1];
//		printf("scr : %d \n\n", cr);
//		printf("startteam[0] : %d startteam[1] : %d \n\n", startteam[0], startteam[1]);
//		for (int i = 0; i < level; i++) {
//			printf("%d \n", map[cr - startteam[i]][startteam[i]]);
//			ans += map[cr - startteam[i]][startteam[i]];
//			printf("current ans : %d \n", ans);
//		}
//		printf("cons ans : %d\n\n", ans);
//		return ans;
//	}
//	else {
//		for (int i = start; i < N / 2; i++) {
//			sans[level] = startteam[i];
//			DFS2(i + 1, level + 1);
//		}
//
//
//	}
//}
//
//int DFS3(int start, int level) {
//	int ans = 0;
//	if (level == 2) {
//		int cr = linkteam[0] + linkteam[1];
//		printf("lcr : %d\n\n", cr);
//		printf("linkteam[0] : %d linkteam[1] : %d \n\n", linkteam[0], linkteam[1]);
//		for (int i = 0; i < level; i++) {
//			printf("%d \n", map[cr - linkteam[i]][linkteam[i]]);
//			ans += map[cr - linkteam[i]][linkteam[i]];
//			printf("current ans : %d \n", ans);
//		}
//		printf("cons ans : %d\n\n", ans);
//		return ans;
//	}
//	else {
//		for (int i = start; i < N / 2; i++) {
//			lans[level] = linkteam[i];
//			DFS3(i + 1, level + 1);
//		}
//
//	}
//}
//
//
////팀을 나누기 위한 dfs
////ch1에는 6명이 있다면 1,2,3이 들어감 
//void DFS1(int start, int level) {
//	
//	if (level == N / 2) {
//		printf("level : %d\n\n", level);
//		for (int i = 0; i < level; i++) {
//			printf("%d\n\n", ch[i]);
//			teamdivide[ch[i]] = true;
//		}
//
//
//
//		for (int i = 1; i <= N; i++) {
//			if (teamdivide[i]) {
//				startteam[scnt] = i;
//				scnt++;
//			}
//			else {
//				linkteam[lcnt] = i; lcnt++;
//			}
//		}
//		printf("startteam : ");
//		for (int i = 1; i <= N; i++) {
//			if (teamdivide[i]) {
//				printf("%d ", i);
//			}
//		}
//		printf("\n");
//		printf("linkteam : ");
//		for (int i = 1; i <= N; i++) {
//			if (!teamdivide[i]) {
//				printf("%d ", i);
//			}
//		}
//		printf("\n");
//		int s_ans = 0;
//		int l_ans = 0;
//		s_ans=DFS2(0, 0);
//		l_ans=DFS3(0, 0);
//		printf("s_ans : %d l_ans : %d\n\n", s_ans, l_ans);
//		int next = abs(sans - lans);
//		mini = min(mini, next);
//		for (int i = 0; i < N; i++) {
//			teamdivide[i] = false;
//		}
//	}
//	else {
//		for (int i = start; i <= N; i++) {
//			ch[level] = i;
//			DFS1(i + 1, level + 1);
//		}
//	}
//
//}
//
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
//	DFS1(0, 0);
//
//
//
//	
//	printf("%d", mini);
//	
//}
