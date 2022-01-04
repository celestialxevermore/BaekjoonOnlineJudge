//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int N;
//int input[101];
//int rescnt = 0;
//
//vector<int>res(101);
//int start = 0;
//
//int maxdepth = -1;
//
//void DFS(int current,int depth) {
//	if (current == start && maxdepth < depth) {
//		
//	}
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
//		int a;
//		cin >> a;
//		input[i] = a;
//
//	}
//	
//	
//	for (int i = 1; i <= N; i++) {
//
//		if (input[i] == i) {
//			continue;
//		}
//		else {
//			start = i;
//			int depth = 0;
//			DFS(start,depth);
//		}
//	}
//
//	for (int i = 1; i <= N; i++) {
//		if (i == input[i]) {
//			int flag = 0;
//			for (int j = 0; j < res.size(); j++) {
//				if (i == res[j]) {
//					flag = 1;
//					break;
//				}
//
//			}
//			if (flag == 0) {
//				res.push_back(i);
//			}
//		}
//	}
//
//}