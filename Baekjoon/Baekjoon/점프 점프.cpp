//#include<iostream>
//#include<vector>
//#include<queue>
//#define N 1000
//using namespace std;
//
//int map[N];
//int n;
//queue<pair<int, int>>Q;
//int flag = 0;
//int res = 0;
//
//void BFS() {
//
//	pair<int, int>cur;
//	while (!Q.empty()) {
//		cur = Q.front();
//		//printf("cur : %d %d", cur.first, cur.second);
//		Q.pop();
//		//printf("next step : %d cnt : %d index : %d \n\n", map[cur.first], cur.second,cur.first);
//		if (cur.first == n) {
//			flag = 1;
//			res = cur.second;
//			return;
//		}
//
//		for (int i = 1; i <= cur.first; i++) {
//			pair<int, int>next;
//			
//			next.first = cur.first + i;
//			next.second = cur.second + 1;
//			Q.push(next);
//		}
//
//
//	}
//	if (flag == 0) {
//		res = -1;
//	}
//	else {
//		return;
//	}
//
//}
//
//
//int main() {
//
//	
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		cin >> map[i];
//	}
//
//	pair<int, int>start;
//	start.first = 1;
//	start.second = 0;
//	Q.push(start);
//	BFS();
//
//	cout << res+1;
//
//}