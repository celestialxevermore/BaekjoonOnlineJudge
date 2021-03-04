//#include<iostream>
//#include<string>
//#include<queue>
//#define MAX 1001
//
//using namespace std;
//
//int N, M;
//int map[MAX][MAX];
//
//int visited[MAX][MAX][2];
//
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//
//typedef struct Pos {
//	int y;
//	int x;
//	int breakingwall;
//}pos;
//queue<pos>Q;
//
//void bfs() {
//	visited[1][1][0] = 1;
//	pos current;
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//
//		if (current.y == N && current.x == M) {
//			cout << visited[current.y][current.x][current.breakingwall];
//		}
//		for (int i = 0; i < 4; i++) {
//
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//
//			if (x <= 0 || y <= 0 || x > M || y > N) { continue; }
//			if (visited[y][x][current.breakingwall]) { continue; }
//			//벽을 부수고 도달하였든 아니든 어쨌든 방문한 적이 있으면 continue한다. 
//
//			if (map[y][x] == 0) {
//				pos next;
//				next.x = x; next.y = y; next.breakingwall = current.breakingwall;
//				visited[next.y][next.x][next.breakingwall] = visited[current.y][current.x][current.breakingwall];
//				Q.push(next);
//			}
//			if (map[y][x] == 1 && current.breakingwall == 0) {
//
//				visited[y][x][1] = visited[current.y][current.x][current.breakingwall] + 1;
//				pos next;
//				next.x = x;
//				next.y = y;
//				next.breakingwall = 1;
//				Q.push(next);
//
//			}
//
//
//
//
//
//
//
//
//
//
//		}
//
//	}
//
//}
//
//
//int main() {
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	pos start;
//	start.x = 1;
//	start.y = 1;
//	start.breakingwall = 0;
//	Q.push(start);
//	bfs();
//
//
//	
//   cout << endl << endl;
//
//   for (int i = 1; i <= N; i++)
//   {
//	   for (int j = 1; j <= M; j++)
//	   {
//		   cout << visited[i][j][0] << "  ";
//	   }
//	   cout << endl;
//   }
//
//   cout << endl;
//
//   for (int i = 1; i <= N; i++)
//   {
//	   for (int j = 1; j <= M; j++)
//	   {
//		   cout << visited[i][j][1] << "  ";
//	   }
//	   cout << endl;
//   }
//   
//
//}