//#include<iostream>
//#include<stdio.h>
//#include<queue>
//#include<string>
//using namespace std;
//
//char map[13][7];
//bool visited[13][7];
//bool visited_[13][7];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//int cnt = 0;
//int flag = 0;
//
//
//void swap(char* a, char* b) {
//	char tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//
//typedef struct node {
//	char ch;
//	int x;
//	int y;
//	int cnt = 0;
//}Node;
//
//queue<Node>Q;
//
//
//void func() {
//	Node current;
//	while (!Q.empty()) {
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		map[current.x][current.y] = '.';
//	
//		Q.pop();
//	}
//	for (int i = 12; i >= 1; i++) {
//		for (int j = 1; j <= 6; j++) {
//			if (map[i][j] == '.') { continue; }
//			else {
//
//				for (int k = i; k >= 0; k--) {
//					if (map[k - 1][j] != '.') {
//						break;
//					}
//					else {
//						map[k - 1][j] = map[k][j];
//						map[k][j] = '.';
//					}
//				}
//			}
//		}
//	}
//
//}
//
//
//
//void DFS(Node current) {
//
//	
//	printf("current x : %d y : %d ch : %c cnt : %d\n\n", current.x, current.y, current.ch, current.cnt);
//
//	if (current.cnt >= 4) {
//		flag = 1;
//		printf("ready to kill\n\n");
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//			int c = current.cnt + 1;
//			if (x >= 1 && y >= 1 && x <= 12 && y <= 6 && !visited[x][y] && map[x][y] == current.ch) {
//				visited[x][y] = true;
//				Node next;
//				next.x = x;
//				next.y = y;
//				next.ch = current.ch;
//				next.cnt = c;
//				printf("spare next x : %d y : %d ch : %c cnt : %d\n\n", next.x, next.y, next.ch, next.cnt);
//				Q.push(next);
//			}
//			
//		}
//		//func();
//		while (!Q.empty()) {
//			Node current;
//			current.x = Q.front().x;
//			current.y = Q.front().y;
//			map[current.x][current.y] = '.';
//			printf("x : %d y : %d의 알파벳 %c를 .으로 바꿉니다.\n\n", current.x, current.y, Q.front().ch);
//			Q.pop();
//		}
//		for (int i = 1; i <= 12; i++) {
//			for (int j = 1; j <= 6; j++) {
//				printf("%c ", map[i][j]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//		
//
//		for (int i = 1; i <= 6; i++) { 
//			for (int j = 11; j >= 0; j--) { 
//				for (int k = 11; k > j; k--) { 
//					if (map[j][i] != '.' && map[k][i] == '.') { 
//						map[k][i] = map[j][i]; map[j][i] = '.'; break; 
//					} 
//				} 
//			} 
//		}
//
//	
//
//
//		for (int i = 1; i <= 12; i++) {
//			for (int j = 1; j <= 6; j++) {
//				printf("%c ", map[i][j]);
//			}
//			printf("\n");
//		}
//		cnt++;
//		
//
//
//	}
//	else {
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//			int c = current.cnt + 1;
//			if (x >= 1 && y >= 1 && x <= 12 && y <= 6 && !visited[x][y] && map[x][y] == current.ch) {
//				visited[x][y] = true;
//				Node next;
//				next.x = x;
//				next.y = y;
//				next.ch = current.ch;
//				next.cnt = c;
//				Q.push(next);
//				printf("next x : %d y : %d ch : %c cnt : %d\n\n", next.x, next.y, next.ch, next.cnt);
//				DFS(next);
//			}
//		}
//
//	}
//	
//
//	
//	for (int i = 1; i >= 12; i++) {
//		for (int j = 1; j <= 6; j++) {
//			printf("%c ", map[i][j]);
//		}
//		printf("\n");
//	}
//	
//	printf("Done!\n\n");
//	return;
//}
//
//
//int main() {
//
//
//	for (int i = 1; i <= 12; i++) {
//		string input;
//		cin >> input;
//		for (int j = 0; j < input.size(); j++) {
//
//			map[i][j + 1] = input[j];
//		}
//	}
//
//
//
//
//
//	while (1) {
//
//		for (int i = 1; i <= 12; i++) {
//			for (int j = 1; j <= 6; j++) {
//				char input = map[i][j];
//				if (input != '.') {
//
//					Node start;
//					start.ch = input;
//					start.x = i;
//					start.y = j;
//					start.cnt = 1;
//					visited[start.x][start.y] = true;
//					Q.push(start);
//					printf("start x : %d y : %d ch : %c cnt : %d \n\n", start.x, start.y, start.ch, start.cnt);
//					DFS(start);
//					while (!Q.empty()) {
//						Q.pop();
//					}
//						
//					
//					printf("Done!\n\n");
//					
//				}
//			}
//		}
//		int flag = 0;
//		for (int i = 1; i <= 12; i++) {
//			for (int j = 1; j <= 6; j++) {
//				if (map[i][j] != '.') {
//					flag = 1;
//				}
//			}
//		}
//
//		if (flag == 0) {
//			break;
//		}
//
//
//	}
//
//	printf("%d", cnt);
//
//}
