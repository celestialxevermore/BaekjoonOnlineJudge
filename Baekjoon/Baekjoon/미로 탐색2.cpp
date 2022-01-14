//#include<iostream>
//#include<vector>
//#include<queue>
//#include<string>
//#include<algorithm>
//#define MAX 101
//using namespace std;
//
//int N, M;
//
//
//int map[MAX][MAX];
//bool visited[MAX][MAX];
//
//queue<pair<pair<int, int>, int>>Q;
//int res = 100001;
//
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//
//void BFS() {
//
//
//	pair<pair<int, int>, int>current;
//	while (Q.empty() != true) {
//		current = Q.front();
//		
//		Q.pop();
//
//		if (current.first.first == N && current.first.second == M) {
//
//			res = min(res, current.second);
//		}
//
//
//
//		//��� Ž���� �����մϴ�.
//		for (int i = 0; i < 4; i++) {
//			int nx = current.first.first+dx[i];
//			int ny = current.first.second + dy[i];
//			int ncnt = current.second + 1;
//
//
//
//			if (nx >= 1 && nx <= N && ny >= 1 && ny <= M && map[nx][ny] == 1 && !visited[nx][ny]) {
//
//				visited[nx][ny] = true;
//				pair<pair<int, int>, int>next;
//				next.first.first = nx;
//				next.first.second = ny;
//				next.second = ncnt;
//				
//				Q.push(next);
//			}
//
//		}
//
//
//
//	}
//
//}
//
//
//int main() {
//
//	//N�� M�� �Է� �޽��ϴ�.
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) {
//		string input = "";
//		cin >> input;
//
//		//input�� char�̱� ������ �ƽ�Ű �� 0�� ���� int�� �������� �ȴ�. 
//		//python���� ġ�� ord(input[j])-ord('0')�� �Ͽ� ���ڸ� ����߸� �Ͱ� ����.
//		for (int j = 0; j < input.length(); j++) {
//			map[i + 1][j + 1] = input[j] - '0';
//		}
//
//	}
//
//	
//	pair<pair<int, int>, int>start;
//	//��ǥ x,�� y�� 1���� �����ϹǷ�
//	start.first.first = 1;
//	start.first.second = 1;
//	//�������� �����ϹǷ�
//	start.second = 1;
//	visited[1][1] = true;
//	Q.push(start);
//	BFS();
//
//	printf("%d", res);
//}