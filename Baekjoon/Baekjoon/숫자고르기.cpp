//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int N;
//
//vector<int>input[101];
//vector<int>ans(101,0);
//bool visited[101];
//
//int check[101];
//int chcnt = 0;
////int ans[101];
//int anscnt = 0;
//
//int target = 0;
//int cnt = 0;
//int maxi = -1;
//void DFS(int start,int level) {
//
//	if (input[start][0] == target && level >= 1) {
//		
//		//printf("target : %d\n\n", target);
//		check[target]++;
//		
//		for (int i = 1; i <= N; i++) {
//			if (check[i] == 1) {
//				cnt++;
//				visited[i] = true;
//				//printf("%d ",i);
//				ans.push_back(i);
//			}
//		}
//		check[target]--;
//		maxi = max(cnt, maxi);
//		cnt = 0;
//		//printf("\n\n");
//
//	}
//	else {
//		for (int i = 0; i < input[start].size(); i++) {
//			
//			if (!visited[input[start][i]]) {
//				visited[input[start][i]] = true;
//				check[input[start][i]]++;
//				level++;
//				//printf("next DFS(%d,%d)\n\n", input[start][i], level);
//				DFS(input[start][i], level);
//				visited[input[start][i]] = false;
//				check[input[start][i]]--;
//			}
//
//		}
//	}
//
//	
//
//
//}
//
//
//int main() {
//
//	cin >> N;
//	
//	for (int i = 1; i <= N; i++) {
//		int a;
//		cin >> a;
//		input[i].push_back(a);
//		if (i == a) {
//			visited[a] = true;
//			check[a]++;
//			//cnt++;
//			//printf("current cnt : %d\n\n", cnt);
//		}
//	}
//
//	for (int i = 1; i <= N; i++) {
//		if (!visited[i]) {
//			visited[i] = true;
//			
//			target = i;
//			//printf("start : <<<<<DFS(%d %d)>>>>>\n", i,0);
//			DFS(i,0);
//		}
//
//	}
//	
//	
//
//
//	/*for (int i = 1; i <= 100; i++) {
//		if (check[i] != 0) {
//			ans[chcnt++] = i;
//		}
//	}*/
//
//
//	printf("%d\n",maxi);
//	
//	for (int i = 0; i < ans.size(); i++) {
//		if (ans[i] != 0) {
//			printf("%d\n", ans[i]);
//		}
//	}
//	
//
//}