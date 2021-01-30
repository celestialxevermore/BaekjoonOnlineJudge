//#include<stdio.h>
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int N, M, H;
//
//bool Line[1001][1001];
//int Map[1001][1001];
//int LeftorRight[2] = { -1,1 };
//bool visited[1001][1001];
//
//void DFS(int r, int c) {
//	
//	if (r == M) { printf("종료했습니다. 현재 점의 위치 : (%d,%d), %d입니다.\n",r,c,c); return; }
//
//
//	//만일 주욱 내려오다가 선이 이어진 것을 확인하면?
//	if (Line[r][c]) {
//		for (int i = 0; i < 2; i++) {
//			if (c + LeftorRight[i] <= 0 || c + LeftorRight[i] > N) {
//				printf("(%d,%d) : 해당 점은 이어져 있으나 사다리 범위를 벗어나므로 탐색을 종료합니다.\n\n", r, c + LeftorRight[i]);
//				continue;
//			}
//
//
//
//		}
//		//만일 선이 이어져 있지 않음을 발견한다면?
//		if (!Line[r][c]) {
//			DFS(r + 1, c);
//		}
//
//
//
//	}
//}
//
//int main() {
//
//	cin >> N >> M >> H;
//	int rForLine, cForLine;
//
//	//놓을 수 있는 가로선의 기본 개수 
//	for (int i = 0; i < M; i++) {
//		cin >> rForLine >> cForLine;
//		Line[rForLine][cForLine] =true;
//		Line[rForLine][cForLine + 1] = true;
//		
//		//가로선을 이어주기 위해
//	}
//
//	//그다음 세로줄의 개수 만큼 DFS를 돌려준다.
//	/*for (int i = 1; i < N + 1; i++) {
//		DFS(1, i);
//	}*/
//	DFS(1, 1);
//
//}
