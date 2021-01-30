//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<stdio.h>
//using namespace std;
//
//
//int Q[101];
//int front = 0, back = 0;
//int ch[101];
//int N, M;
//vector <int> Queue[101];
//int PathCost[101];
//int target = 2;
//
//int main() {
//
//	scanf("%d %d", &N, &M);
//
//	int SNode, TNode;
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d", &SNode, &TNode);
//		Queue[SNode].push_back(TNode);
//	}
//
//
//	/*for (int i = 0; i < N+1; i++) {
//		for (int j = 0; j < Queue[i].size(); j++) {
//			printf("%d ", Queue[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	//최초 시작점을 설정
//	ch[1] = 1;
//	Q[++back] = 1;
//	int current;
//	
//	while (front < back) {
//		current = Q[++front]; //현재 1
//		for (int i = 0; i < Queue[current].size(); i++) {
//			//먼저 한 번만에 갈 수 있는 정점 판단
//			if (ch[Queue[current][i]] == 0) { //아직방문하지 않았다면
//				Q[++back] = Queue[current][i]; //뒤에 추가를 한다. 
//				ch[Queue[current][i]]=1; //그리고 방문처리를 해준다.
//				//이게 맞는건지 궁금합니다.
//				PathCost[Queue[current][i]] = PathCost[current] + ch[Queue[current][i]];
//			
//			}
//			
//		}
//	}
//	
//
//	for (int i = 2; i < N + 1; i++) {
//		printf("%d : %d \n", i, PathCost[i]);
//	}
//
//
//}