#include<iostream>
#include<vector>
#include<queue>
#include<string>
using namespace std;
int R, C;
char map[251][251];
bool visited[251][251];

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

typedef struct node {
	int x;
	int y;
	int kcnt = 0;
	int vcnt = 0;
}Node;

queue<Node>Q;

int res1 = 0;
int res2 = 0;

int a = 0;
int b = 0;

void BFS() {
	Node cur;
	while (!Q.empty()) {
		cur = Q.front();
		Q.pop();
		for (int i = 0; i < 4; i++) {
			
			int nextx = cur.x + dx[i];
			int nexty = cur.y + dy[i];
			
			if (nextx >= 1 && nextx <= R && nexty >= 1 && nexty <= C && !visited[nextx][nexty]) {
				
				if (map[nextx][nexty] == '#') { continue; }
				
				else if (map[nextx][nexty] == '.') {
					visited[nextx][nexty] = true;
					Node next;
					next.x = nextx;
					next.y = nexty;
					next.kcnt = cur.kcnt;
					next.vcnt = cur.vcnt;
					Q.push(next);
				}
				else if (map[nextx][nexty] == 'k') {
					visited[nextx][nexty] = true;
					Node next;
					next.x = nextx;
					next.y = nexty;
					res1++;
					Q.push(next);
				}
				else if (map[nextx][nexty] == 'v') {
					visited[nextx][nexty] = true;
					Node next;
					next.x = nextx;
					next.y = nexty;
					res2++;
					Q.push(next);
				}

			}
		}

	}

	if (res1 > res2) {
		res2 = 0;
	}
	else if (res1 <= res2) {
		res1 = 0;
	}
	
	a += res1;
	b += res2;

}


int main() {

	cin >> R >> C;
	for (int i = 1; i <= R; i++) {
		string inputs = "";
		cin >> inputs;
		for (int j = 0; j < inputs.size(); j++) {
			map[i][j + 1] = inputs[j];
		}
	}
	
	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			if (map[i][j] == 'k' or map[i][j] == 'v') {
				if (!visited[i][j]) {
					visited[i][j] = true;
					Node start;
					start.x = i;
					start.y = j;
					if (map[i][j] == 'k') { res1++; }
					else if (map[i][j] == 'v') { res2++; }
					//printf("½ÃÀÛ\n");
					Q.push(start);
					BFS();
					res1 = 0;
					res2 = 0;
				}
			}
		}
	}
	cout << a << ' ' << b;
}