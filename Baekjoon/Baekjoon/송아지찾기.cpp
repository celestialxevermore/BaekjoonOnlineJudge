//#include<stdio.h>
//#include<vector>
//#include<iostream>
//#include<queue>
//#define MAX 10001
//using namespace std;
//
//int S, E;
//int place[MAX];
//bool visited[MAX];
//
//queue<pair<int, int>>Q;
//int dx[3] = { 1,-1,5 };
//
//void BFS(pair<int, int>start) {
//	pair<int, int> current;
//	
//	while (!Q.empty()) {
//		current.first = Q.front().first;
//		current.second = Q.front().second;
//		Q.pop();
//		if (current.first == E) {
//			printf("%d", current.second);
//		}
//
//		for (int i = 0; i < 3; i++) {
//			int x = current.first + dx[i];
//
//			if (x < 0 || x >= MAX) {
//				continue;
//			}
//			if (!visited[x] && place[x] == 0) {
//				visited[x] = true;
//				place[x] = 1;
//				pair<int, int>next;
//				next.first = x;
//				next.second = current.second;
//				next.second++;
//				Q.push(next);
//			}
//
//
//		}
//
//
//
//
//	}
//
//
//
//}
//
//int main() {
//
//
//	cin >> S >> E;
//
//	pair<int, int>start;
//	start.first = S;
//	start.second = 0;
//	Q.push(start);
//	BFS(start);
//
//
//
//}
