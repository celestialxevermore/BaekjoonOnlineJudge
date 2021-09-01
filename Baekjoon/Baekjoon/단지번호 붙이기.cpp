//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//#include<queue>
//using namespace std;
//
//int N;
//
//char map[26][26];
//
//bool visited[26][26];
//int cnt = 0;
//int res[10000] = { 0, };
//int rescnt = 0;
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//queue<pair<int, int>>Q;
//
//
//void BFS() {
//
//
//	pair<int, int>current;
//
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.first + dx[i];
//			int y = current.second + dy[i];
//
//			if (x >= 1 && x <= N && y >= 1 && y <= N && map[x][y] == '1' && !visited[x][y]) {
//				visited[x][y] = true;
//				res[cnt]++;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				Q.push(next);
//			}
//
//		}
//
//
//	}
//
//	cnt++;
//}
//
//
//int main() {
//	
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		string a;
//
//		cin >> a;
//
//		for (int j = 0; j < a.size(); j++) {
//
//			map[i + 1][j + 1] = a[j];
//		}
//
//
//	}
//	//for (int i = 1; i <= N; i++) {
//	//	for (int j = 1; j <= N; j++) {
//	//		printf("%c ", map[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (map[i][j] == '1' && !visited[i][j]) {
//				res[cnt]++;
//				visited[i][j] = true;
//				pair<int, int>start;
//				start.first = i;
//				start.second = j;
//				Q.push(start);
//				
//				BFS();
//				
//			}
//		}
//	}
//
//	sort(res, res + cnt);
//	printf("%d\n", cnt);
//	for (int i = 0; i < cnt; i++) {
//		printf("%d\n", res[i]);
//	}
//}