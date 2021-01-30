//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//
//using namespace std;
//
//int TotalCost[21];
//int check[21];
//int N, M;
//int** map;
//int** CostMap;
//int index = 0;
//
//
//void DFS(int vertex, int Cost) {
//	if (vertex == N) {
//		TotalCost[index++] = Cost;
//	}
//	else {
//		//연결되어 있는 점을 찾아야 한다. 이게 젤 단점..
//		for (int i = 1; i < N + 1; i++){
//			//만일 값이 존재하고 해당 부분에 아직 방문을 하지 않았다면
//			if (map[vertex][i] != 0 && check[i] == 0) {
//				check[i] = 1; //방문 표시를 해주고
//				Cost = Cost + map[vertex][i]; //해당값을 전달해준다.
//				DFS(i, Cost); //map[1][2]라 한다면 DFS(2,12)를 전달해준다.
//				//그리고 만일 해당 가지가 모두 종료를 했다면 
//				//해당 가지의 값을 빼줘야 한다.
//				Cost = Cost - map[vertex][i];
//				check[i] = 0; // 그 이후 0표시. 
//
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
//
//	map = (int**)malloc(sizeof(int*) * N + 1);
//	for (int i = 0; i < N + 1; i++) {
//		map[i] = (int*)malloc(sizeof(int) * (N + 1));
//	}
//	/*CostMap = (int**)malloc(sizeof(int*) * N + 1);
//	for (int i = 0; i < N + 1; i++) {
//		CostMap[i] = (int*)malloc(sizeof(int) * (N + 1));
//	}*/
//	//초기화를 한다. 
//	for (int i = 0; i < N + 1; i++) {
//		for (int j = 0; j < N + 1; j++) {
//			map[i][j] = 0;
//			//CostMap[i][j] = 0;
//		}
//	}
//
//	int SNode, TNode, PathCost;
//
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d %d", &SNode, &TNode, &PathCost);
//		map[SNode][TNode] = PathCost;
//		//CostMap[SNode][TNode] = PathCost;
//	}
//	/*for (int i = 0; i < N + 1; i++) {
//		for (int j = 0; j < N + 1; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}*/
//	check[1] = 1;
//	DFS(1, 0);
//	int min = 10000;
//
//	for (int i = 0; i < index; i++) {
//		if (min > TotalCost[i]) {
//			min = TotalCost[i];
//		}
//	}
//	printf("%d", min);
//
//
//}