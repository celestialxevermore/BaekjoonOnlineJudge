//#include<iostream>
//#include<queue>
//#include<algorithm>
////insideout[1] [0]의미 정확히 할것!!!!!!!!!!!!!!
//using namespace std;
//
//int map[101][101];
//bool insideout[1][101][101];
//bool visited[101][101];
//
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//int time_ = 0;
//int N, M;
//typedef struct cheeze {
//	int x;
//	int y;
//	bool isch;
//	bool nextm;
//}C;
//
//queue<C>Q_for_outside;
//
//bool istherecheeze() {
//	
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			//아직 뭔가 있음
//			if (map[i][j] != 0) {
//				return true;
//			}
//			
//		}
//	}
//	return false;
//}
//
//void BFS_for_outsidecheking() {
//
//	C current;
//	while (!Q_for_outside.empty()) {
//		current = Q_for_outside.front();
//		Q_for_outside.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//
//
//			if (!insideout[0][x][y] && map[x][y] == 0&&!insideout[1][x][y]) {
//				insideout[0][x][y] = true;
//				insideout[1][x][y] = true;
//				C next;
//				next.x = x;
//				next.y = y;
//				Q_for_outside.push(next);
//			}
//		}
//
//
//	}
//	
//	/*for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (!insideout[0][i][j] && map[i][j] == 0&&!insideout[1][i][j]) {
//				printf("해당 좌표 x : %d y : %d 는 외부접촉이 없는 공기입니다!\n\n", i, j);
//				
//			}
//		}
//	}*/
//}
//
//
//
//void findnextmelting() {
//
//
//	//일단 외부인지 내부인지를 확인해야하니깐.
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//
//			if (!insideout[0][i][j] && map[i][j] == 0) {
//				insideout[0][i][j] = true;
//				insideout[1][i][j] = true;
//				C start;
//				start.x = i;
//				start.y = j;
//				start.isch = false;
//				start.nextm = false;
//				Q_for_outside.push(start);
//				BFS_for_outsidecheking();
//			}
//
//
//		}
//	}
//	printf("내외부 검사가 모두 확인되었습니다.\n\n");
//	int smap[101][101];
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			smap[i][j] = map[i][j];
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (!insideout[0][i][j] && map[i][j] == 0 && !insideout[1][i][j]) {
//				printf("해당 좌표 x : %d y : %d 는 외부접촉이 없는 공기입니다!\n\n", i, j);
//				smap[i][j] = 3;
//			}
//			if (insideout[1][i][j] && map[i][j] == 0 && insideout[0][i][j]) {
//				smap[i][j] = 4;
//			}
//		}
//	}
//
//	printf("임시 맵 \n\n");
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", smap[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");
//
//	//치즈를 일일이 확인하면서 만일 0이면서, 외부인 인접점의 개수가 
//	//2이상일 경우, 해당 점을 2로 바꿔준다.
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (map[i][j] == 1) {
//				int cnt = 0;
//				for (int k = 0; k < 4; k++) {
//					int x = i + dx[k];
//					int y = j + dy[k];
//					if (map[x][y] == 0 && !insideout[1][x][y]) {
//						cnt++;
//					}
//				}
//				if (cnt >= 2) {
//					map[i][j] = 2;
//				}
//				else {
//					continue;
//				}
//			}
//		}
//	}
//	printf("다음에 녹게될 치즈의 정보를 1->2로 바꾸는 작업이 완료되었습니다.\n\n");
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");
//}
//
//void melt() {
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (map[i][j] == 2) {
//				map[i][j] = 0;
//			}
//		}
//	}
//	
//	printf("one time melting process is done!\n\n");
//	printf("current time : %d\n\n", time_-16843008);
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");
//}
//
//int main() {
//
//
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//
//
//
//	while (istherecheeze()) {
//		findnextmelting();
//		melt();
//		time_++;
//	}
//	printf("%d", time_-16843008);
//}
