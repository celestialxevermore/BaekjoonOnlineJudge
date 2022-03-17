//#include<iostream>
//#include<vector>
//#include<string>
//#include<set>
//using namespace std;
//
//char map[6][6];
//int res = 0;
//
//int dx[] = {1,-1,0,0};
//int dy[] = { 0,0,1,-1 };
//
//vector<string>end(10000);
//set<string> ss;
//
//
//
//
//
//void DFS(pair<int, int>start, string str) {
//
//	if (str.length() == 6) {
//		//cout << str << endl;
//		ss.insert(str);
//		return;
//	}
//	else {
//
//		for (int i = 0; i < 4; i++) {
//			int nx = start.first + dx[i];
//			int ny = start.second + dy[i];
//
//
//			if (nx >= 1 && nx <= 5 && ny >= 1 && ny <= 5) {
//				str += map[nx][ny];
//				pair<int, int>next;
//				next.first = nx;
//				next.second = ny;
//				DFS(next, str);
//				str.pop_back();
//			}
//		}
//
//
//
//	}
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
//
//	for (int i = 1; i <= 5; i++) {
//		for (int j = 1; j <= 5; j++) {
//			cin >> map[i][j];
//		}
//	}
//	
//
//	for (int i = 1; i <= 5; i++) {
//		for (int j = 1; j <= 5; j++) {
//			string str = "";
//			str += map[i][j];
//			pair<int, int>start;
//			start.first = i;
//			start.second = j;
//			DFS(start, str);
//		}
//	}
//
//	cout << ss.size() << endl;
//}