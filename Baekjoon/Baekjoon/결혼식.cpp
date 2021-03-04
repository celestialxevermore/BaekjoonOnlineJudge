//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<queue>
//#define MAX 501
//using namespace std;
//
//int n, m;
//
//vector<int>fr[MAX];
//bool visited[MAX];
//int relation[MAX];
//int relationcnt = 0;
//queue<int>Q;
//
//
//void BFS() {
//	int current;
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//		for (int i = 0; i < fr[current].size(); i++) {
//			if (!visited[fr[current][i]]) {
//				visited[fr[current][i]] = true;
//				relation[fr[current][i]] = relation[current] + 1;
//				Q.push(fr[current][i]);
//			}
//		}
//	}
//
//	for (int i = 2; i <= n; i++) {
//		if (relation[i] == 1 || relation[i] == 2) {
//			relationcnt++;
//		}
//	}
//}
//
//
//int main() {
//	cin >> n;
//	cin >> m;
//
//
//	for (int i = 0; i < m; i++) {
//		int snode, tnode;
//		cin >> snode >> tnode;
//		fr[snode].push_back(tnode);
//		fr[tnode].push_back(snode);
//	}
//
//	Q.push(1);
//	relation[1] = 0;
//	BFS();
//
//	cout << relationcnt;
//
//
//
//}