//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#define MAX 100001
//using namespace std;
//
//
//
//vector<int>stu[MAX];
//bool visited[MAX];
//int ans[MAX];
//
//int T;
//int n;
//int start;
//int frcnt = 0;
//int tmpcnt = 0;
//
//
//void DFS(int current) {
//	
//	if (start == current) {
//		frcnt += tmpcnt;
//	}
//
//	for (int i = 0; i < stu[current].size(); i++) {
//		
//		if (current == stu[current][i]) {
//	
//			return;
//		}
//		
//		if (!visited[stu[current][i]]) {
//			visited[stu[current][i]] = true;
//			tmpcnt++;
//
//			DFS(stu[current][i]);
//		}
//	}
//
//}
//
//int main() {
//
//
//	cin >> T;
//
//	int s = 0;
//	for (s = 0; s < T; s++) {
//
//		int input;
//		cin >> input;
//		for (int i = 1; i <= input; i++) {
//			int tnode;
//			cin >> tnode;
//			stu[i].push_back(tnode);
//		}
//		for (int i = 1; i <= input; i++) {
//			if (i == stu[i][0]) {
//				
//				frcnt++;
//			}
//			else {
//				start = i;
//				DFS(i);
//			}
//		}
//
//		int ans_ = input - frcnt;
//		ans[s] = ans_;
//
//		frcnt = 0;
//		tmpcnt = 0;
//		
//	}
//
//	for (int i = 0; i < s; i++) {
//		printf("%d\n", ans[i]);
//	}
//
//
//}
