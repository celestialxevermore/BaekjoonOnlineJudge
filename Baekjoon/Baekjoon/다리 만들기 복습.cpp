#include<iostream>
#include<stdio.h>
#include<queue>

using namespace std;


int N;

int map[101][101];
bool visited[101][101];


int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,1,-1 };

typedef struct node {
	int x;
	int y;
	int cnt = 0;
	int info = 0;
}Node;

int count_ = 1;

queue<Node> Q;



void BFS1() {

	Node current;
	while (!Q.empty()) {

		current = Q.front();
		Q.pop();


		for (int i = 0; i < 4; i++) {

			int x = current.x + dx[i];
			int y = current.y + dy[i];
			

			if (x >= 1 && y >= 1 && x <= N && y <= N && !visited[x][y] && map[x][y] == 1) {
				visited[x][y] = true;
				map[x][y] = count_;
				Node next;
				next.x = x;
				next.y = y;
				
				Q.push(next);
			}


		}


	}


}
int mini = 100000;
void BFS2() {

	Node current;
	while (!Q.empty()) {

		current = Q.front();
		Q.pop();

		for (int i = 0; i < 4; i++) {

			int x = current.x + dx[i];
			int y = current.y + dy[i];
			int info = current.info;
			if (map[x][y] != info && map[x][y] != 0) {
				if (mini > current.cnt) {
					mini = current.cnt;
				}
			}


		}




		for (int i = 0; i < 4; i++) {
			int x = current.x + dx[i];
			int y = current.y + dy[i];
			int c = current.cnt + 1;
			int info = current.info;



			if (x >= 1 && y >= 1 && x <= N && y <= N && !visited[x][y] && map[x][y] == 0) {
				visited[x][y] = true;
				Node next;
				next.x = x;
				next.y = y;
				next.cnt = c;
				next.info = info;
				Q.push(next);

			}

		}



	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			visited[i][j] = false;
		}
	}

}

int main() {

	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {

			if (map[i][j] != 0 && !visited[i][j]) {
				Node start;
				start.x = i;
				start.y = j;
				start.cnt = 0;
				visited[i][j] = true;
				map[i][j] = count_;
				Q.push(start);
				BFS1();
				count_++;
			}


		}


	}

	/*for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	printf("\n");*/



	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (map[i][j] != 0) {
				int cur = map[i][j];
				Node start;
				start.x = i;
				start.y = j;
				start.cnt = 0;
				start.info = cur;
				visited[start.x][start.y] = true;
				
				Q.push(start);
				//printf("start x : %d y : %d cnt : %d info : %d\n\n", start.x, start.y, start.cnt, start.info);
				BFS2();
			}
			


		}
	}

	if (mini != 100000) {
		printf("%d", mini);
	}
	
}
