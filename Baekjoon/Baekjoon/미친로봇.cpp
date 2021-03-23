//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<stack>
//using namespace std;
//
//
//
////¹æÇâ, È®·ü,¹æ¹®¿©ºÎ
//vector<pair<int, int>>dir[4];
//stack<char> s;
//int n;
//int map[51][51];
//bool visited[51][51];
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//int expcnt = 0;
//int ex = 1;
//void DFS(pair<int, int>start,int cnt) {
//
//	int x = start.first;
//	int y = start.second;
//
//
//
//	if (cnt == n) {
//		return;
//	}
//	else {
//
//		if (visited[x][y]) {
//
//			while (!s.empty()) {
//
//
//
//			}
//
//
//		}
//
//		//µ¿
//		if (!visited[x][y + 1]) {
//
//			visited[x][y + 1] = true;
//			s.push('E');
//			pair<int, int>next;
//			next.first = x;
//			next.second = y + 1;
//			cnt++;
//
//			expcnt += dir[0][0].second;
//
//			DFS(next, cnt);
//		}
//		//¼­
//		if (!visited[x][y - 1]) {
//			visited[x][y + 1] = true;
//			s.push('W');
//			pair<int, int>next;
//			next.first = x;
//			next.second = y - 1;
//			cnt++;
//			expcnt += dir[1][0].second;
//			DFS(next, cnt);
//
//		}
//		//³²
//		if (!visited[x+1][y]) {
//			visited[x + 1][y] = true;
//			s.push('S');
//			pair<int, int>next;
//			next.first = x + 1;
//			next.second = y;
//			cnt++;
//			expcnt += dir[2][0].second;
//			DFS(next, cnt);
//		}
//		//ºÏ
//		if (!visited[x - 1][y]) {
//			visited[x - 1][y] = true;
//			s.push('N');
//			pair<int, int>next;
//			next.first = x - 1;
//			next.second = y;
//			cnt++;
//			expcnt += dir[3][0].second;
//			DFS(next, cnt);
//		}
//
//	}
//	
//
//
//
//
//}
//
//int main() {
//
//	cin >> n;
//	//µ¿¼­³²ºÏ È®·ü ÀúÀå
//	for (int i = 0; i < 4; i++) {
//		int per;
//		int ex;
//		cin >> per;
//		if (per > 0 && per < 10) {
//			ex = 1;
//			dir[i].push_back(make_pair(per, ex));
//		}
//		if (per > 10) {
//			ex = 2;
//			dir[i].push_back(make_pair(per,ex));
//		}
//
//	}
//	
//
//	pair<int, int>start;
//	start.first = 25;
//	start.second = 25;
//	visited[start.first][start.second] = true;
//	DFS(start,0);
//
//
//}
//
//
