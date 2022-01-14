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
//		//사방 탐색을 시작합니다.
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
//	//N과 M을 입력 받습니다.
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) {
//		string input = "";
//		cin >> input;
//
//		//input은 char이기 때문에 아스키 값 0을 빼면 int로 떨어지게 된다. 
//		//python으로 치면 ord(input[j])-ord('0')을 하여 숫자를 떨어뜨린 것과 같다.
//		for (int j = 0; j < input.length(); j++) {
//			map[i + 1][j + 1] = input[j] - '0';
//		}
//
//	}
//
//	
//	pair<pair<int, int>, int>start;
//	//좌표 x,와 y는 1부터 시작하므로
//	start.first.first = 1;
//	start.first.second = 1;
//	//시작점을 포함하므로
//	start.second = 1;
//	visited[1][1] = true;
//	Q.push(start);
//	BFS();
//
//	printf("%d", res);
//}