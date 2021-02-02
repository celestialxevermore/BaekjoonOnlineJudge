//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<vector>
//#include<queue>
//#define MAX 101
//using namespace std;
//
//
//typedef struct start {
//	int x;
//	int y;
//	//동 : 1 서 : 2 남 : 3 북 :4 
//	int direction;
//	int movecnt;
//
//}Start;
//
//
//Start start;
//Start destination;
//
//queue<struct start>Q;
//
//
//int map[MAX][MAX];
////동서남북 순으로 배열
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//char dir[4] = { '동','서','남','북' };
//int r, c;
//
//
////동 : 1 서 : 2 남 : 3 북 :4 
//int minimum = 10000;
//
//void BFS(Start start) {
//
//	while (!Q.empty()) {
//		Start current;
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.direction = Q.front().direction;
//		current.movecnt = Q.front().movecnt;
//
//		Q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.x+dx[i];
//			int y = current.y+dy[i];
//			int direction = i;
//			if (map[x][y] == 1) {
//				printf("방향 : %c // 좌표 : (%d,%d) 해당 부분은 벽에 해당합니다. \n\n", dir[i], x, y);
//				continue;
//			}
//			if (x == destination.x && y == destination.y) {
//				if (current.direction != destination.direction) {
//					current.direction = destination.direction;
//					current.movecnt++;
//					if (current.movecnt < minimum) {
//						minimum = current.movecnt;
//					}
//				}
//
//			}
//
//
//
//			//길이 지금 뚫려있는 경우!! 
//			if (map[x][y] == 0) {
//
//				//방향을 확인해야됨... 오른쪽인지 왼쪽인지 
//				//동쪽인 경우 동 : 1
//				if (direction == 0) {
//					//방향을 한번 바꿔준다.
//					//동쪽이니까 1로 바꿔줌
//					current.direction = 1;
//					printf("%c쪽이 뚫려 있으므로 해당 방향으로 로봇을 가리키게 합니다. \n\n", dir[i]);
//					//그러면 움직임 계수를 한번 증가
//					
//					int before = current.movecnt;
//					current.movecnt++;
//					printf("이에 로봇의 명령 계수를 %d -> %d로 증가하여 줍니다.\n\n",before,current.movecnt);
//
//					//이제 움직여 줘야 함. 
//					//현재 방향, 현재 위치에서 1을 만날 때까지의 거리를 결정해줘야 합니다. 
//
//					int yy = y;
//					int move = 0;
//
//					//0 : 막다른 부분을 만나거나, 혹은 지도 밖으로 벗어나려는 경우 이전까지 
//					//이동해야하는 경우를 계산해줘야 한다. 
//					while (map[x][yy] == 1 || yy < c) {
//						yy++;
//						move++;
//					}
//					//만일 이동 계수가 3보다 작다면, (
//					if (move >= 0 && move <= 3) {
//						printf("로봇의 이동은 %d만큼 진행하여 줍니다.\n\n", move);
//						int before = current.movecnt;
//						current.movecnt++;
//						printf("로봇이 이동한 만큼 명령 계수를 %d -> %d로 증가하여 줍니다. \n\n", before, current.movecnt);
//						current.y = current.y + move;
//						printf("(%d,%d) : 예상 로봇의 위치입니다. \n\n", current.x, current.y);
//
//						Q.push(current);
//					}
//					//move가 3보다 커져 버리면
//					//예를 들어 4만큼 가야한다면 3으로 나눈 몫만큼 3을 이동하고 나머지만큼 이동을 해줘야 한다. 
//					if (move > 3) {
//						int move3cnt = move / 3;
//						int move3div = move % 3; //0,1,2중 하나인데, 여기서 또 0인 경우는 없애줘야 한다. 
//
//						int index = 0;
//						while (index < move3cnt) {
//							current.y = current.y + 3;
//							printf("로봇의 이동은 3만큼 진행하여 줍니다.\n\n");
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("로봇이 이동한 만큼 명령 계수를 %d -> %d로 증가하여 줍니다. \n\n", before, current.movecnt);
//							current.y = current.y + move;
//							printf("(%d,%d) : 예상 로봇의 위치입니다. \n\n", current.x, current.y);
//							index++;
//						}
//						if (move3div == 1 || move3div == 2) {
//							current.y = current.y + move3div;
//							printf("로봇의 이동은 %d만큼 진행하여 줍니다. \n\n", current.y);
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("로봇이 이동한 만큼 명령 계수를 %d -> %d로 증가하여 줍니다. \n\n", before, current.movecnt);
//							current.y = current.y + move3div;
//							printf("(%d,%d) : 예상 로봇의 위치입니다. \n\n", current.x, current.y);
//						}
//
//					}
//
//				}
//				//서쪽에 길이 뚫려 있는 경우 
//				if (direction == 1) {
//					//방향을 한번 바꿔준다.
//					//서쪽이니까 2로 바꿔줘야 한다.
//					current.direction = 2;
//					printf("%c쪽이 뚫려 있으므로 해당 방향으로 로봇을 가리키게 합니다. \n\n", dir[i]);
//					//그러면 움직임 계수를 한번 증가
//
//					int before = current.movecnt;
//					current.movecnt++;
//					printf("이에 로봇의 명령 계수를 %d -> %d로 증가하여 줍니다.\n\n", before, current.movecnt);
//
//					//이제 움직여 줘야 함. 
//					//현재 방향, 현재 위치에서 1을 만날 때까지의 거리를 결정해줘야 합니다. 
//
//					int yy = y;
//					int move = 0;
//
//					//1 : 막다른 부분을 만나거나, 혹은 지도 밖으로 벗어나려는 경우 이전까지 
//					//이동해야하는 경우를 계산해줘야 한다. 
//					while (map[x][yy] == 1 || yy >= 0) {
//						yy--;
//						move++;
//					}
//					//만일 이동 계수가 3보다 작다면, (
//					if (move >= 0 && move <= 3) {
//						printf("로봇의 이동은 %d만큼 진행하여 줍니다.\n\n", move);
//						int before = current.movecnt;
//						current.movecnt++;
//						printf("로봇이 이동한 만큼 명령 계수를 %d -> %d로 증가하여 줍니다. \n\n", before, current.movecnt);
//						current.y = current.y - move;
//						printf("(%d,%d) : 예상 로봇의 위치입니다. \n\n", current.x, current.y);
//
//						Q.push(current);
//					}
//					//move가 3보다 커져 버리면
//					//예를 들어 4만큼 가야한다면 3으로 나눈 몫만큼 3을 이동하고 나머지만큼 이동을 해줘야 한다. 
//					if (move > 3) {
//						int move3cnt = move / 3;
//						int move3div = move % 3; //0,1,2중 하나인데, 여기서 또 0인 경우는 없애줘야 한다. 
//
//						int index = 0;
//						while (index < move3cnt) {
//							current.y = current.y - 3;
//							printf("로봇의 이동은 3만큼 진행하여 줍니다.\n\n");
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("로봇이 이동한 만큼 명령 계수를 %d -> %d로 증가하여 줍니다. \n\n", before, current.movecnt);
//							current.y = current.y + 3;
//							printf("(%d,%d) : 예상 로봇의 위치입니다. \n\n", current.x, current.y);
//							index++;
//						}
//						if (move3div == 1 || move3div == 2) {
//							current.y = current.y - move3div;
//							printf("로봇의 이동은 %d만큼 서쪽으로 진행하여 줍니다. \n\n", current.y);
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("로봇이 이동한 만큼 명령 계수를 %d -> %d로 증가하여 줍니다. \n\n", before, current.movecnt);
//							current.y = current.y - move3div;
//							printf("(%d,%d) : 예상 로봇의 위치입니다. \n\n", current.x, current.y);
//						}
//
//					}
//				}
//				//남쪽이 뚫려있는 경우 
//				if (direction == 2) {
//					//방향을 한번 바꿔준다.
//					//동쪽이니까 1로 바꿔줌
//					current.direction = 3;
//					printf("%c쪽이 뚫려 있으므로 해당 방향으로 로봇을 가리키게 합니다. \n\n", dir[i]);
//					//그러면 움직임 계수를 한번 증가
//
//					int before = current.movecnt;
//					current.movecnt++;
//					printf("이에 로봇의 명령 계수를 %d -> %d로 증가하여 줍니다.\n\n", before, current.movecnt);
//
//					//이제 움직여 줘야 함. 
//					//현재 방향, 현재 위치에서 1을 만날 때까지의 거리를 결정해줘야 합니다. 
//
//					int xx = x;
//					int move = 0;
//
//					//0 : 막다른 부분을 만나거나, 혹은 지도 밖으로 벗어나려는 경우 이전까지 
//					//이동해야하는 경우를 계산해줘야 한다. 
//					while (map[xx][y] == 1 || xx < r) {
//						xx++;
//						move++;
//					}
//					//만일 이동 계수가 3보다 작다면, (
//					if (move >= 0 && move <= 3) {
//						printf("로봇의 이동은 %d만큼 진행하여 줍니다.\n\n", move);
//						int before = current.movecnt;
//						current.movecnt++;
//						printf("로봇이 이동한 만큼 명령 계수를 %d -> %d로 증가하여 줍니다. \n\n", before, current.movecnt);
//						current.x = current.x + move;
//						printf("(%d,%d) : 예상 로봇의 위치입니다. \n\n", current.x, current.y);
//
//						Q.push(current);
//					}
//					//move가 3보다 커져 버리면
//					//예를 들어 4만큼 가야한다면 3으로 나눈 몫만큼 3을 이동하고 나머지만큼 이동을 해줘야 한다. 
//					if (move > 3) {
//						int move3cnt = move / 3;
//						int move3div = move % 3; //0,1,2중 하나인데, 여기서 또 0인 경우는 없애줘야 한다. 
//
//						int index = 0;
//						while (index < move3cnt) {
//							current.x = current.x + 3;
//							printf("로봇의 이동은 3만큼 진행하여 줍니다.\n\n");
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("로봇이 이동한 만큼 명령 계수를 %d -> %d로 증가하여 줍니다. \n\n", before, current.movecnt);
//							current.x = current.x + move;
//							printf("(%d,%d) : 예상 로봇의 위치입니다. \n\n", current.x, current.y);
//							index++;
//						}
//						if (move3div == 1 || move3div == 2) {
//							current.x = current.x + move3div;
//							printf("로봇의 이동은 %d만큼 진행하여 줍니다. \n\n", current.x);
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("로봇이 이동한 만큼 명령 계수를 %d -> %d로 증가하여 줍니다. \n\n", before, current.movecnt);
//							current.x = current.x + move3div;
//							printf("(%d,%d) : 예상 로봇의 위치입니다. \n\n", current.x, current.y);
//						}
//
//					}
//
//				}
//				//북쪽인 경우 
//				if (direction == 3) {
//					//방향을 한번 바꿔준다.
//					//동쪽이니까 1로 바꿔줌
//					current.direction = 4;
//					printf("%c쪽이 뚫려 있으므로 해당 방향으로 로봇을 가리키게 합니다. \n\n", dir[i]);
//					//그러면 움직임 계수를 한번 증가
//
//					int before = current.movecnt;
//					current.movecnt++;
//					printf("이에 로봇의 명령 계수를 %d -> %d로 증가하여 줍니다.\n\n", before, current.movecnt);
//
//					//이제 움직여 줘야 함. 
//					//현재 방향, 현재 위치에서 1을 만날 때까지의 거리를 결정해줘야 합니다. 
//
//					int xx = x;
//					int move = 0;
//
//					//0 : 막다른 부분을 만나거나, 혹은 지도 밖으로 벗어나려는 경우 이전까지 
//					//이동해야하는 경우를 계산해줘야 한다. 
//					while (map[xx][y] == 1 || xx >= 0) {
//						xx--;
//						move++;
//					}
//					//만일 이동 계수가 3보다 작다면, (
//					if (move >= 0 && move <= 3) {
//						printf("로봇의 이동은 %d만큼 진행하여 줍니다.\n\n", move);
//						int before = current.movecnt;
//						current.movecnt++;
//						printf("로봇이 이동한 만큼 명령 계수를 %d -> %d로 증가하여 줍니다. \n\n", before, current.movecnt);
//						current.x = current.x - move;
//						printf("(%d,%d) : 예상 로봇의 위치입니다. \n\n", current.x, current.y);
//
//						Q.push(current);
//					}
//					//move가 3보다 커져 버리면
//					//예를 들어 4만큼 가야한다면 3으로 나눈 몫만큼 3을 이동하고 나머지만큼 이동을 해줘야 한다. 
//					if (move > 3) {
//						int move3cnt = move / 3;
//						int move3div = move % 3; //0,1,2중 하나인데, 여기서 또 0인 경우는 없애줘야 한다. 
//
//						int index = 0;
//						while (index < move3cnt) {
//							current.x = current.x - 3;
//							printf("로봇의 이동은 3만큼 진행하여 줍니다.\n\n");
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("로봇이 이동한 만큼 명령 계수를 %d -> %d로 증가하여 줍니다. \n\n", before, current.movecnt);
//							current.x = current.x - move;
//							printf("(%d,%d) : 예상 로봇의 위치입니다. \n\n", current.x, current.y);
//							index++;
//						}
//						if (move3div == 1 || move3div == 2) {
//							current.x = current.x - move3div;
//							printf("로봇의 이동은 %d만큼 진행하여 줍니다. \n\n", current.x);
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("로봇이 이동한 만큼 명령 계수를 %d -> %d로 증가하여 줍니다. \n\n", before, current.movecnt);
//							current.x = current.x - move3div;
//							printf("(%d,%d) : 예상 로봇의 위치입니다. \n\n", current.x, current.y);
//						}
//
//					}
//
//				}
//
//
//			}
//
//
//
//
//
//
//		}
//
//
//	}
//
//
//
//}
//
//int main() {
//
//
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	int rstart, cstart, dirstart,movecnt;
//	int rdestination, cdestination, dirdestination;
//
//	cin >> rstart >> cstart >> dirstart;
//	cin >> rdestination >> cdestination >> dirdestination;
//
//
//	start.x = rstart-1;
//	start.y = cstart-1;
//	start.direction = dirstart;
//	start.movecnt = 0;
//
//
//	destination.x = rdestination-1;
//	destination.y = cdestination-1;
//	destination.direction = dirdestination;
//
//
//
//
//	Q.push(start);
//	BFS(start);
//
//
//}