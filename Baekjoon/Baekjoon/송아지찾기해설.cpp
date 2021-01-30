//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//int ch[10001];
//int dir[3] = { 1,-1,5 };
//int main() {
//	int start, end;
//
//	int pos;
//
//	queue<int> Q;
//
//	scanf("%d %d", &start, &end);
//	ch[start] = 1;
//	Q.push(start);
//	while (!Q.empty()) {
//		int x = Q.front();
//		Q.pop();
//		for (int i = 0; i < 3; i++) {
//			pos = x + dir[i];
//			if (pos <= 0 || pos >= 10001)continue;
//			if (pos == end) {
//				printf("%d \n", ch[x]);
//				exit(0);
//			}
//			else if (ch[pos] == 0) {
//				ch[pos] = ch[x] + 1;
//				Q.push(pos);
//			}
//
//
//
//		}
//	}
//}