//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<queue>
//#define MAX 100001
//using namespace std;
//int s, b;
//
//int level = 0;
//int map[MAX];
//bool visited[MAX];
//int dx1[3] = { -1,1,2 };
//int cnt = 0;
//int foot[MAX];
//
//queue<pair<int, int>>Q1;
//queue<pair<int, int>>Q2;
//
//void BFS1() {
//
//	pair<int, int>current;
//
//	while (!Q1.empty()) {
//		current.first = Q1.front().first;
//		current.second = Q1.front().second;
//		printf("current loc : %d cnt : %d\n\n", current.first, current.second);
//		Q1.pop();
//		if (current.first == b) {
//			level = current.second;
//			return;
//		}
//
//		for (int i = 0; i < 2; i++) {
//			int loc = current.first + dx1[i];
//			int cnt = current.second + 1;
//			if (!visited[loc]&&loc>=0&&loc<=MAX) {
//				visited[loc] = true;
//				pair<int, int>next;
//				next.first = loc;
//				next.second = cnt;
//				Q1.push(next);
//			}
//		}
//		for (int i = 2; i < 3; i++) {
//			int loc = current.first * dx1[i];
//			int cnt = current.second + 1;
//			if (!visited[loc] && loc >= 0 && loc <= MAX) {
//				visited[loc] = true;
//				pair<int, int>next;
//				next.first = loc;
//				next.second = cnt;
//				Q1.push(next);
//			}
//		}
//
//
//
//
//
//	}
//
//
//}
//int flag = 0;
//void DFS1(int loc,int cnt) {
//
//	if (cnt == level&&flag==0) {
//		if (loc == s) {
//			printf("%d\n", cnt);
//			for (int i = level; i >= 0; i--) {
//				printf("%d ", foot[i]);
//			}
//			flag = 1;
//		}
//		else {
//			return;
//		}
//
//
//	}
//	else {
//
//		if (loc % 2 == 0&&cnt<b) {
//
//			if (loc - 1 >= 0) {
//				foot[cnt + 1] = loc - 1;
//				printf("DFS(%d,%d)\n\n", loc - 1, cnt + 1);
//				DFS1(loc - 1, cnt + 1);
//			}
//			if (loc + 1 <= MAX) {
//				foot[cnt + 1] = loc + 1;
//				printf("DFS(%d,%d)\n\n", loc + 1, cnt + 1);
//				DFS1(loc + 1, cnt + 1);
//			}
//			if (loc / 2 >= 0) {
//				foot[cnt + 1] = loc / 2;
//				printf("DFS(%d,%d)\n\n", loc / 2, cnt + 1);
//				DFS1(loc / 2, cnt + 1);
//			}
//
//
//			/*if (!visited[loc - 1]&&loc-1>=0) {
//				visited[loc - 1] = true;
//				foot[cnt + 1] = loc - 1;
//				printf("DFS(%d,%d)\n\n",loc-1,cnt+1 );
//				DFS1(loc - 1, cnt + 1);
//				visited[loc - 1] = false;
//
//			}
//			if (!visited[loc + 1]&&loc+1<=MAX) {
//				visited[loc + 1] = true;
//				foot[cnt + 1] = loc + 1;
//				printf("DFS(%d,%d)\n\n", loc + 1, cnt + 1);
//				DFS1(loc + 1, cnt + 1);
//				visited[loc - 1] = false;
//			}
//			if (!visited[loc / 2]&&loc/2>=0) {
//				visited[loc / 2] = true;
//				foot[cnt + 1] = loc / 2;
//				printf("DFS(%d,%d)\n\n", loc/2, cnt + 1);
//				DFS1(loc / 2, cnt + 1);
//				visited[loc - 1] = false;
//			}*/
//			
//		}
//
//		else {
//			if (loc - 1 >= 0) {
//				foot[cnt + 1] = loc - 1;
//				printf("DFS(%d,%d)\n\n", loc - 1, cnt + 1);
//				DFS1(loc - 1, cnt + 1);
//			}
//			if (loc + 1 <= MAX) {
//				foot[cnt + 1] = loc + 1;
//				printf("DFS(%d,%d)\n\n", loc + 1, cnt + 1);
//				DFS1(loc + 1, cnt + 1);
//			}
//
//
//
//			/*if (!visited[loc - 1]&&loc-1>=0) {
//				visited[loc - 1] = true;
//				foot[cnt + 1] = loc - 1;
//				printf("DFS(%d,%d)\n\n", loc - 1, cnt + 1);
//				DFS1(loc - 1, cnt + 1);
//
//			}
//
//			if (!visited[loc + 1]&&loc+1<=MAX) {
//				visited[loc + 1] = true;
//				foot[cnt + 1] = loc + 1;
//				printf("DFS(%d,%d)\n\n", loc + 1, cnt + 1);
//				DFS1(loc + 1, cnt + 1);
//
//			}*/
//			
//
//		}
//
//
//	}
//
//}
//
//
//int main() {
//
//	cin >> s >> b;
//
//
//	visited[s] = true;
//	Q1.push(make_pair(s, 0));
//
//	BFS1();
//
//
//	foot[cnt] = b;
//
//	for (int i = 0; i < MAX; i++) {
//		visited[i] = false;
//	}
//	visited[b] = true;
//	printf("b : %d cnt : %d에서 BFS 시작\n\n", b, cnt);
//	DFS1(b,cnt);
//	
//
//	
//}
//
