//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//int N;
//string ans[4];
//int cnt = 0;
//vector<char> map[101];
//
//void DFS1(char cur) {
//	
//
//	ans[cnt].push_back(cur);
//	for (int i = 0; i < map[cur].size(); i++) {
//		if (map[cur][i] != '.') {
//				
//			DFS1(map[cur][i]);
//		}
//	}
//}
//void DFS2(char cur) {
//
//	if (map[cur][0] != '.') {
//		DFS2(map[cur][0]);
//	}
//	ans[cnt].push_back(cur);
//	if (map[cur][1] != '.') {
//		DFS2(map[cur][1]);
//	}
//
//}
//
//void DFS3(char cur) {
//
//	for (int i = 0; i < map[cur].size(); i++) {
//		if (map[cur][i] != '.') {
//
//			DFS3(map[cur][i]);
//		}
//	}
//	ans[cnt].push_back(cur);
//}
//
//
//
//int main() {
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		
//			char start, left, right;
//			cin >> start >> left >> right;
//			//cout << "left : "<< left << " right : " << right << "\n\n";
//			map[start].push_back(left);
//			map[start].push_back(right);
//			
//	
//	}
//	
//
//
//
//	DFS1('A');
//	cout << ans[cnt]<<'\n';
//	cnt++;
//
//	DFS2('A');
//	cout << ans[cnt]<<'\n';
//	cnt++;
//
//	DFS3('A');
//	cout << ans[cnt] <<'\n';
//}