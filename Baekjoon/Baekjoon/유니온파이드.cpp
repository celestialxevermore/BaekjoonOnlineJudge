//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//
//int N, M;
//int friends[1001];
//
//int Find(int a) {
//	if (a == friends[a]) return a;
//	else {
//		return Find(friends[a]);
//	}
//}
//
//
//
//void Union(int snode, int tnode) {
//
//	int sn = Find(snode);
//	int tn = Find(tnode);
//
//	if (sn != tn) {
//		friends[snode] = tnode;
//	}
//
//
//}
//
//
//
//int main() {
//
//
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; i++) {
//		friends[i] = i;
//	}
//
//
//	for (int i = 0; i < M; i++) {
//		int snode, tnode;
//		cin >> snode >> tnode;
//
//		Union(snode, tnode);
//	}
//
//
//}