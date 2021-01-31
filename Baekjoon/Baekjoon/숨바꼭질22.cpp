//#include<stdio.h>
//
//#include<iostream>
//#include<stdlib.h>
//#include<vector>
//#include<queue>
//#define MAX 100001
//using namespace std;
//
//int Subin, herbrother;
//
//
//int locations[MAX];
//bool visited[MAX];
//int cnt = 0;
//pair<int, int> subinlocation;
//queue< pair<int, int>> Q;
//
//
//void BFS(pair<int, int> start) {
//
//	while (!Q.empty()) {
//		pair<int, int>current;
//		current.first = Q.front().first;
//		current.second = Q.front().second;
//		Q.pop(); //맨 앞에 있는 놈을 떼어내고
//		printf("(%d,%d) : 현재에서 탐색을 시작합니다. \n\n", current.first, current.second);
//		if (current.first == herbrother) { printf("<<<<<<<<<<<<도착>>>>>>>>>>>\n\n"); cnt++; }
//		if (current.first > MAX || current.first < 0) { continue; }
//		if (current.first == 0) {
//			int x = current.first + 1;
//			if (visited[x]) { continue; }
//			if (!visited[x]) {
//				visited[x] = true;
//				int y = current.second;
//				y++;
//				pair<int, int>next;
//				next.first = x; next.second = y;
//				visited[x] = true;
//				Q.push(next);
//				printf("(%d,%d) : 현재에서 다음 탐색을 진행합니다. \n\n", next.first, next.second);
//			}
//		}
//		if (current.first == MAX - 1) {
//
//			int x = current.first - 1;
//			if (visited[x]) { continue; }
//			if (!visited[x]) {
//				int y = current.second;
//				y++;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				visited[x] = true;
//				Q.push(next);
//				printf("(%d,%d) : 현재에서 다음 탐색을 진행합니다. \n\n", next.first, next.second);
//			}
//			
//		}
//		if (current.first >= MAX / 2 + 1 && current.first < MAX) {
//			int move[2] = { -1,1 };
//			for (int i = 0; i < 2; i++) {
//
//				int x = current.first + move[i];
//				if (x> MAX || x < 0) { continue; }
//				if (visited[x]) { continue; }
//				if (!visited[x]) {
//					visited[x] = true;
//					pair<int, int>next;
//					next.first = x;
//					next.second = current.second;
//					next.second++;
//					Q.push(next);
//					printf("(%d,%d) : 현재에서 다음 탐색을 진행합니다. \n\n", next.first, next.second);
//				}
//			}
//		}
//		if (current.first > 0 && current.first < MAX / 2 + 1) {
//			int move[3] = { current.first+1,current.first-1,current.first*2 };
//
//			for (int i = 0; i < 3; i++) {
//				if (move[i] > MAX || move[i] < 0) { continue; }
//				if (visited[move[i]]) { continue; }
//				if (!visited[move[i]]) {
//					visited[move[i]] = true;
//					pair<int, int>next;
//					next.first = move[i];
//					next.second = current.second;
//					next.second++;
//					Q.push(next);
//					printf("(%d,%d) : 현재에서 다음 탐색을 진행합니다. \n\n", next.first, next.second);
//				}
//			}
//
//		}
//		
//
//
//
//	}
//
//
//
//}
//
//
//int main() {
//
//	cin >> Subin >> herbrother;
//
//	
//	pair<int, int>start;
//	//입력받은 수빈이의 위치
//	start.first = Subin;
//	//이동 횟수
//	start.second = 0;
//
//	visited[Subin] = true;
//	Q.push(start);
//	BFS(start);
//
//
//	printf("%d\n", cnt);
//
//
//
//
//}