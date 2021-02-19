#include<stdio.h>
#include<iostream>
#include<vector>
#define MAX 101
using namespace std;
int N;

char map[MAX][MAX];
bool visited[MAX][MAX];

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

int Bluecnt = 0;
int Redcnt = 0;
int Greencnt = 0;


void DFS1(pair<int, int> start) {

	pair<int, int>current;
	current.first = start.first;
	current.second = start.second;

	for (int i = 0; i < 4; i++) {
		int x = current.first + dx[i];
		int y = current.second + dy[i];

		if (x < 0 || y < 0 || x >= N || y >= N) {
			//printf("좌표 (%d,%d) : 해당 좌표는 범위 밖입니다. \n\n", x, y);
			continue;
		}
		if (map[x][y] == 'R' || map[x][y] == 'G') {
			//printf("좌표 (%d,%d) : 해당 좌표는 %c입니다. \n\n", x, y, map[x][y]);
			continue;
		}
		if (visited[x][y]) {
			//printf("좌표 (%d,%d) : 해당 좌표는 이미 방문을 하였습니다. \n\n", x, y);
			continue;
		}
		if (map[x][y] == 'B' && !visited[x][y]) {
			//printf("좌표 (%d,%d) : 해당 좌표는 파란색이고 아직 방문하지 않았습니다. \n\n", x, y);
			visited[x][y] = true;
			pair<int, int>next;
			next.first = x;
			next.second = y;
			DFS1(next);
		}


	}
}
void DFS2(pair<int, int>start) {
	pair<int, int>current;
	current.first = start.first;
	current.second = start.second;

	for (int i = 0; i < 4; i++) {
		int x = current.first + dx[i];
		int y = current.second + dy[i];

		if (x < 0 || y < 0 || x >= N || y >= N) {
			//printf("좌표 (%d,%d) : 해당 좌표는 범위 밖입니다. \n\n", x, y);
			continue;
		}
		if (map[x][y] !='R') {
			//printf("좌표 (%d,%d) : 해당 좌표는 R가 아닙니다. \n\n", x, y);
			continue;
		}
		if (visited[x][y]) {
			//printf("좌표 (%d,%d) : 해당 좌표는 이미 방문을 하였습니다. \n\n", x, y);
			continue;
		}
		if (map[x][y] == 'R' && !visited[x][y]) {
			//printf("좌표 (%d,%d) : 해당 좌표는 빨간색이고 아직 방문하지 않았습니다 방문해줍니다!!. \n\n", x, y);
			visited[x][y] = true;
			pair<int, int>next;
			next.first = x;
			next.second = y;
			DFS2(next);
		}
	}
}
void DFS3(pair<int, int>start) {
	pair<int, int>current;
	current.first = start.first;
	current.second = start.second;

	for (int i = 0; i < 4; i++) {
		int x = current.first + dx[i];
		int y = current.second + dy[i];

		if (x < 0 || y < 0 || x >= N || y >= N) {
			//printf("좌표 (%d,%d) : 해당 좌표는 범위 밖입니다. \n\n", x, y);
			continue;
		}
		if (map[x][y] != 'G') {
			//printf("좌표 (%d,%d) : 해당 좌표는 R가 아닙니다. \n\n", x, y);
			continue;
		}
		if (visited[x][y]) {
			//printf("좌표 (%d,%d) : 해당 좌표는 이미 방문을 하였습니다. \n\n", x, y);
			continue;
		}
		if (map[x][y] == 'G' && !visited[x][y]) {
			//printf("좌표 (%d,%d) : 해당 좌표는 빨간색이고 아직 방문하지 않았습니다 방문해줍니다!!. \n\n", x, y);
			visited[x][y] = true;
			pair<int, int>next;
			next.first = x;
			next.second = y;
			DFS3(next);
		}
	}
}



int main() {
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}
	
	//적록색약인 사람들은 B만 세면 됨. 
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 'B'&&!visited[i][j]) {
				pair<int, int>start;
				start.first = i;
				start.second = j;
				visited[i][j] = true;
				//printf("<<<좌표 :(%d,%d)에서 DFS 탐색을 시작합니다!!>>>\n\n\n", start.first, start.second);
				DFS1(start);
				//printf("파란 영역을 하나 찾았습니다!! \n\n");
				
				Bluecnt++;
				//printf("현재까지의 파란색 영역 : %d \n\n", Bluecnt);
			}


		}
	}

	//printf("<<<<일단 파란색 영역을 전부 찾았습니다. >>>\n\n\n");

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			visited[i][j] = false;
		}
	}



	//적록색약인 사람이 보는 영역은 Bluecnt에서 +1을 한 결과와 같다. 
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 'R'&&!visited[i][j]) {
				pair<int, int>start;
				start.first = i;
				start.second = j;
				visited[i][j] = true;
				//printf("<<<좌표 :(%d,%d)에서 DFS 탐색을 시작합니다!!>>>\n\n\n", start.first, start.second);
				DFS2(start);
				//printf("빨간 영역을 하나 찾았습니다!! \n\n");

				Redcnt++;
				//printf("현재까지의 빨간색 영역 : %d \n\n", Redcnt);
			}


		}
	}
	//적록색약인 사람이 보는 영역은 Bluecnt에서 +1을 한 결과와 같다. 
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 'G' && !visited[i][j]) {
				pair<int, int>start;
				start.first = i;
				start.second = j;
				visited[i][j] = true;
				//printf("<<<좌표 :(%d,%d)에서 DFS 탐색을 시작합니다!!>>>\n\n\n", start.first, start.second);
				DFS3(start);
				//printf("빨간 영역을 하나 찾았습니다!! \n\n");

				Greencnt++;
				//printf("현재까지의 빨간색 영역 : %d \n\n", Redcnt);
			}


		}
	}


	printf("%d %d", Bluecnt+Redcnt+Greencnt,Redcnt+Greencnt);

}