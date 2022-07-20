//#include<iostream>
//#include<vector>
//#include<string>
//#include<queue>
//#define MAX 51
//using namespace std;
//
//int N, M;
//
////vector<vector<char>>map (MAX,vector<char>(MAX));
////vector<vector<bool>>visited(MAX, vector<bool>(MAX));
//char map[MAX][MAX];
//char visited[MAX][MAX];
//
//int res1 = 0;
//int res2 = 0;
//
//typedef struct point {
//	int x;
//	int y;
//	char p;
//}P;
//
//queue<P>Q1;
//queue<P>Q2;
//
//int dx[] = { 0,1 };
//int dy[] = { 1,0 };
//
//void BFS1(P start) {
//	P current;
//
//	while (!Q1.empty()) {
//
//		current = Q1.front();
//		Q1.pop();
//
//		while (current.y + 1 <= M && !visited[current.x][current.y + 1] && map[current.x][current.y + 1] == current.p) {
//			visited[current.x][current.y + 1] = true;
//			P next;
//			next.x = current.x;
//			next.y = current.y + 1;
//			next.p = current.p;
//			Q1.push(next);
//		}
//
//
//	}
//	res1++;
//
//}
//void BFS2(P start) {
//	P current;
//
//	while (!Q2.empty()) {
//
//		current = Q2.front();
//		Q2.pop();
//
//		while (current.x + 1 <= M && !visited[current.x+1][current.y] && map[current.x+1][current.y] == current.p) {
//			visited[current.x+1][current.y] = true;
//			P next;
//			next.x = current.x+1;
//			next.y = current.y;
//			next.p = current.p;
//			Q2.push(next);
//		}
//
//
//	}
//	res2++;
//
//}
//
//
//int main() {
//
//	cin >> N >> M;
//
//
//	for (int i = 1; i <= N; i++) {
//		
//		string inputs = "";
//		cin >> inputs;
//		
//		for (int j = 0; j < inputs.size(); j++) {
//			map[i][j + 1] = inputs[j];
//		}
//	}
//
//
//
//
//	//세로 먼저
//	for (int i = 1; i <= N; i++) {
//
//		for (int endpoint = 1; endpoint <= M; endpoint++) {
//
//			if (map[i][endpoint] == '-' && !visited[i][endpoint]) {
//				visited[i][endpoint] = true;
//				P start;
//				start.x = i;
//				start.y = endpoint;
//				start.p = '-';
//				Q1.push(start);
//				//printf("- start :%d %d \n\n", start.x, start.y);
//				//printf("current res1 : %d\n\n", res1);
//				BFS1(start);
//			}
//		}
//
//
//	}
//	
//	for (int i = 1; i <= M; i++) {
//		
//		for (int endpoint = 1; endpoint <= N; endpoint++) {
//			
//			if (map[endpoint][i] == '|' && !visited[endpoint][i]) {
//				
//				visited[endpoint][i] = true;
//				P start;
//				start.x = endpoint;
//				start.y = i;
//				start.p = '|';
//				Q2.push(start);
//				//printf("| start :%d %d \n\n", start.x, start.y);
//				//printf("current res2 : %d\n\n", res2);
//				BFS2(start);
//			}
//		}
//	}
//
//	cout << res1 + res2;
//
//}