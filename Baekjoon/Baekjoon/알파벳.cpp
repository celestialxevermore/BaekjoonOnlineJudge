//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//
//using namespace std;
//
//int r, c;
//bool visited[91];
//char** map;
//int distlist[101];
//int distindex = 0;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int maxim = 0;
//
//
//void DFS(int dist,int rstart, int cstart) {
//	
//	//위치 정보를 받습니다. 
//	pair<int, int>vertex;
//	vertex.first = rstart;
//	vertex.second = cstart;
//
//	/*printf("현재 점의 좌표 : (%d,%d) \n\n\n", vertex.first, vertex.second);*/
//	for (int i = 0; i < 4; i++) {
//		//네방향
//		int x = vertex.first + dx[i];
//		int y = vertex.second + dy[i];
//		if (x < 0 || y < 0 || x >= r || y >= c) {
//			/*printf("해당 좌표(%d,%d)는 맵위 위치를 벗어나게 됩니다.\n\n", x, y);*/
//			continue;
//		}
//		//알파벳을 체킹합니다.
//
//		if (visited[(int)map[x][y]] == true) {
//			/*printf("해당 좌표(%d,%d)는 이미 방문하였습니다. \n\n", x, y);*/
//			continue;
//		}
//
//		//만일 방문한 적이 아직 없다면!!
//		if (!visited[(int)map[x][y]]) {
//			//이 쪽을 방문함
//			/*printf("해당 좌표(%d,%d)는 아직 방문한 적이 없으므로 탐색합니다.\n\n", x, y);*/
//			visited[(int)map[x][y]] = true; 
//			
//			DFS(dist+1,x, y);
//			//풀어줘야지 그 다음으로 이동할 수 있다. 
//			visited[(int)map[x][y]] = false;
//		}
//
//
//
//
//	}
//	//자 이 지점이 더이상 갈 곳이 없는 경우에 해당합니다.
//	if (maxim < dist) {
//		maxim = dist;
//	}
////	printf("탐색을 마쳤으므로 종료합니다. 이 경로의 자취 계수는 : %d 입니다. \n\n", dist);
//	return;
//
//
//
//}
//
//int main() {
//
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) {
//		map = (char**)malloc(sizeof(char*) * r);
//	}
//	for (int i = 0; i < r; i++) {
//		map[i] = (char*)malloc(sizeof(char) * c);
//	}
//	for (int i = 0; i < r; i++) {
//		scanf("%s",map[i]);
//	}
//	//for (int i = 0; i < r; i++) {
//	//	printf("%s \n",map[i]);
//	//}
//	
//	pair<int, int> start;
//	start.first = 0;
//	start.second = 0;
//	visited[(int)map[0][0]] = 1;
//	//distlist[distindex]++;
//	//시작점에서 DFS를 돈다. 
//
//
//	DFS(1,start.first, start.second);
//
//
//	printf("%d", maxim);
//
//}