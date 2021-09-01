//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#define max 101
//#define tomatocnt 1000001
//using namespace std;
//
//
//int map[max][max][max];
//bool visited[max][max][max];
//
//int dx[] = {1,-1,0,0 };
//int dy[] = {0,0,1,-1 };
//int dz[] = { 0,1,-1 };
//
//int m, n, h;
//
//typedef struct tomato {
//	int x;
//	int y;
//	int z;
//	int time = 0;
//}t;
//
//t tomatolist[tomatocnt];
//int tcnt = 0;
//
//queue<t> q;
//
//
//void bfs() {
//
//	t current;
//
//	while (!q.empty()) {
//
//		current = q.front();
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//			for (int j = 0; j < 3; j++) {
//				int z = current.z + dz[j];
//
//
//				if (x >= 1 && x <= n && y >= 1 && y <= m &&z>=1 && z<=h&& !visited[z][x][y] && map[z][x][y] == 0) {
//
//
//
//					//printf("x : %d y : %d z : %d \n\n", x, y, z);
//					visited[z][x][y] = true;
//					map[z][x][y] = map[current.z][current.x][current.y]+1;
//					int time = current.time + 1;
//					t next;
//					
//					next.x = x;
//					next.y = y;
//					next.z = z;
//					next.time = time;
//					q.push(next);
//
//				}
//
//
//
//
//			}
//
//
//
//		}
//
//
//
//	}
//
//
//
//}
//
//
//
//
//
//int main() {
//	int flag2 = 0;
//
//	cin >> m >> n >> h;
//
//	for (int i = 1; i <= h; i++) {
//
//		for (int j = 1; j <= n; j++) {
//
//			for (int k = 1; k <= m; k++) {
//				int input;
//				cin >> input;
//				if (input == -1) {
//					visited[i][j][k] = true;
//				}
//				if (input == 1) {
//					t start;
//					start.x = j;
//					start.y = k;
//					start.z = i;
//					start.time = 0;
//					tomatolist[tcnt++] = start;
//				}
//
//				map[i][j][k] = input;
//				if (input == 0) {
//					flag2 = 1;
//				}
//
//			}
//
//
//		}
//	}
//
//	for (int i = 0; i < tcnt; i++) {
//		q.push(tomatolist[i]);
//		visited[tomatolist[i].z][tomatolist[i].x][tomatolist[i].y] = true;
//	}
//
//	bfs();
//
//	int flag = 0;
//	
//	int maxi = -2;
//	for (int i = 1; i <= h; i++) {
//
//		for (int j = 1; j <= n; j++) {
//
//			for (int k = 1; k <= m; k++) {
//			
//				if (map[i][j][k]==0) {
//					flag = 1;
//					break;
//				}
//				if (maxi < map[i][j][k]) {
//					maxi = map[i][j][k];
//				}
//
//			}
//			if (flag == 1) {
//				break;
//			}
//
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//
//	//벽이 아니고, 만일 방문하지 못한 부분이 남아있다면.
//	if (flag == 0) {
//		if (flag2 == 0) {
//			printf("0");
//		}
//		else {
//			printf("%d", maxi);
//		}
//		
//	}
//	else {
//		printf("-1");
//	}
//
//
//
//}
//
//
