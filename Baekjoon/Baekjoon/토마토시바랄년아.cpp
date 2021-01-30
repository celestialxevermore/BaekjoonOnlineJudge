//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//#include<queue>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int TomatoBox[1000][1000];
//int visited[1000][1000];
//int n, m;
//queue<pair < pair<int, int>, int> >Q;
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//void BFS(pair< pair<int, int>, int> vertex) {
//	pair< pair<int, int>, int> temp;
//
//	while (!Q.empty()) {
//		
//		temp.first.first = Q.front().first.first;
//		temp.first.second = Q.front().first.second;
//		temp.second = Q.front().second;
//		//temp.second++;
//		Q.pop();
//		for (int i = 0; i < 4; i++) {
//			int x = temp.first.first + dx[i];
//			int y = temp.first.second + dy[i];
//			int v = temp.second;
//			
//			if (x < 0 || y < 0 || x >= n || y >= m) {
//
//				continue;
//			}
//			if (TomatoBox[x][y] == 1 || TomatoBox[x][y] == -1) { continue; }
//			//토마토가 익지 않았고 아직 방문을 하지 않았다면
//			if (visited[x][y] == 0 && TomatoBox[x][y] == 0) {
//				v++;
//				
//				pair< pair<int, int>, int>next;
//				visited[x][y] = 1;
//				TomatoBox[x][y] = 1;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = v;
//
//				Q.push(next);
//			}
//			else { return; }
//		}
//
//	}
//	int flag = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (TomatoBox[i][j] == 0) { flag = 1; break; }
//			else { continue; }
//		}
//	}
//	if (flag == 0) {
//		printf("%d ", temp.second);
//	}
//	else {
//		printf("-1");
//	}
//
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	/*scanf("%d %d", &m, &n);*/
//	cin >> m >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//
//			//scanf("%d", &TomatoBox[i][j]);
//			cin >> TomatoBox[i][j];
//		}
//	}
//	
//
//	//시작점의 갯수를 파악합니다. 
//	int startcount = 0;
//	//pair <pair<int, int>, int> start;
//	vector< pair <pair<int, int>, int> > startpoint(1000);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (TomatoBox[i][j] == 1) {
//
//				startcount++;
//				//printf("현재 시작점의 개수 : %d \n", startcount);
//				startpoint[startcount].first.first = i;
//				//printf("해당 시작점의 x좌표 : %d \n", startpoint[startcount].first.first);
//				startpoint[startcount].first.second = j;
//				//printf("해당 시작점의 y좌표 : %d \n", startpoint[startcount].first.second);
//				startpoint[startcount].second = 0;
//				//printf("해당 시작점에서의 움직임 계수 : %d \n", startpoint[startcount].second);
//				visited[startpoint[startcount].first.first][startpoint[startcount].first.second] = 1;
//				startpoint[startcount];
//				Q.push(startpoint[startcount]);
//
//				
//				Q.push(startpoint[startcount]);
//				
//			}
//		}
//
//	}
//	BFS(startpoint[1]);
//	return 0;
//}