//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<queue>
//#include<vector>
//#define MAX 1000001
//using namespace std;
//
//int Subin, herbrother;
//
//int place[MAX];
//bool visited[MAX];
//int shortcutcnt = 0;
//int shortesttime = 0;
//int minsecond = 0;
//int flag = 0;
//queue<pair<int, int>>Q;
//
//void BFS(pair<int, int> start) {
//	pair<int, int>current;
//
//	while (!Q.empty()) {
//		current.first = Q.front().first;
//		current.second = Q.front().second;
//		Q.pop();
//		//최초 발견 시점..
//		if (current.first == herbrother&&flag==0) {
//			shortcutcnt++;
//			shortesttime = current.second;
//			visited[current.first] = true;
//			/*printf("최초 도착했습니다!\n\n");
//			printf("목표지점 최초 도달 시간 : %d 입니다. \n\n", current.second);
//			printf("이제부터 최초 도달 시간은 %d 입니다. \n\n", shortesttime);
//			printf("현재까지 목적지에 도달하는 경로의 경우의 수 : %d \n\n", shortcutcnt);
//			printf("최초 도달시간이 %d로 정해졌으니 flag를 1로 바꿔줍니다. \n\n", shortesttime);*/
//			flag = 1;
//		}
//		if (current.first == herbrother && current.second == shortesttime&&flag==1) {
//			printf("두 번째로 도착했습니다!\n\n");
//			shortcutcnt++;
//			printf("현재까지 목적지에 도달하는 경로의 경우의 수 : %d \n\n", shortcutcnt);
//			//이게 최초로 최소 도달 시간이 정해지면 두번 세지니까 맨 마지막에 하나 빼줍니다.
//			
//		}
//		if (current.second > shortesttime && flag == 1) {
//			break;
//		}
//
//
//
//		if (!visited[current.first + 1] && current.first+1<MAX) {
//			place[current.first + 1] = 1;
//			
//			pair<int, int>next;
//			next.first = current.first + 1;
//			next.second = current.second;
//			next.second++;
//			printf("좌표 : %d,탐색 시간 : %d 에서 탐색을 시작합니다. \n\n", next.first, next.second);
//			
//			Q.push(next);
//		}
//		if (!visited[current.first -1] && current.first-1>=0) {
//			place[current.first - 1] = 1;
//			//visited[current.first - 1] = true;
//			pair<int, int>next;
//			next.first = current.first - 1;
//			next.second = current.second;
//			next.second++;
//			printf("좌표 : %d,탐색 시간 : %d 에서 탐색을 시작합니다. \n\n", next.first, next.second);
//			
//			Q.push(next);
//		}
//		if (!visited[current.first*2] && current.first*2<MAX) {
//			place[current.first*2] = 1;
//			//visited[current.first*2] = true;
//			pair<int, int>next;
//			next.first = current.first*2;
//			next.second = current.second;
//			next.second++;
//			//printf("좌표 : %d,탐색 시간 : %d 에서 탐색을 시작합니다. \n\n", next.first, next.second);
//			
//			Q.push(next);
//		}
//
//
//	}
//}
//
//
//int main() {
//
//	cin >> Subin >> herbrother;
//
//	pair<int, int>start;
//	start.first = Subin;
//	start.second = 0;
//
//	Q.push(start);
//	BFS(start);
//	shortcutcnt--;
//	printf("%d\n%d", shortesttime, shortcutcnt);
//}