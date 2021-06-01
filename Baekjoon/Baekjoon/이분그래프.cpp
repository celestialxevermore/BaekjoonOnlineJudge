//#include<iostream>
//#include<vector>
//#include<queue>
//#define MAX 200001
//using namespace std;
//
//
//int K, V, E;
//
//int res[MAX];
//bool visited[MAX];
//
//
//int flag = 0;
//vector<string> ans(MAX);
//int anscnt = 0;
//int dest = 0;
//int cnt_ = 0;
//
//void DFS(int start, int cnt_, vector<int>map[MAX]) {
//
//	if (cnt_ != 0 && start == dest) {
//		flag = 1;
//		return;
//	}
//	else {
//		for (int i = 0; i < map[start].size(); i++) {
//			///printf("nextnode :%d\n\n", map[start][i]);
//			if (visited[map[start][i]]) {
//				flag = 1;
//			}
//			if (!visited[map[start][i]]) {
//				visited[map[start][i]] = true;
//				cnt_ = cnt_ + 1;
//				//printf("DFS(%d,%d)\n\n",map[start][i],cnt_);
//				DFS(map[start][i], cnt_,map);
//			}
//		}
//	}
//
//}
//
//int main() {
//
//	cin >> K;
//
//
//	int start = 0;
//	while (start < K) {
//
//		cin >> V >> E;
//		vector<int>map[MAX];
//		for (int i = 0; i < E; i++) {
//			int snode, tnode;
//			cin >> snode >> tnode;
//			map[snode].push_back(tnode);
//		}
//	
//		for (int i = 1; i <= V; i++) {
//			visited[i] = true;
//			dest = i;
//			//printf("start : DFS(%d,%d)\n\n",i,cnt_ );
//			DFS(i, cnt_,map);
//			cnt_ = 0;
//			for (int j = 0; j < MAX; j++){
//				visited[j] = false;
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
//		if (flag == 1) {
//			ans[anscnt++] = "NO";
//		}
//		else {
//			ans[anscnt++] = "YES";
//		}
//
//		flag = 0;
//		dest = 0;
//		//printf("phase %d is ended\n\n", start+1);
//		start++;
//
//	}
//
//	for (int i = 0; i < anscnt; i++) {
//		cout << ans[i] << endl;
//	}
//
//
//}