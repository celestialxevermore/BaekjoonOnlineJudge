//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<set>
//#define N 6
//using namespace std;
//
//int map[N][N];
//char charmap[N][N];
//
//vector<string>res(10000);
//
//int dx[] = { 0,1,-1,0 };
//int dy[] = { 1,0,0,-1 };
//
//set<string>resset;
//
//void DFS(int x, int y, string str, int length) {
//
//	if (length == 6) {
//		//cout << "cur str :" << str << endl;
//		resset.insert(str);
//		return;
//
//	}
//	else {
//
//		for (int i = 0; i < 4; i++) {
//			int nextx = x + dx[i];
//			int nexty = y + dy[i];
//
//			if (nextx >= 1 && nextx < N && nexty >= 1 && nexty < N) {
//				str += charmap[nextx][nexty];
//				
//				DFS(nextx, nexty, str, str.length());
//
//				str.pop_back();
//
//			}
//
//
//		}
//
//
//
//
//
//
//	}
//
//
//}
//
//
//int main() {
//
//
//
//
//
//	for (int i = 1; i < N; i++) {
//		for (int j = 1; j < N; j++) {
//			cin >> map[i][j];
//		}
//	}
//	
//
//
//	for (int i = 1; i < N; i++) {
//		
//		for (int j = 1; j < N; j++) {
//			charmap[i][j] = map[i][j]+'0';
//		}
//
//
//	}
//	
//
//	for (int i = 1; i < N; i++) {
//		for (int j = 1; j < N; j++) {
//
//			int x = i;
//			int y = j;
//			string str = "";
//			str += charmap[x][y];
//			//cout << "cur str :"  << str << endl;
//			DFS(x, y, str, str.length());
//
//		}
//	}
//
//
//
//	cout << resset.size() << endl;
//
//
//}
