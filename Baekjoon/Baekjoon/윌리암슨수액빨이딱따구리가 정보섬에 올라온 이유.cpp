#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>

#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define MAX 3001
using namespace std;

int N, M;

char map[MAX][MAX];
bool visited[MAX][MAX];

int dx[] = { 0,1,-1,0 };
int dy[] = { 1,0,0,-1 };

int cnt = 0;
int flag = 0;
int mini = 0;
queue<pair<pair<int,int>,int>>Q;
void BFS() {

	pair<pair<int, int>, int> current;
	while (!Q.empty()) {
		current = Q.front();
		Q.pop();
		//printf("current x : %d y : %d cnt : %d \n", current.first.first, current.first.second, current.second);


		for (int i = 0; i < 4; i++) {
			int nx = current.first.first + dx[i];
			int ny = current.first.second + dy[i];

			if (nx >= 1 && nx <= N && ny >= 1 && ny <= M && !visited[nx][ny]) {

				if (map[nx][ny] == '1') { continue; }
				else {
					if (map[nx][ny] == '3' || map[nx][ny] == '4' || map[nx][ny] == '5') {
						//printf("´ÙÀ½¿¡ µµÂø\n");
						flag = 1;
						cout << "TAK" << endl;
						
						mini = current.second + 1;
						cout << mini;
						return;
					}
					if (map[nx][ny] == '0') {
						visited[nx][ny] = true;
						pair<pair<int, int>, int>next;
						next.first.first = nx;
						next.first.second = ny;
						next.second = current.second + 1;
						Q.push(next);
					}
				}

			}
		}

	}
	if (flag == 1) { return; }
}


int main() {
	fastio;
	pair<pair<int, int>, int> start;
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		string inputs = "";
		cin >> inputs; 
		for (int j = 0; j < inputs.size(); j++) {
			map[i][j + 1] = inputs[j];
			
			if (map[i][j + 1] == '2') {
				start.first.first = i;
				start.first.second = j+1;
				start.second = 0;
				Q.push(start);
			}
		}
	}

	visited[start.first.first][start.first.second] = true;
	BFS();
	if (flag == 0) {
		cout << "NIE";
	}

}