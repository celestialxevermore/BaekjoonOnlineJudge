//#include<iostream>
//#include<vector>
//#include<stack>
//#include<queue>
//
//using namespace std;
//
//
//int N, M;
//int map[11][11];
//bool visited[11][11];
//bool tmpvisited[11][11];
//
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,-1,0,1 };
//int dir[4] = { 0,1,2,3 };
//
//
////0 : 위 1: 왼쪽 2 : 아래쪽 3 : 오른쪽
//
//// 각 섬 안에서는 BFS로 돌고
//// 만약 한 방향이 뚫려 있다면 그 방향대로 쭉쭉 -/+연산을 한다. 
//// 섬의 movecnt를 계속 추가하면서 
//
//
//typedef struct island {
//	int x;
//	int y;
//	int dir;
//	int cnt = 0;
//}Island;
//
//
//queue<Island>Q;
//
//
//void BFS() {
//
//	Island cur;
//
//	while (!Q.empty()) {
//
//		cur = Q.front();
//		Q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nx = cur.x + dx[i];
//			int ny = cur.y + dy[i];
//			int dir = i;
//			int cnt = cur.cnt;
//
//			//바다인 영역을 따져봐야한다.
//			if (nx >= 1 && nx <= N && ny >= 1 && ny <= M && map[nx][ny]==0) {
//
//				switch (dir) {
//				// 위쪽이 바다인 경우
//				case 0:
//					int tmpcnt = 0;
//					while (nx >= 1 && nx <= N && ny >= 1 && ny <= M && map[nx][ny]==0) {
//						nx--;
//						tmpcnt++;
//					}
//					if (tmpcnt >= 2) {
//						cnt += tmpcnt;
//						Island next;
//						next.x = nx-1;
//						next.y = ny;
//						Q.push(next);
//
//					}
//
//
//					break;
//				// 왼쪽이 바다인 경우
//				case 1:
//					break;
//				// 아래쪽이 바다인 경우
//				case 2:
//					break;
//				// 오른쪽이 바다인 경우
//				case 3:
//
//
//
//					break;
//
//
//				}
//
//			}
//
//
//
//
//		}
//	}
//
//
//}
//
//
//
//
//
//int main() {
//
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			int a = 0;
//			cin >> a;
//			map[i][j] = a;
//		}
//	}
//	
//	
//	int islandcnt = 1;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (visited[i][j] != true && map[i][j] != 0) {
//				visited[i][j] = true;
//				Island start;
//				start.x = i;
//				start.y = j;
//				start.dir = 0;
//				start.cnt = 0;
//				Q.push(start);
//				BFS();
//			}
//		}
//	}
//
//
//}
