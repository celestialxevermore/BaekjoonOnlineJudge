//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#define MAX 1001
//using namespace std;
//
//
//int T;
//int N, M;
//vector<int>nation[MAX];
//bool visited[MAX];
//vector<int>minis(MAX, 100001);
//int minicnt = 0;;
//int candi = 0;
//
//void DFS(pair<int, int> start) {
//
//	int criterion = start.first;
//	int cnt = start.second;
//	printf("current nation : %d cnt : %d \n", criterion, cnt);
//	for (int i = 0; i < nation[criterion].size(); i++) {
//
//		if (!visited[nation[criterion][i]]) {
//			visited[nation[criterion][i]] = true;
//			pair<int, int>next;
//			next.first = nation[criterion][i];
//			next.second = cnt + 1;
//			DFS(next);
//			visited[nation[criterion][i]] = false;
//		}
//
//	}
//
//	candi = cnt;
//	printf("candi : %d", candi);
//}
//
//
//
//int main() {
//
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//
//		cin >> N >> M;
//		
//		candi = 0;
//
//		for (int j = 0; j < M; j++) {
//			int st, en;
//			cin >> st >> en;
//
//			nation[st].push_back(en);
//		}
//		//각 국가부터 시작한다. 
//		for (int k = 1; k <= N; k++) {
//			
//			if (nation[k].size() != 0) {
//				int cnt = 0;
//				pair<int, int>start;
//				//visited[start.first] = true;
//				start.first = k; start.second = cnt;
//				printf("start nation : %d start cnt : %d\n", start.first, start.second);
//				DFS(start);
//			}
//			
//
//		}
//		
//		minis[minicnt] = min(minis[minicnt], candi);
//		minicnt++;
//		candi = 0;
//
//
//	}
//	
//	for (int i = 0; i < minicnt; i++) {
//		cout << minis[i] << endl;
//	}
//	
//
//
//}