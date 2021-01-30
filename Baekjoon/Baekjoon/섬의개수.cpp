//#include<stdio.h>
//#include<vector>
//#include<iostream>
//#include<stdlib.h>
//#include<queue>
//using namespace std;
//
//int w = -1, h = -1;
//
//queue<pair<int, int>> Q;
//
//vector <int> island[100];
//int islandcnt = 0;
//int map[51][51];
//bool visited[51][51];
//bool caseforone= false;
//
//
//int dx[8] = { 1,-1,0,0,1,1,-1,-1};
//int dy[8] = { 0,0,1,-1,-1,1,-1,1};
//
//
//void BFS(pair<int, int> start) {
//
//
//	while (!Q.empty()) {
//		pair<int, int>current;
//		current.first=Q.front().first;
//		current.second = Q.front().second;
//		/*printf("(%d,%d) : 현재 지점에서 시작합니다. \n\n",current.first,current.second);*/
//
//		Q.pop();
//		for (int i = 0; i < 8; i++) {
//			int x = current.first + dx[i];
//			int y = current.second + dy[i];
//
//			if (x < 0 || y < 0 || x >= h || y >= w) { /*printf("(%d,%d) : 해당지점은 지도 범위 밖입니다.탐색을 종료합니다. \n\n", x, y); */continue; }
//			if (visited[x][y]) {/* printf("(%d,%d) : 해당 지점은 방문한 적이 있습니다. 탐색을 종료합니다. \n\n", x, y);*/ continue; }
//			if (map[x][y] == 0) {
//				/*printf("(%d,%d) : 해당 지점은 바다에 해당합니다.\n\n", x, y);*/
//				continue;
//			}
//			if (map[x][y] == 1 && !visited[x][y]) {
//				/*printf("(%d,%d) : 해당 지점은 섬 영역에 해당하므로 탐색을 계속합니다. \n\n", x, y);*/
//				visited[x][y] = true;
//				
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				Q.push(next);
//
//			}
//
//		}
//		
//	}
//	
//}
//
//
//
//int main() {
//
//	
//
//
//	while (w != 0 && h != 0) {
//
//		cin >> w >> h;
//		//일단 받습니다.
//		if (w == 0 && h == 0) { break; }
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				cin >> map[i][j];
//			}
//		}
//		//0만 있게되면 0을 출력해야하기 때문에
//		//그 여부를 먼저 검사합니다. 
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				if(map[i][j]==0){}
//				
//				if (map[i][j] != 0) {
//					caseforone = true; break;
//					//1이 존재한다.
//				}
//			}
//		}
//		//1이 전혀 없는 경우 
//		if (!caseforone) {
//			/*printf("1이 없으므로 섬이 없습니다. 탐색을 종료합니다. \n\n");*/
//			island[islandcnt].push_back(0); //아무것도 없으니까 그걸 저장한다.
//			islandcnt++; //섬의 숫자를 세기 위한 다음 순번으로 넘어간다. 
//		}
//
//		//1이 존재하는 경우 
//		if (caseforone) {
//			int eachislandcnt = 0;
//			for (int i = 0; i < h; i++) {
//				for (int j = 0; j < w; j++) {
//					if (map[i][j] == 1&&!visited[i][j]) {
//						visited[i][j] = true;
//						pair<int, int>start;
//						start.first = i;
//						start.second = j;
//						/*printf("<<<(%d,%d) : 본 지점에서 탐색을 시작합니다. >>>\n\n",start.first,start.second);*/
//						Q.push(start);
//						BFS(start);
//						eachislandcnt++;
//						/*printf("섬 하나를 발견했습니다. 다음 섬으로 넘어갑니다. \n\n");
//						printf("현재까지의 섬의 개수 : %d \n\n", eachislandcnt);*/
//					}
//				}
//			}
//			//섬의 개수을 다 돌면 
//			island[islandcnt].push_back(eachislandcnt);
//			islandcnt++;
//
//		}
//
//
//		//다 돌면 이제 새로운 섬의 정보를 받아야 하므로 
//		//모든 것을 초기화합니다. 
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				visited[i][j] = false;
//				map[i][j] = 0;
//			}
//		}
//		caseforone = false;
//		while (!Q.empty()) {
//			Q.pop();
//		}
//
//
//
//
//	}
//
//
//	for (int i = 0; i < islandcnt; i++) {
//		for (int j = 0; j < island[i].size(); j++) {
//			printf("%d\n", island[i][j]);
//		}
//	}
//
//}