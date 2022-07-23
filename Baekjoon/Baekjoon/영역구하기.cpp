//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int n, m, sectorcount;
//int map[101][101];
//bool visited[101][101];
//int space[101];
//int indexforspace = 0;
//
//
//int dx[4] = { -1,1,0,0 };A
//int dy[4] = { 0,0,1,-1 };
//
//
//void DFS(int rstart, int cstart) {
//	if (rstart < 0 || cstart < 0 || rstart >= n || cstart >= m) { return; }
//	else {
//
//		for (int i = 0; i < 4; i++) {
//			int x = rstart + dx[i];
//			int y = cstart + dy[i];
//			
//			//지도 범위를 벗어나는 경우
//			if (x < 0 || y < 0 || x >= n || y >= m) { /*printf("해당 좌표 (%d,%d)는 맵을 벗어납니다. \n\n", x, y);*/  continue; }
//
//
//
//			//막다른 길인 경우
//			if (map[x][y] == 1) {/* printf("해당 좌표 (%d,%d)는 막다른 길입니다. \n\n", x, y);*/ continue; }
//			if(visited[x][y]==true){ /*printf("해당 좌표 (%d,%d)는 막다른 길입니다. \n\n", x, y);*/ continue; }
//			//옆에 길이 있는 경우, 그리고 그 길을 아직 방문하지 않은 경우
//			if (map[x][y] == 0 && !visited[x][y]) {
//				//방문표시를 한다.
//				visited[x][y] = true;
//				map[x][y] = 1; //그거를 추가해준다.
//				//printf("해당 좌표 (%d,%d)에서 이동합니다.\n\n", x, y);
//				space[indexforspace]=space[indexforspace]+map[x][y];
//				//방문을 했으니 추가해줌
//				/*printf("현재까지의 넓이계수 : %d \n\n", space[indexforspace]);
//				printf("DFS(%d,%d) 시작 \n",x,y);*/
//				DFS(x, y);
//			}
//		}
//	}	
//}
//int main() {
//
//	cin >> n >> m >> sectorcount;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			map[i][j] = 0;
//		}
//	}
//
//
//	for (int i = 0; i < sectorcount; i++) {
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//
//		//직사각형의 좌하단 꼭지점과 우상단 꼭지점이 주어졌으므로 
//		for (int y = y1; y < y2; y++) {
//			for (int x = x1; x < x2; x++) {
//				map[y][x] = 1;
//			}
//			for (int x = x1; x < x2; x++) {
//				visited[x][y] = false;
//			}
//
//
//		}
//
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (map[i][j] == 0) {
//				space[indexforspace]++;
//				visited[i][j] = true;
//				DFS(i, j);
//				indexforspace++;
//			}
//		}
//	}
//	printf("%d \n",indexforspace);
//	sort(space, space + indexforspace);
//	for (int i = 0; i < indexforspace; i++) {
//		printf("%d ",space[i]);
//	}
//	return 0;
//}