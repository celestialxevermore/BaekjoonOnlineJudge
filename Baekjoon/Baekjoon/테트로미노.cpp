//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//
//int N, M;
//int maxi = -1;
//
//int map[501][501];
//int ret[501][501];
//bool visited[501][501];
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { 1,-1,0,0 };
//
//typedef struct node {
//	int x;
//	int y;
//	int cnt = 0;
//	int sum = 0;
//}Node;
//queue<Node>Q;
//
//
//
//
//
//
////int BFS(Node start) {
////	int ret = 0;
////	Node current;
////
////	while (!Q.empty()) {
////		current = Q.front();
////		Q.pop();
////
////		if (current.cnt == 3) {
////			if (ret < current.sum) {
////				ret = current.sum;
////			}
////		}
////
////
////		for (int i = 0; i < 4; i++) {
////			int x = current.x + dx[i];
////			int y = current.y + dy[i];
////			int c = current.cnt + 1;
////
////
////			if (x >= 1 && y >= 1 && x <= N && y <= M && !visited[x][y]) {
////				visited[x][y] = true;
////				int sum = current.sum + map[x][y];
////				Node next;
////				next.x = x;
////				next.y = y;
////				next.cnt = c;
////				next.sum = sum;
////				Q.push(next);
////			}
////		}
////
////
////
////	}
////	printf("ret : %d\n\n", ret);
////	return ret;
////}
//
//
////왜 문제인지 모르겠음
////int DFS(Node start) {
////	int ans = 0;
////
////
////	if (start.cnt == 2) {
////		printf("dfs end :%d \n\n", start.sum);
////		int candi = 0;
////		
////		Q.push(start);
////		candi=BFS(start);
////
////		if (ans < candi) {
////			ans = candi;
////		}
////
////
////	}
////	else {
////		printf("start x : %d y :%d cnt : %d sum :%d \n\n", start.x, start.y, start.cnt, start.sum);
////		for (int i = 0; i < 4; i++) {
////			
////			int x = start.x + dx[i];
////			int y = start.y + dy[i];
////			int c = start.cnt + 1;
////			int sum = start.sum + map[x][y];
////			printf("x : %d y :%d cnt : %d sum : %d\n\n",x,y,c,sum);
////			if (x<1 || y<1 || x>N || y> M) {
////				printf("x : %d y : %d out of range\n\n",x,y);
////				continue;
////			}
////
////			if (x >= 1 && y >= 1 && x <= N && y <= M && !visited[x][y]) {
////				visited[x][y] = true;
////				Node next;
////				next.x = x;
////				next.y = y;
////				next.cnt = c;
////				next.sum = sum;
////				printf("next x : %d y : %d cnt : %d sum : %d\n\n",next.x, next.y, next.cnt, next.sum);
////				DFS(next);
////
////			}
////		}
////
////	}
////	printf("DFS ans!! : %d\n\n", ans);
////	return ans;
////}
//
//int DFS(Node start) {
//	int res = 0;
//	Node current;
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//		if (current.cnt == 3) {
//			if (res < current.sum) {
//				res = current.sum;
//				return res;
//			}
//		}
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//			int c = current.cnt + 1;
//			int sum = current.sum + map[x][y];
//			if (x >= 1 && y >= 1 && x <= N && y <= M && !visited[x][y]) {
//				visited[x][y] = true;
//				Node next;
//				next.x = x;
//				next.y = y;
//				next.cnt = c;
//				next.sum = sum;
//				Q.push(next);
//			}
//
//		}
//	}
//
//	return res;
//
//}
//
//
//int dir(Node start) {
//	Node current;
//	current = start;
//
//	int total=0;
//	int sumcnt = 0;
//	total+= map[current.x][current.y];
//	for (int i = 0; i < 4; i++) {
//		int x = current.x + dx[i];
//		int y = current.y + dy[i];
//		
//		if (x >= 1 && y >= 1 && x <= N && y <= M) {
//			total += map[x][y];
//			sumcnt++;
//		}
//		
//		
//	}
//	
//
//	if (sumcnt == 3) {
//		return total;
//	}
//	else {
//		int ans = 0;
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//
//
//			if (x >= 1 && y >= 1 && x <= N && y <= M) {
//				int candi = total - map[x][y];
//				if (ans < candi) {
//					
//					ans = candi;
//				}
//			}
//
//
//
//		}
//		//printf("dir ans!! : %d\n\n", ans);
//		return ans;
//	}
//	
//}
//
//
//
//int main() {
//
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//
//			cin >> map[i][j];
//		}
//	}
//
//	for (int x = 1; x <= N; x++) {
//		for (int y = 1; y <= M; y++) {
//
//
//
//			//각꼭짓점인 경우임
//			if ((x == 1 && y == 1) || (x == 1 && y == M) || (x == N && y == 1) || (x == N && y == M)) {
//				//이 경우 dfs3회가능
//				
//				int ans = 0;
//				Node start;
//				start.x = x;
//				start.y = y;
//				start.cnt = 0;
//				start.sum += map[x][y];
//				Q.push(start);
//				//printf("<<<<<start x : %d y : %d sum : %d >>>>>\n\n", x, y,start.sum);
//				ret[x][y] = DFS(start);
//				//printf("ans : %d\n\n", ret[x][y]);
//			}
//			else {
//			
//				int ans1 = 0;
//				int ans2 = 0;
//				Node start;
//				start.x = x;
//				start.y = y;
//				start.cnt = 0;
//				start.sum += map[x][y];
//				ans1 = dir(start);
//				visited[start.x][start.y] = true;
//				Q.push(start);
//				ans2 = DFS(start);
//				/*printf("ans1 : %d\n\n", ans1);
//				printf("ans2 : %d\n\n", ans2);*/
//				ret[start.x][start.y] = max(ans1, ans2);
//			
//			}
//			//if ((y == 1) && (x > 1 && x < N)) {
//			//	//printf("<<<<<start x : %d y : %d >>>>>\n\n", x, y);
//			//	//ㅏ만 가능 + dfs2회,bfs1회
//			//	int ans1 = 0;
//			//	int ans2 = 0;
//			//	Node start;
//			//	start.x = x;
//			//	start.y = y;
//			//	start.cnt = 0;
//			//	start.sum += map[x][y];
//			//	ans1 = dir(start);
//			//	visited[start.x][start.y] = true;
//			//	Q.push(start);
//			//	ans2 = DFS(start);
//			//	/*printf("ans1 : %d\n\n", ans1);
//			//	printf("ans2 : %d\n\n", ans2);*/
//			//	ret[start.x][start.y] = max(ans1, ans2);
//			//}
//			//if ((y == M) && (x > 1 && x < N)) {
//			//	//printf("<<<<<start x : %d y : %d >>>>>\n\n", x, y);
//			//	//ㅓ만 가능 + dfs2회, bfs1회
//			//	int ans1 = 0;
//			//	int ans2 = 0;
//			//	Node start;
//			//	start.x = x;
//			//	start.y = y;
//			//	start.cnt = 0;
//			//	start.sum += map[x][y];
//			//	ans1 = dir(start);
//			//	visited[start.x][start.y] = true;
//			//	Q.push(start);
//			//	ans2 = DFS(start);
//			//	/*printf("ans1 : %d\n\n", ans1);
//			//	printf("ans2 : %d\n\n", ans2);*/
//			//	ret[start.x][start.y] = max(ans1, ans2);
//			//}
//			//if ((x == 1) && (y > 1 && y < M)) {
//			//	//printf("<<<<<start x : %d y : %d >>>>>\n\n", x, y);
//			//	//ㅏ만 가능 + dfs2회,bfs1회
//			//	int ans1 = 0;
//			//	int ans2 = 0;
//			//	Node start;
//			//	start.x = x;
//			//	start.y = y;
//			//	start.cnt = 0;
//			//	start.sum += map[x][y];
//			//	ans1 = dir(start);
//			//	visited[start.x][start.y] = true;
//			//	Q.push(start);
//			//	ans2 = DFS(start);
//			//	/*printf("ans1 : %d\n\n", ans1);
//			//	printf("ans2 : %d\n\n", ans2);*/
//			//	ret[start.x][start.y] = max(ans1, ans2);
//			//}
//			//if ((x == N) && (y > 1 && y < M)) {
//			//	//printf("<<<<<start x : %d y : %d >>>>>\n\n", x, y);
//			//	//ㅓ만 가능 + dfs2회, bfs1회
//			//	int ans1 = 0;
//			//	int ans2 = 0;
//			//	Node start;
//			//	start.x = x;
//			//	start.y = y;
//			//	start.cnt = 0;
//			//	start.sum += map[x][y];
//			//	ans1 = dir(start);
//			//	visited[start.x][start.y] = true;
//			//	Q.push(start);
//			//	ans2 = DFS(start);
//			//	/*printf("ans1 : %d\n\n", ans1);
//			//	printf("ans2 : %d\n\n", ans2);*/
//			//	ret[start.x][start.y] = max(ans1, ans2);
//
//			//}
//			//
//
//			////안쪽임
//			//if ((x >= 2 && x <= N - 1) && (y >= 2 && y <= M - 1)) {
//			//	//ㅗㅓㅜㅏ가능 + dfs2회, bfs1회
//			//	//printf("<<<<<start x : %d y : %d >>>>>\n\n", x, y);
//			//	int ans1 = 0;
//			//	int ans2 = 0;
//			//	Node start;
//			//	start.x = x;
//			//	start.y = y;
//			//	start.cnt = 0;
//			//	start.sum += map[x][y];
//			//	ans1 = dir(start);
//			//	
//			//	visited[start.x][start.y] = true;
//			//	Q.push(start);
//			//	ans2 = DFS(start);
//			//	/*printf("ans1 : %d\n\n", ans1);
//			//	printf("ans2 : %d\n\n", ans2);*/
//			//	ret[start.x][start.y] = max(ans1, ans2);
//			//}
//			for (int i = 1; i <= N; i++) {
//				for (int j = 1; j <= M; j++) {
//					visited[i][j] = false;
//				}
//			}
//
//
//
//		}
//
//	}
//
//
//
//	/*for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", ret[i][j]);
//		}
//		printf("\n");
//	}*/
//	int maxi = -1;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (maxi < ret[i][j]) {
//				maxi = ret[i][j];
//			}
//		}
//	}
//	printf("%d", maxi);
//
//
//}