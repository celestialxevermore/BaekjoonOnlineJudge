//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//#include<vector>
//
//using namespace std;
//
//vector<int> map[21];
//int CostMap[21][21];
//vector<int> ch(21);
//int TotalCost[21];
//int index = 0;
//int N ,M;
//
//
//void DFS(int vertex, int Cost) {
//
//	//종단점을 설정
//	if (vertex == N) { 
//		//printf("%d \n", Cost);
//		TotalCost[index++] = Cost;
//		return;
//	
//	}
//	else {
//		for (int i = 0; i < map[vertex].size(); i++) {
//			//아직 방문하지 않았다면
//			if (ch[map[vertex][i]] == 0) {
//				ch[map[vertex][i]] = 1; //방문 표시를 해준다.
//				//printf("해당 지점의 경로 값은 %d 입니다.\n", CostMap[vertex][map[vertex][i]]);
//				Cost =Cost+ CostMap[vertex][map[vertex][i]]; //그리고 해당 값을 더해준다.
//				DFS(map[vertex][i], Cost);
//				ch[map[vertex][i]] = 0;
//				Cost = Cost - CostMap[vertex][map[vertex][i]];
//			}
//		}
//	}
//}
//
//
//
//
//int main() {
//
//	scanf("%d %d", &N, &M);
//	int SNode, TNode, PathCost;
//
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d %d", &SNode, &TNode, &PathCost);
//		map[SNode].push_back(TNode);
//		CostMap[SNode][TNode] = PathCost;
//		//printf("좌표 (%d,%d)에 %d가 정상적으로 입력되었습니다.\n", SNode, TNode, PathCost);
//		
//	}
//	ch[1] = 1;
//
//	DFS(1, 0);
//	
//	int min = 10000;
//	
//	for (int i = 0; i < index; i++) {
//		if (min > TotalCost[i]) {
//			min = TotalCost[i];
//		}
//	}
//	
//	printf("%d", min);
//
//
//}
