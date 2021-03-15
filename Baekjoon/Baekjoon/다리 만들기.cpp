//#include<stdio.h>
//#include<iostream>
//using namespace std;
//
//#include<queue>
//#include<vector>
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//
//
//int N;
//
//
//int map[101][101];
//int test[101][101];
//bool visited[101][101];
//
//queue<pair<int, int>,int> Q;
//queue<pair<int, int>, int>Q2;
//
//
//pair<pair<int, int>, int> adjacent[1001];
//int ai = 0;
//void BFS1() {
//
//	pair<pair<int, int>, int>current;
//
//	
//	while (!Q.empty()) {
//
//		current.first.first = Q.front().first.first;
//		current.first.second = Q.front().first.second;
//		current.second = Q.front().second;
//		Q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.first.first + dx[i];
//			int y = current.first.second + dy[i];
//
//
//			if (map[x][y] == 0) {
//				pair<pair<int, int>, int>n;
//				n.first.first = x;
//				n.first.second = y;
//				n.second = current.second;
//				adjacent[ai++] = n;
//				continue;
//			}
//			if (x<1 || y<1 || x>N || y>N) { continue; }
//			if (visited[x][y]) { continue; }
//			if (map[x][y] == 1 && !visited[x][y]) {
//				visited[x][y] = true;
//				pair<pair<int, int>, int>next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = current.second;
//
//				Q.push(next);
//
//			}
//
//		}
//
//
//
//	}
//}
//
//void BFS2() {
//	pair<pair<int, int>, int>current;
//		
//	
//		for (int i = 0; i < ai; i++) {
//			Q2.push(adjacent[i]);
//		//pair<pair<int, int>, int>current = adjacent[i];
//		/*current.first.first = Q2.front().first.first;
//		current.first.second = Q2.front().first.second;
//		current.second = Q2.front().second;*/
//		}
//
//		while (!Q2.empty()) {
//			
//			current.first.first = Q2.front().first.first;
//			current.first.second = Q2.front().first.second;
//			current.second = Q2.front().second;
//			Q.pop();
//
//			for (int i = 0; i < 4; i++) {
//				int x = current.first.first + dx[i];
//				int y = current.first.second + dy[i];
//
//
//				if (map[x][y] == 1&&visited[x][y]) { continue; }
//				if (visited[x][y]) { continue; }
//				if (!visited[x][y] && map[x][y] == 0) {
//					visited[x][y] = true;
//					pair<pair<int, int>, int>next;
//					next.first.first = x;
//					next.first.second = y;
//					next.second = current.second;
//					next.second++;
//					Q2.push(next);
//				}
//
//				if (!visited[x][y] && map[x][y] == 1) {
//
//				}
//
//
//
//			}
//
//			
//
//
//
//
//
//
//		}
//
//
//
//
//}
//
//
//
//int main() {
//
//	cin >> N;
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//
//			if (!visited[i][j] && map[i][j] == 1) {
//				visited[i][j] = true;
//				pair<pair<int, int>, int>start;
//				start.first.first = i;
//				start.first.second = j;
//				start.second = 0;
//				Q.push(start);
//				BFS1();
//				BFS2();
//
//			}
//
//
//		}
//	}
//
//
//
//
//
//}