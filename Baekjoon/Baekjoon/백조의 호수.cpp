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
vector<vector<char>> original(1501, vector<char>(1501, ' '));
vector<vector<bool> > visited(1501, vector<bool>(1501, false));

int cnt = 0;


typedef struct baek {
	int x;
	int y;
	
}B;
B start;
B target;
B baek[2];
int bcnt = 0;


queue<pair<int,int> >Q1;
queue<B>Q2;
void update() {
	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			original[i][j] = map[i][j];
		}
	}


}


void BFS1() {

	pair<int, int>current;

	while (!Q1.empty()) {
		current = Q1.front();
		Q1.pop();

		for (int i = 0; i < 4; i++) {

			int nx = current.first + dx[i];
			int ny = current.second + dy[i];

			//���� ������
			if (nx >= 1 && nx <= R && ny >= 1 && ny <= C) {

				//���� �߰ߵ� ���� X�̸� �̸� ���� �ٲ��ش�. 
				if (map[nx][ny] == 'X') {
					map[nx][ny] = '.';

				}
				//���� ���� ������ ������ ��
				else if (map[nx][ny] == '.') {

					//�ش� ������ ���� �����̾��µ� �̹� ���� �ٲ����� ���
					//�ƹ��� ���굵 ���� �ʴ´�. 
					if (original[nx][ny] == 'X') {
						continue;
					}
					//�ش� ������ ���� ���ǵ� �ƴϾ���, ���� �湮���� ���� ���� ���
					else if (original[nx][ny] == '.' && !visited[nx][ny]) {
						
						visited[nx][ny] = true;
						pair<int, int>next;
						next.first = nx;
						next.second = ny;
						Q1.push(next);

					}
					//�ش� ������ ������ ��� 
					else if (original[nx][ny] == 'L') {
						continue;
					}

				}
				


			}


		}


	}



}

bool BFS2() {

	B current;

	while (!Q2.empty()) {

		current = Q2.front();
		Q2.pop();

		for (int i = 0; i < 4; i++) {

			int nx = current.x;
			int ny = current.y;

			if (nx >= 1 && nx <= R && ny >= 1 && ny <= C) {

				
			}


		}


	}


}



int main() {

	cin >> R >> C;

	for (int i = 1; i <= R; i++) {
		string inputs = "";

		cin >> inputs;
		for (int j = 0; j < inputs.size(); j++) {
			map[i][j + 1] = inputs[j];
			original[i][j + 1] = inputs[j];
		}

	}

	//������ ��ġ ���� ����

	for (int i = 1; i <= R; i++) {
		
		for (int j = 1; j <= C; j++) {
			if (map[i][j] == 'L') {
				baek[bcnt].x = i;
				baek[bcnt].y = j;
				bcnt++;
			}


		}
	}
	//���� ��ġ Ȯ�� ���
	start.x = baek[0].x;
	start.y = baek[0].y;

	target.x = baek[1].x;
	target.y = baek[1].y;



	while (true) {
		cnt++;
		//�׷��� �־����� ������ �ٷ� ���� ���� ���� �ʳ�?

		//���� ���� BFS�� ����. 
		for (int i = 1; i <= R; i++) {
			
			for (int j = 1; j <= C; j++) {

				if (map[i][j] == '.' && !visited[i][j]) {
					visited[i][j] = true;
					pair<int, int>dot;
					dot.first = i;
					dot.second = j;
					BFS1();

					update();


					Q2.push(start);
					BFS2();
				}


			}
		}



	}



}