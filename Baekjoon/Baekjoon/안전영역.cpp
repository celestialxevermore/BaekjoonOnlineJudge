//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<vector>
//#include<queue>
//#define MAX 101
//using namespace std;
//int N;
//int casecnt = 0;
//bool height[MAX];
//int heightinfo[MAX];
//bool visited[MAX][MAX];
//bool soaked[MAX][MAX];
//int map[MAX][MAX];
//int maximum = -1;
//bool specialcase = false;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//
//void DFS(pair<int, int> area) {
//
//
//	for (int i = 0; i < 4; i++) {
//		int x = area.first+dx[i];
//		int y = area.second+dy[i];
//		if (x < 0 || y < 0 || x >= N || y >= N) {/* cout << "(%d,%d) : 해당 좌표는 현재 지도의 범위 밖에 해당하므로 탐색할 수 없습니다.\n\n", x, y;*/
//			//cout << '(' << x << ',' << y << ") : 해당 좌표는 현재 지도의 범위 밖에 해당하므로 탐색할 수 없습니다." << endl << endl;
//			continue; }
//		if (visited[x][y]) { /*cout << "(%d,%d) : 해당 좌표는 이전에 방문한 적이 있으므로 탐색을 종료합니다. \n\n", x, y;*/
//			//cout << '(' << x << ',' << y << ") : 해당 좌표는 이전에 방문한 적이 있으므로 탐색을 종료합니다.." << endl << endl; 
//		continue; }
//		if (!soaked[x][y]&&!visited[x][y]) {
//			//cout << "(%d,%d) : 해당 좌표는 물에 가라앉지도 않았고, 아직 방문하지 않았으므로 탐색을 진행합니다. \n\n", x, y;
//			//cout << '(' << x << ',' << y << ") : 해당 좌표는 물에 가라앉지도 않았고, 아직 방문하지 않았으므로 탐색을 진행합니다." << endl << endl;
//			visited[x][y] = true;
//			pair<int, int>next;
//			next.first = x;
//			next.second = y;
//			//printf("(%d,%d) : 해당 좌표에서 DFS 탐색을 시작합니다. \n\n", x, y);
//			//cout << '(' << x << ',' << y << ") : 해당 좌표에서 DFS 탐색을 시작합니다." << endl << endl;
//			DFS(next);
//
//		}
//
//	}
//	return;
//
//}
//
//
//int main() {
//	cin >> N;
//
//
//	int input;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> map[i][j];
//			if (!height[map[i][j]]) {
//				height[map[i][j]] = true;
//			}
//		}
//	}
//
//
//
//
//
//	for (int i = 0; i < MAX; i++) {
//		if (height[i]) {
//			heightinfo[casecnt] = i;
//			casecnt++;
//			
//		}
//	}
//	
//
//
//		for (int i = 0; i < casecnt; i++) {
//			int currentheight = heightinfo[i];
//			int notsoakedarea = 0;
//
//
//			for (int i = 0; i < N; i++) {
//				for (int j = 0; j < N; j++) {
//					if (map[i][j] <= currentheight) {
//						soaked[i][j] = true;
//					}
//				}
//			}
//			for (int i = 0; i < N; i++) {
//				for (int j = 0; j < N; j++) {
//					if (!soaked[i][j] && !visited[i][j]) {
//						pair<int, int>start;
//						start.first = i;
//						start.second = j;
//						visited[i][j] = true;
//						//printf("(%d,%d) : 해당 지점은 물에 잠기지 않았습니다. 여기에서부터 탐색을 시작합니다. \n\n", start.first, start.second);
//						//cout << '(' << start.first << ',' << start.second << ") : 해당 지점은 물에 잠기지 않았습니다. 여기에서부터 탐색을 시작합니다." << endl << endl;
//						DFS(start);
//
//						notsoakedarea++;
//						//printf("잠긴 수위가 %d일 때 현재까지 확인된 물에 잠기지 않은 지역의 개수는 %d 입니다. \n\n", currentheight, notsoakedarea);
//						//cout << "잠긴 수위가" << currentheight <<"일 때 현재까지 확인된 물에 잠기지 않은 지역의 개수는 "<<notsoakedarea <<"입니다." << endl << endl;
//					}
//				}
//			}
//			if (maximum < notsoakedarea) {
//				maximum = notsoakedarea;
//
//
//
//				//printf("잠긴 수위가 %d일 때 물에 잠기지 않은 지역의 최대 수는 %d 입니다. \n\n", currentheight, maximum); 
//				//cout << "잠긴 수위가" << currentheight << "일 때 물에 잠기지 않은 지역의 최대 수는 " << maximum << "입니다." << endl << endl;
//
//			}
//
//
//
//			//모든 과정을 초기화 합니다. 
//			for (int i = 0; i < N; i++) {
//				for (int j = 0; j < N; j++) {
//					soaked[i][j] = false;
//					visited[i][j] = false;
//				}
//			}
//
//
//
//
//		}
//
//		//printf("%d ", maximum);
//		cout << maximum;
//
//
//
//
//
//
//	
//
//
//}
