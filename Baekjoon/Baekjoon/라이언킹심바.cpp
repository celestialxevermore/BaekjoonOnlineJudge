//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//int map[501][501];
//int ch[501][501];
//typedef struct lion {
//	int x;
//	int y;
//	int size;
//	int ate = 0;
//
//	void sizeUp() {
//		ate = 0;
//		size++;
//	}
//}Lion;
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//typedef struct state {
//	int x;
//	int y;
//	int dist;
//
//	state(int a, int b, int c) {
//		x = a;
//		y = b;
//		dist = c;
//	}
//	bool operator<(const state & bb)const{
//		if (dist == bb.dist) {
//			if (x == bb.x) { return y > bb.y; }
//			else return x > bb.x;
//		}
//		else {
//			return dist > bb.dist;
//		}
//	}
//
//}State;
//Lion simba;
//int n;
//priority_queue<State>Q;
//int res;
//
//int main() {
//	
//
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 9) {
//				simba.x = i;
//				simba.y = j;
//				map[i][j] = 0;
//			}
//		}
//	}
//	Q.push(State(simba.x, simba.y, 0));
//	simba.size = 2;
//
//	while (!Q.empty()) {
//		State tmp = Q.top();
//		Q.pop();
//		int x = tmp.x;
//		int y = tmp.y;
//		int z = tmp.dist;
//
//		if (map[x][y] != 0 && map[x][y] < simba.size) {
//			simba.x = x;
//			simba.y = y;
//			simba.ate++;
//			if (simba.ate >= simba.size)simba.sizeUp();
//
//			map[x][y] = 0;
//
//			for (int i = 1; i <= n; i++) {
//				for (int j = 1; j <= n; j++) {
//					ch[i][j] = 0;
//				}
//			}
//			while (!Q.empty())Q.pop();
//			res = tmp.dist;
//
//		}
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			if (nx<1 || nx>n || ny<1 || ny>n || map[nx][ny] > simba.size || ch[nx][ny] > 0)continue;
//			Q.push(State(nx, ny, z + 1));
//			ch[nx][ny] = 1;
//			
//		}
//	}
//
//	printf("%d", res);
//
//}