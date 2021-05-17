//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#define MAX 100000
//using namespace std;
//
//queue<pair<int, int>>Q;
//int A, B;
//
//int module1(int a) {
//	return a * 2;
//}
//int module2(int a) {
//	return (a * 10 + 1);
//}
//int ans = 0; 
//
//bool visited[MAX];
//int flag = 0;
//
//void BFS() {
//
//	pair<int, int>current;
//
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//
//		int next1 = module1(current.first);
//		int next2 = module2(current.first);
//		
//		/*printf("%d %d\n\n", next1, current.second);
//		printf("%d %d\n\n", next2, current.second);*/
//
//		int candis[2] = { next1,next2 };
//
//		if (next1 > B && next2 > B) {
//			//이미 여기에선 더 돌아봤자 답안나옴.
//			flag = 1;
//		}
//
//		else {
//
//			for (int i = 0; i < 2; i++) {
//				if (candis[i] == B) {
//					flag = 2;
//					ans = current.second + 1;
//					return;
//				}
//
//			}
//
//
//			for (int i = 0; i < 2; i++) {
//
//				int candi = candis[i];
//				int cnt = current.second + 1;
//
//				if (!visited[candi] && candi <= MAX) {
//					visited[candi] = true;
//					pair<int, int>next;
//					next.first = candi;
//					next.second = cnt;
//					Q.push(next);
//
//				}
//			}
//
//		}
//		
//		
//
//	}
//	
//
//}
//int main() {
//
//
//	cin >> A >> B;
//	//printf("%llf", pow(10, 9));
//
//
//	pair<int, int>start;
//	start.first = A;
//	start.second = 0;
//
//	Q.push(start);
//	visited[start.first] = true;
//	BFS();
//
//
//	if (flag == 1) {
//		printf("-1");
//	}
//	else {
//
//		printf("%d", ans + 1);
//
//	}
//}