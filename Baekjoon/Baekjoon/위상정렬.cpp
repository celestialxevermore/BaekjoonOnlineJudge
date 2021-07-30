//#include<iostream>
//#include<vector>
//#include<queue>
//#define MAX 10000
//using namespace std;
//
//int n, m;
//
//
//vector<int>work[MAX];
//vector<int>degree(MAX);
//bool visited[MAX];
//
//queue<int>Q;
//
//int res[1000];
//int rescnt = 0;
//void func() {
//
//	int current;
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//		res[rescnt++] = current;
//		
//		for (int i = 0; i < work[current].size(); i++) {
//			
//			degree[work[current][i]]--;
//			if (degree[work[current][i]] == 1) { degree[i]--;
//			if (degree[i] == 0) {
//				Q.push(i);
//			}
//			}
//		}
//	}
//
//	
//}
//int main() {
//
//	cin >> n >> m;
//
//	for (int i = 1; i <= m; i++) {
//		int snode, tnode;
//		cin >> snode >> tnode;
//		work[snode].push_back(tnode);
//	}
//	/*for (int i = 1; i <= n; i++) {
//		printf("%d : ", i);
//		for (int j = 0; j < work[i].size(); j++) {
//			printf("%d ", work[i][j]);
//		}
//		printf("\n");
//	}*/
//
//
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 0; j < work[i].size(); j++) {
//			degree[work[i][j]]++;
//		}
//
//	}
//	
//
//	
//	/*int flag = 0;
//	while (1) {
//		if (flag == 1) { break; }
//		int total = 0;
//			for (int i = 1; i <= n; i++) {
//				total += degree[i];
//			}
//			if (total > 0) {
//				for (int j = 1; j <= n; j++) {
//					if (degree[j] == 0&&!visited[j]) {
//						visited[j] = true;
//						
//						Q.push(j);
//						func();
//					}
//				}
//			}
//			else {	
//				flag = 1;
//			}
//	}
//	for (int i = 1; i <= n; i++) {
//		if (!visited[i]) {
//			res[rescnt++] = i;
//		}
//	}
//	for (int i = 0; i < rescnt; i++) {
//		printf("%d ", res[i]);
//	}*/
//
//
//	for (int i = 1; i <= n; i++) {
//		if (degree[i] == 0) {
//			Q.push(i);
//		}
//	}
//
//	for (int i = 0; i < rescnt; i++) {
//		printf("%d ", res[i]);
//	}
//
//}
//
