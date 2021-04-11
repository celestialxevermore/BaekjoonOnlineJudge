//#include<iostream>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//struct INFO {
//	int ry, rx, by, bx, count;
//};
//
//INFO start;
////x는 끝에 종료 널문자를 저장하기 위하여
//char map[11][12];
//bool visited[11][11][11][11];
//queue<INFO>Q;
//
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//int bfs() {
//	INFO current;
//
//	int ret = -1;
//	while (!Q.empty()) {
//
//		current = Q.front(); 
//		Q.pop();
//		if (current.count > 10) { break; }
//		if (map[current.rx][current.ry] == 'O' && map[current.bx][current.by] != 'O') {
//			ret = current.count;
//			break;
//		}
//
//		for (int i = 0; i < 4; i++) {
//			int rx = current.rx;
//			int ry = current.ry;
//			int bx = current.bx;
//			int by = current.by;
//
//
//			while (1) {
//				if (map[rx][ry] != '#' && map[rx][ry] != 'O') {
//					rx += dx[i];
//					ry += dy[i];
//				}
//				else {
//					if (map[rx][ry] == '#') {
//						rx -= dx[i];
//						ry -= dy[i];
//					}
//					break;
//
//				}
//			}
//			while (1) {
//				if (map[bx][by] != '#' && map[bx][by] != 'O') {
//					bx += dx[i];
//					by += dy[i];
//				}
//				else {
//					if (map[bx][by] == '#') {
//						bx -= dx[i];
//						by -= dy[i];
//					}
//					break;
//
//				}
//			}
//
//			if (rx == bx && ry == by) {
//				if (map[rx][ry] != 'O') {
//					int red_distance = abs(rx - current.rx)+abs(ry-current.ry);
//					int blue_distance = abs(bx - current.bx) + abs(by - current.by);
//					if (red_distance > blue_distance) {
//						rx -= dx[i], ry -= dy[i];
//					}
//					else {
//						bx -= dx[i]; by -= dy[i];
//					}
//				}
//			}
//			if (!visited[rx][ry][bx][by]) {
//				visited[rx][ry][bx][by] = true;
//				INFO next;
//				next.rx = rx;
//				next.ry = ry;
//				next.bx = bx;
//				next.by = by;
//				next.count = current.count + 1;
//				Q.push(next);
//			}
//		}
//
//
//
//
//	}
//	return ret;
//}
//
//
//
//int main() {
//	
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> map[i];
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (map[i][j] == 'R') {
//				start.rx = i;
//				start.ry = j;
//
//			}
//			if (map[i][j] == 'B') {
//				start.bx = i;
//				start.by = j;
//			}
//
//		}
//	}
//	start.count = 0;
//	Q.push(start);
//
//	visited[start.rx][start.ry][start.bx][start.by] = true;
//	int ret = bfs();
//	cout << ret << endl;
//}