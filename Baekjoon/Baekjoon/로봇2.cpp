#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<queue>
#define MAX 101
using namespace std;


typedef struct start {
	int x;
	int y;
	//동 : 1 서 : 2 남 : 3 북 :4 
	int direction;
	int movecnt;

}Start;

queue<struct start>Q;


int map[MAX][MAX];
//동서남북 순으로 배열
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
char dir[4] = { '동','서','남','북' };
int r, c;


//동 : 1 서 : 2 남 : 3 북 :4 
int minimum = 10000;

void BFS(Start start) {

	while (!Q.empty()) {
		

		for (int i = 0; i < 4; i++) {
			

			if (map[x][y] == 1) {
				printf("방향 : %c // 좌표 : (%d,%d) 해당 부분은 벽에 해당합니다. \n\n", dir[i], x, y);
				continue;
			}

			//길이 지금 뚫려있는 경우!! 
			if (map[x][y] == 0) {

			}






		}


	}



}

int main() {


	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> map[i][j];
		}
	}

	int rstart, cstart, dirstart,movecnt;
	int rdestination, cdestination, dirdestination;

	cin >> rstart >> cstart >> dirstart;
	cin >> rdestination >> cdestination >> dirdestination;

	Start start;
	Start destination;

	start.x = rstart;
	start.y = cstart;
	start.direction = dirstart;
	start.movecnt = 0;


	destination.x = rdestination;
	destination.y = cdestination;
	destination.direction = dirdestination;




	Q.push(start);
	BFS(start);


}