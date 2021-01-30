//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<algorithm>
//using namespace std;
//
//int map[25][25];
//int visited[25][25];
//int n;
//int dangicnt[25];
//int index = 0;
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,-1,0,-1 };
//
//int sum[25];
//
//void DFS(int rstart, int cstart) {
//	if (rstart < 0 || cstart < 0 || rstart > n - 1 || cstart > n - 1) { return; }
//	
//
//	////사방면으로 탐색을 하는 도중
//	//for (int i = 0; i < 4; i++) {
//	//	//막다른 골목으로 들어간 경우
//	//	if (map[rstart + dx[i]][cstart + dy[i]] == 0 || visited[rstart + dx[i]][cstart + dy[i]] == 1) {
//	//		printf("끝!nn \n");
//	//		//다음으로 넘어가도록 함. 
//	//		return;
//	//	}
//	//	//막다른 골목이 아닌 경우
//	//	else if (map[rstart + dx[i]][cstart + dy[i]] == 1 && visited[rstart + dx[i]][cstart + dy[i]] == 0) {
//	//		visited[rstart + dx[i]][cstart + dy[i]] = 1;
//	//		printf("현재 index의 값 : %d \n", index);
//	//		dangicnt[index]++; 
//	//		printf("현재 집의 개 수 : %d \n", dangicnt[index]);
//	//		//visited[rstart+dx[i]][cstart+dy[i]]=0; 으로 해주면 안됨. 메인에서 나중에 for문 돌때 시작점으로 걸림
//	//		DFS(rstart + dx[i], cstart + dy[i]);
//	//	}
//	//	else { continue; }
//	//}
//	for (int i = 0; i < 4; i++) {
//		if (rstart < 0 || rstart >= n || cstart < 0 || cstart >= n) { continue; }
//		if (map[rstart][cstart] == 1 && visited[rstart][cstart] == 0) {
//			visited[rstart][cstart] = 1;
//			dangicnt[index]++;
//			DFS(rstart, cstart);
//		}
//	}
//
//}
//
//
//int main() {
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//
//	
//	int rstart, cstart;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (map[i][j] == 1 && visited[i][j] == 0) {
//				rstart = i, cstart = j;
//				visited[i][j] = 1;
//				printf("현재 시작점의 좌표 : (%d,%d) \n", i, j);
//				//dangicnt[index] = dangicnt[index] + 1;
//				printf("시작점이므로 (%d,%d)에서 집을 하나 추가해줍니다. \n", rstart, cstart);
//				dangicnt[index]++;
//				DFS(i, j); 
//				//더 이상 돌 구간이 없는 경우 다음 단지를 찾는다.
//				//그 전에 다음 누적값을 구하기 위해 index++를 해주고 넘어간다. 
//				index++;
//			}
//			
//
//		}
//	}
//
//
//	sort(dangicnt, dangicnt + index);
//	for (int i = 0; i < index; i++) {
//		printf("%d ", dangicnt[i]);
//	}
//	printf("\n\n");
//	
//	
//}
