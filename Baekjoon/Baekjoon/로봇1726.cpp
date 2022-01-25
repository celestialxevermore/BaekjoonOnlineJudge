//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//#define MAX 101
//
//using namespace std;
//
//
//int M, N;
//
//int map[MAX][MAX];
//bool visited[MAX][MAX];
//
//typedef struct robot {
//	int x;
//	int y;
//	int dir = 0;
//	int ordercnt = 0;
//}Robot;
//
//Robot start;
//Robot target;
//
//
//queue<Robot>Q;
//
//
//int dx[] = { 0,0,0,1,-1 };
//int dy[] = { 0,1,-1,0,0 };
//
//int sx, sy, sd;
//int tx, ty, td;
//
//int res = 10000;
//void BFS(Robot start) {
//	
//	Robot current;
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//		//printf("front x : %d y : %d dir : %d ordercnt : %d \n\n", current.x, current.y, current.dir, current.ordercnt);
//		if (current.x == target.x && current.y == target.y) {
//			visited[current.x][current.y] = false;
//			//printf("도착 : current x : %d y : %d dir : %d ordercnt : %d res : %d \n\n", current.x, current.y, current.dir, current.ordercnt,res);
//			if (current.dir == target.dir) {
//				res = min(res, current.ordercnt);
//			}
//			if (current.dir != target.dir) {
//				current.dir = target.dir;
//				current.ordercnt++;
//				res = min(res, current.ordercnt);
//				
//			}
//			
//			
//			
//		}
//
//
//
//		for (int i = 1; i < 5; i++) {
//
//			int nextdirection = i;
//			int nx = current.x + dx[i];
//			int ny = current.y + dy[i];
//			int currentdirection = current.dir;
//			
//			
//			if (nx >= 1 && nx <= M && ny >= 1 && ny <= N && !visited[nx][ny]) {
//
//				if (map[nx][ny] == 0 && nextdirection == currentdirection) {
//					Robot next;
//					next.x = nx;
//					next.y = ny;
//					next.dir = nextdirection;
//					next.ordercnt = current.ordercnt;
//					
//					if (nx == target.x && ny == target.y) { visited[nx][ny] = false; }
//					else { visited[nx][ny] = true; }
//					//printf("next x : %d y : %d dir : %d ordercnt : %d \n\n", next.x, next.y, next.dir, next.ordercnt);
//					Q.push(next);
//				}
//				if (map[nx][ny] == 0 && nextdirection != currentdirection) {
//					Robot next;
//					next.x = nx;
//					next.y = ny;
//					next.dir = nextdirection;
//					next.ordercnt = current.ordercnt + 2;
//					visited[nx][ny] = true;
//					if (nx == target.x && ny == target.y) { visited[nx][ny] = false; }
//					else { visited[nx][ny] = true; }
//					//printf("next x : %d y : %d dir : %d ordercnt : %d \n\n", next.x, next.y, next.dir, next.ordercnt);
//					Q.push(next);
//
//				}
//
//
//			}
//			
//		}
//
//
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
//int main() {
//
//	//M 세로 N 가로
//	cin >> M >> N;
//
//	for (int i = 1; i <= M; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	
//	cin >> start.x >> start.y >> start.dir;
//	cin >> target.x >> target.y >> target.dir;
//	/*printf("start x : %d y : %d dir : %d ordercnt : %d \n\n", start.x, start.y, start.dir, start.ordercnt);
//	printf("target x : %d y : %d dir : %d ordercnt : %d \n\n", target.x, target.y, target.dir, target.ordercnt);*/
//	visited[start.x][start.y] = true;
//	Q.push(start);
//	BFS(start);
//
//	printf("%d",res);
//
//
//
//}