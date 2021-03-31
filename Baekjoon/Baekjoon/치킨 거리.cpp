//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//
//int N, M;
//int ch[21];
//vector<pair<pair<int, int>,int>>chicken(21);
//int chcnt = 0;
//int flag = 0;
//int ans = 0;
//int mini = 10000;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int map[51][51];
//bool visited[51][51];
//queue<pair<pair<int, int>,int>>Q;
//
//
//
//void BFS() {
//	int currentans = 0;
//	pair<pair<int, int>, int>current;
//	while (!Q.empty()) {
//		current.first.first = Q.front().first.first;
//		current.first.second = Q.front().first.second;
//		current.second = Q.front().second;
//		Q.pop();
//		//printf("current x : %d y : %d cnt : %d \n\n", current.first.first, current.first.second,current.second);
//		if (map[current.first.first][current.first.second] == 1) {
//			currentans += current.second;
//			//printf("current currentans : %d\n\n", currentans);
//		}
//
//
//
//		for (int i = 0; i < 4; i++) {
//
//
//			int x = current.first.first + dx[i];
//			int y = current.first.second + dy[i];
//			int c = current.second + 1;
//			if (x >= 1 && y >= 1 && x <= N && y <= N && !visited[x][y] && map[x][y] == 1) {
//				visited[x][y] = true;
//				pair<pair<int, int>, int>next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = c;
//				//printf("x : %d y : %d cnt : %d \n\n", next.first.first, next.first.second, next.second);
//				Q.push(next);
//
//			}
//			if (x >= 1 && y >= 1 && x <= N && y <= N && !visited[x][y] && map[x][y] == 0) {
//				visited[x][y] = true;
//				pair<pair<int, int>, int>next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = c;
//				//printf("x : %d y : %d cnt : %d \n\n", next.first.first, next.first.second, next.second);
//				Q.push(next);
//			}
//			if (x >= 1 && y >= 1 && x <= N && y <= N && !visited[x][y] && map[x][y] == 2) {
//				visited[x][y] = true;
//				pair<pair<int, int>, int>next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = c;
//				//printf("x : %d y : %d cnt : %d \n\n", next.first.first, next.first.second, next.second);
//				Q.push(next);
//			}
//		}
//	}
//	if (mini > currentans) {
//		mini = currentans;
//		//printf("<<<<<current mini : %d >>>>>\n\n", mini);
//		return;
//	}
//	
//
//}
//
//
//
//void DFS(int start, int level) {
//
//	if (level == M) {
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				visited[i][j] = false;
//			}
//		}
//		for (int i = 0; i < level; i++) {
//			visited[chicken[ch[i]].first.first][chicken[ch[i]].first.second] = true;
//			Q.push(chicken[ch[i]]);
//
//		}
//		//printf("<<<combination completed>>>\n\n");
//		/*for (int i = 0; i < level; i++) {
//			printf(" x : %d y :%d cnt :%d \n\n", chicken[ch[i]].first.first, chicken[ch[i]].first.second,chicken[ch[i]].second);
//		}*/
//		
//		//printf("BFS!\n\n");
//		BFS();
//	}
//	else {
//		//printf("chcnt : %d\n\n", chcnt);
//		for (int i = start; i < chcnt; i++) {
//			ch[level] = i;
//			//printf("DFS(%d, %d)\n\n", i + 1, level + 1);
//			DFS(i+1, level+1);
//			
//
//		}
//
//
//	}
//
//
//}
//
//
//int main() {
//
//	cin >> N >> M;
//
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (map[i][j] == 2) {
//				chicken[chcnt].first.first = i;
//				chicken[chcnt].first.second = j;
//				chicken[chcnt].second = 0;
//				chcnt++;
//				//printf("x : %d y : %d cnt : %d chcnt: %d \n\n", chicken[chcnt - 1].first.first, chicken[chcnt - 1].first.second, chicken[chcnt - 1].second,chcnt);
//			}
//		}
//	} 
//
//	DFS(0, 0);
//	printf("%d", mini);
//}