#include<iostream>
#include<vector>
#include<string>
#include<queue>

using namespace std;

int R, C;
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
//vector<int> input(50, 1);
vector<vector<char>> map(1501, vector<char>(1501, ' '));
vector<vector<bool> > visited(1501, vector<bool>(1501, false));

int cnt = 0;
typedef struct baek {
	int x;
	int y;
	
}B;
B start;
B end;



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
			if (map[i][j] == 'L') {
				start.x = i;
				start.y = j;
			}
		}
	}




}