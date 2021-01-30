//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int Q[101];
//int front = 0, back = 0;
//int ch[11];
//vector <int> Queue[10];
//
//int main() {
//
//	int SNode, TNode;
//
//	for (int i = 1; i <= 6; i++) {
//		scanf("%d %d", &SNode, &TNode);
//		Queue[SNode].push_back(TNode);
//		Queue[TNode].push_back(SNode);
//	}
//	Q[++back] = 1; //큐에 하나 추가
//	ch[1] = 1;
//	
//	while (front < back) {
//		//큐에다 삽입
//		int x = Q[++front];
//		printf("%d \n", x);
//		for (int i = 0; i < Queue[x].size(); i++) {
//			if (ch[Queue[x][i]] == 0) {
//				Q[++back] = Queue[x][i];
//				ch[Queue[x][i]]=1;
//
//			}
//		}
//	}
//
//
//
//}