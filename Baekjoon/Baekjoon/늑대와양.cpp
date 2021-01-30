//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<queue>
//#include<vector>
//using namespace std;
//
//
//char map[1000][1000];
//bool sheep[1000][1000];
//bool visited[1000][1000];
////목장의 크기가 주어진다. 
//int R, C;
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//int flag = 0;
//int flag2 = 0;
//queue< pair<int, int>> Q;
//
//void BFS(pair<int,int> start) {
//
//	while (!Q.empty()) {
//		pair<int, int> current;
//		current.first = Q.front().first;
//		current.second = Q.front().second;
//		/*printf("늑대 // (%d,%d) : 현재 큐의 맨 앞의 좌표입니다. \n\n", current.first, current.second);*/
//		Q.pop();
//
//
//
//
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.first+dx[i];
//			int y = current.second+dy[i];
//			if (x<0 || y<0 || x>=R || y>=C) {/* printf("늑대 // (%d,%d) : 현재 위치는 지도밖을 벗어나므로 탐색을 종료합니다.\n\n",x,y);*/ continue; }
//			
//			if (visited[x][y] == true&&sheep[x][y]==true) {
//				/*printf("늑대 // (%d,%d) : 해당 위치는 울타리가 설치될 지역입니다. 그리고 양이 존재합니다.\n\n", x, y); 
//				printf("늑대 // (%d,%d) : 해당 위치에 울타리가 설치되었습니다. \n\n", x, y);*/
//				map[x][y] = 'D';
//				continue;
//			}
//			if (map[x][y] == 'W') {
//				//printf("늑대 // (%d,%d) : 해당 위치에는 이미 늑대가 존재합니다. \n\n", x, y);
//				continue;
//			}
//			if (map[x][y] == '.' && !visited[x][y]) {
//				//printf("늑대 // (%d,%d) : 현재 점은 그냥 초원이니 늑대가 이동합니다. \n\n", x, y);
//				visited[x][y] = true;
//				pair<int, int> next;
//				next.first = x;
//				next.second = y;
//				Q.push(next);
//			}
//		}
//	}
//
//
//
//}
//
//
//
//int main() {
//	cin >> R >> C;
//
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			cin >> map[i][j];
//		}
//		printf("\n");
//	}
//	pair<int, int> Sheeplocation[1001];
//	pair<int, int>Wolvelocation[1001];
//	int Sheepindex = 0;
//	int Wolveindex = 0;
//
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			if (map[i][j] == 'S') {
//				int x = i;
//				int y = j;
//				Sheeplocation[Sheepindex].first = x;
//				Sheeplocation[Sheepindex].second = y;
//				Sheepindex++;
//				//printf("양 // %d번째 확인된 양의 위치 : (%d,%d)입니다. \n\n", Sheepindex, x, y);
//
//	
//			}
//		}
//	}
//	printf("\n\n");
//	/*for (int i = 0; i < Sheepindex; i++) {
//		int x = Sheeplocation[i].first;
//		int y = Sheeplocation[i].second;
//
//		printf("양 // %d번째 확인된 양의 위치 : (%d,%d)입니다. \n\n", i, x, y);
//		printf("해당 양의 위치에서 위아래 왼쪽 오른쪽 좌표를 출력합니다. \n\n");
//		for (int i = 0; i < 4; i++) {
//			int xx = x + dx[i];
//			int yy = y + dy[i];
//			printf("(%d,%d) \n", xx, yy);
//		}
//		printf("\n\n");
//
//
//	}*/
//
//
//
//	for (int i = 0; i < Sheepindex; i++) {
//		for (int j = 0; j < 4; j++) {
//			int x = Sheeplocation[i].first+dx[j];
//			int y = Sheeplocation[i].second+dy[j];
//			if (x < 0 || y < 0 || x >= R || y >= C) { 
//				//printf("양 // (%d,%d) : 해당 점은 지도의 범위를 넘어섭니다. \n\n", x, y); 
//				continue; 
//			}
//			
//			if(!visited[x][y]){
//				//printf("(%d,%d) : 해당 점은 양의 인접에 해당하므로 이 지점에는 울타리를 심을 수 있습니다. \n\n", x, y);
//				sheep[x][y] = true;
//				visited[x][y] = true;
//				continue;
//			}
//		
//		}
//
//	}
//
//
//	//늑대를 확인하는 과정
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			if (map[i][j] == 'W') {
//				int x = i, y = j;
//				Wolvelocation[Wolveindex].first = x;
//				Wolvelocation[Wolveindex].second = y;
//				Wolveindex++;
//				//printf("늑대 // %d번째 확인된 늑대의 위치 : (%d,%d)입니다. \n\n",Wolveindex, x, y);
//			}
//		}
//	}
//	
//	//만일 늑대가 단 한마리도 없다면?
//	if (Wolveindex == 0) {
//		printf("1\n");
//		//printf("늑대가 단 한 마리도 존재하지 않습니다. \n\n");
//		for (int i = 0; i < R; i++) {
//			for (int j = 0; j < C; j++) {
//				if (map[i][j] == '.') {
//					map[i][j] = 'D';
//					break;
//				}
//			}
//			break;
//		}
//	
//	}
//	else {
//		for (int i = 0; i < Wolveindex; i++) {
//			int x = Wolvelocation[i].first;
//			int y = Wolvelocation[i].second;
//			if (visited[x][y] == true) {
//				//printf("늑대 // (%d,%d) : 해당 지점은 양과 인접지점이므로 울타리를 설치할 수 없습니다.\n\n", x, y);
//				printf("0");
//				flag = 1; flag2 = 2;
//				break;
//			}
//		}
//		
//
//
//		if (flag2 == 0) {
//			for (int i = 0; i < Wolveindex; i++) {
//				for (int j = 0; j < 4; j++) {
//					int x = Wolvelocation[i].first + dx[j];
//					int y = Wolvelocation[i].second + dy[j];
//					if (x < 0 || y < 0 || x >= R || y >= C) { /*printf("늑대 // (%d,%d) : 해당 점은 지도의 범위를 넘어섭니다. \n\n", x, y);*/ continue; }
//					//만일 바로 옆에 양이 존재한다!! 
//
//					if (map[x][y] == 'S') {
//						//printf("늑대 // (%d,%d) : 해당점에 바로 양이 존재하므로 울타리를 설치할 수 없습니다. 0을 반환하고 종료합니다. \n\n\n", x, y);
//						printf("0");
//						flag = 1;
//						break;
//					}
//				}
//			}
//		}
//	}
//
//
//	//늑대도 있고, 양들 근처에 아직 다다르지 않은 상황이라면
//	//이때 비로소 BFS를 돌리기 시작합니다. 
//	
//	if(flag==0){
//		for (int i = 0; i < Wolveindex; i++) {
//			int x = Wolvelocation[i].first;
//			int y = Wolvelocation[i].second;
//			pair<int, int>start;
//			start.first = x;
//			start.second = y;
//			Q.push(start);
//			BFS(start);
//		}
//		printf("1\n");
//		for (int i = 0; i < R; i++) {
//			for (int j = 0; j < C; j++) {
//				printf("%c", map[i][j]);
//			}
//			printf("\n");
//		}
//
//	}
//	
//	
//
//	return 0;
//
//}