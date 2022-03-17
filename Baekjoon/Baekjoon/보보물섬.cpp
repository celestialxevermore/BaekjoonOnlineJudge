#include<iostream>
#include<vector>
#include<string>
#include<queue>

using namespace std;


//vector<vector<char> > map(51);
vector<vector<char>> map(51, vector<char>(51, ' '));
//char map[51][51];
vector<vector<bool> > visited(51, vector<bool>(51, false));

int N, M;
int res = -1;


int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };



typedef struct node {
	int x;
	int y;
	char curch = ' ';
	int curcnt = 0;
}Node;

queue<Node>Q;


void init() {
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			visited[i][j] = false;
		}
	}
}



void BFS() {

	Node current;


	while (!Q.empty()) {

		current = Q.front();
		Q.pop();


		for (int i = 0; i < 4; i++) {
			int nx = current.x + dx[i];
			int ny = current.y + dy[i];

			int nc = current.curcnt + 1;
			if (nx >= 1 && nx <= N && ny >= 1 && ny <= M && !visited[nx][ny] && map[nx][ny] == 'L') {
				visited[nx][ny] = true;

				Node next;
				next.x = nx;
				next.y = ny;
				next.curcnt = nc;

				Q.push(next);
			}

		}





	}

	if (res <= current.curcnt) {
		res = current.curcnt;

	}




}



int main() {



	cin >> N >> M;


	for (int i = 1; i <= N; i++) {
		string inputs = "";

		cin >> inputs;
		
		for (int j = 0; j < inputs.size(); j++) {
			map[i][j + 1] = inputs[j];
		}
	}


	for (int i = 1; i <= N; i++) {
		
		for (int j = 1; j <= M; j++) {
			if (!visited[i][j] && map[i][j] == 'L') {
				Node start;
				start.x = i;
				start.y = j;
				start.curch = map[i][j];
				start.curcnt = 0;
				Q.push(start);
				visited[i][j] = true;
				BFS();
				init();
			}


		}
	}


	cout << res;


}