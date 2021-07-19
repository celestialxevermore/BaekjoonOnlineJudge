//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//char map[251][251];
//bool visited[251][251];
//
//int R, C;
//
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int Wolves = 0;
//int Sheep = 0;
//
//int answ = 0;
//int anss = 0;
//
//queue <pair<int,int>> Q;
//
//void BFS() {
//
//
//	pair<int, int>current;
//	
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//
//
//		for (int i = 0; i < 4; i++) {
//
//			int x = current.first + dx[i];
//			int y = current.second + dy[i];
//
//
//			if (x >= 1 && x <= R && y >= 1 && y <= C && !visited[x][y] && map[x][y] != '#') {
//				visited[x][y] = true;
//
//				if (map[x][y] == 'v') {
//					Wolves++;
//					pair<int, int>next;
//					next.first = x;
//					next.second = y;
//					//printf("current : %d %d w : %d s :%d\n\n", x, y, Wolves, Sheep);
//					Q.push(next);
//				}
//				if (map[x][y] == 'o') {
//					Sheep++;
//					pair<int, int>next;
//					next.first = x;
//					next.second = y;
//					//printf("current : %d %d w : %d s :%d\n\n", x, y, Wolves, Sheep);
//					Q.push(next);
//				}
//				if (map[x][y] == '.') {
//					
//					pair<int, int>next;
//					next.first = x;
//					next.second = y;
//					//printf("current : %d %d w : %d s :%d\n\n", x, y, Wolves, Sheep);
//					Q.push(next);
//				}
//			}
//
//
//
//		}
//	}
//
//	
//
//
//}
//
//
//
//int main() {
//
//	cin >> R >> C;
//
//	for (int i = 1; i <= R; i++) {
//		string input;
//		cin >> input;
//	
//		for (int p = 0; p < input.size(); p++) {
//			map[i][p + 1] = input[p];
//		}
//
//	}
//	
//	
//	for (int i = 1; i <= R; i++) {
//		for (int j = 1; j <= C; j++) {
//			
//			if (map[i][j] != '#'&&!visited[i][j]) {
//			
//				pair<int, int>start;
//				start.first = i;
//				start.second = j;
//				visited[i][j] = true;
//
//				if (map[i][j] == 'v') {
//					Wolves++;
//					//printf("start : %d %d \n\n", i, j);
//					Q.push(start);
//					BFS();
//				}
//				if (map[i][j] == 'o') {
//					Sheep++;
//					Q.push(start);
//					//printf("start : %d %d \n\n", i, j);
//					BFS();
//				}
//				if (map[i][j] == '.') {
//					Q.push(start);
//					//printf("start : %d %d \n\n", i, j);
//					BFS();
//				}
//
//				if (Wolves >= Sheep) {
//					answ += Wolves;
//					Sheep = 0;
//					anss += Sheep;
//				}
//				else {
//					Wolves = 0;
//					answ += Wolves;
//					anss += Sheep;
//				}
//
//
//
//				Wolves = 0;
//				Sheep = 0;
//			}
//
//
//			
//		}
//	}
//
//
//	printf("%d %d", anss, answ);
//
//}
