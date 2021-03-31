//#include<iostream>
//#include<vector>
//#include<queue>
//#define Water 10000
//using namespace std;
//
//typedef struct gosm {
//	int x;
//	int y;
//	int cnt = 0;
//}G;
//
//
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//int R, C;
//int re, ce = 0;
//char map[51][51];
//bool visited[51][51];
//int flag = 0;
//int ans = 0;
//
//queue<G>Q;
//
//void BFS() {
//
//	G current;
//	while (!Q.empty()) {
//
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.cnt = Q.front().cnt;
//
//		Q.pop();
//		if (current.cnt < Water && map[current.x][current.y] == '*') {
//			Q.pop();
//		}
//		if (current.cnt < Water && current.x == re && current.y == ce) {
//
//			flag = 1;
//			ans = current.cnt;
//			break;
//		}
//
//		if (current.cnt == Water) {
//			//물은 방문여부를 따질 필요가 없다.
//			for (int i = 0; i < 4; i++) {
//
//				int x = current.x + dx[i];
//				int y = current.y + dy[i];
//				if (map[x][y] == '*'||map[x][y]=='X'||map[x][y]=='D') { continue; }
//				//물이 빈 곳을 흐르는 경우
//				//물이 고슴도치를 덮치는 경우d
//				//어차피 고슴도치는 분신을 썼기 때문에
//				//그 분신 중 하나만이라도 D에 도착하면 됨. 
//				if ((x >= 1 && y >= 1 && x <= R && y <= C && map[x][y] == '.')|| (x >= 1 && y >= 1 && x <= R && y <= C && map[x][y] == 'S')) {
//					//물이 흐른다.
//					map[x][y] = '*';
//					G next;
//					next.x = x;
//					next.y = y;
//					next.cnt = Water;
//					Q.push(next);
//
//				}
//				
//				
//
//			}
//
//
//		}
//
//		else {
//			
//
//			for (int i = 0; i < 4; i++) {
//
//				int x = current.x + dx[i];
//				int y = current.y + dy[i];
//
//
//				if ((!visited[x][y] && x >= 1 && y >= 1 && x <= R && y <= C && map[x][y] == '.')|| (!visited[x][y] && x >= 1 && y >= 1 && x <= R && y <= C && map[x][y] == 'D')) {
//					//기존 지점은 빈 곳으로 만들어주고
//					map[current.x][current.y] = '.';
//					map[x][y] = 'S';
//					visited[x][y] = true;
//					G next;
//					next.x = x;
//					next.y = y;
//					int nextcnt = current.cnt + 1;
//					next.cnt = nextcnt;
//					Q.push(next);
//				}
//				
//
//
//			}
//		}
//
//		printf("\n");
//		for (int i = 1; i <= R; i++) {
//			for (int j = 1; j <= C; j++) {
//				printf("%c ", map[i][j]);
//			}
//			printf("\n");
//		}
//
//
//	}
//
//
//
//}
//int main() {
//
//	cin >> R >> C;
//	G start;
//	
//
//	for (int i = 1; i <= R; i++) {
//		for (int j = 1; j <= C; j++) {
//			char input;
//			cin >> input;
//			map[i][j]=input;
//
//			if (input == '*') {
//				start.x = i;
//				start.y = j;
//				start.cnt = Water;
//				visited[i][j] = true;
//				Q.push(start);
//			}
//			if (input == 'D') {
//				re = i;
//				ce = j;
//			}
//
//
//		}
//	}
//	//물을 나중에 넣습니다.
//	for (int i = 1; i <= R; i++) {
//		for (int j = 1; j <= C; j++) {
//			if (map[i][j] == 'S') {
//				G water;
//				water.x = i;
//				water.y = j;
//				water.cnt = 0;
//				visited[i][j] = true;
//				Q.push(water);
//			}
//		}
//	}
//
//	BFS();
//
//
//	if (flag == 1) {
//		printf("%d", ans);
//	}
//	else {
//		printf("KAKTUS");
//	}
//
//
//	
//
//}
