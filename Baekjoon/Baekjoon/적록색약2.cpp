//#include<iostream>
//#include<vector>
//#include<string>
//#include<queue>
//using namespace std;
//
//int N;
//
//char map[101][101];
//bool visited[101][101];
//
//
//
//
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//int red = 0;
//int blue = 0;
//int green = 0;
//typedef struct node {
//	int x;
//	int y;
//	char z;
//	
//}Node;
//
//queue<Node>Q;
//int greenred=0;
//
//int flag = 0;
//void BFS() {
//
//	Node current;
//
//	while (!Q.empty()) {
//
//		current = Q.front();
//		Q.pop();
//
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//			char z = current.z;
//			if (flag==0&& !visited[x][y] && x >= 1 && x <= N && y >= 1 && y <= N && z == map[x][y]) {
//				visited[x][y] = true;
//				Node next;
//				next.x = x;
//				next.y = y;
//				next.z = z;
//				Q.push(next);
//			}
//			if (flag == 1 && !visited[x][y] && x >= 1 && x <= N && y >= 1 && y <= N && (map[x][y] == 'G' || map[x][y] == 'R')) {
//				visited[x][y] = true;
//				Node next;
//				next.x = x;
//				next.y = y;
//				next.z = z;
//				Q.push(next);
//			}
//
//		}
//
//
//	}
//	if (flag == 0) {
//		if (current.z == 'B') {
//			blue++;
//		}
//		else if (current.z == 'R') {
//			red++;
//		}
//		else {
//			green++;
//		}
//	}
//	else {
//		greenred++;
//
//
//
//	}
//}
//
//
//int main() {
//	cin >> N;
//
//
//	for (int i = 0; i < N; i++) {
//		string a;
//		cin >> a;
//		for (int k = 0; k < a.size(); k++) {
//			map[i + 1][k + 1] = a[k];
//		}
//
//	}
//	
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//
//			if (!visited[i][j]) {
//				visited[i][j] = true;
//				Node start;
//				start.x = i;
//				start.y = j;
//				start.z = map[i][j];
//				
//				Q.push(start);
//				BFS();
//				
//			}
//			
//		}
//	}
//
//
//
//	flag = 1;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			visited[i][j] = false;
//		}
//	}
//
//	
//	//printf("blue : %d green : %d red : %d\n\n",blue,green,red);
//
//
//	
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (!visited[i][j] && (map[i][j] == 'R' || map[i][j] == 'G')) {
//
//				Node start;
//				start.x = i;
//				start.y = j;
//				start.z = map[i][j];
//				Q.push(start);
//				BFS();
//			}
//		}
//	}
//
//	//printf("greenred : %d\n\n", greenred);
//
//
//	int ans1 = red + blue + green;
//	int ans2 = greenred + blue;
//
//	printf("%d %d", ans1, ans2);
//
//}