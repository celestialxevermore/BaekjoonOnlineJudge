//#include<stdio.h>
//#include<stdlib.h>
//#include<vector>
//#include<queue>
//#include<iostream>
//#define MAX 1000001
//using namespace std;
//
//
//queue< pair<int, int> > Q;
//int location[MAX];
//bool visited[MAX];
//int subinloc;
//int herbrotherloc;
//vector<pair<int, int> > loc;
//pair<int, int> subin;
//int minimum = 100000;
//int index = 0;
//int ds[100001];
//
//
//
//void BFS(pair<int, int> subin) {
//
//	while (!Q.empty()) {
//		pair<int, int> current;
//		current.first = Q.front().first;
//		current.second = Q.front().second;
//
//		Q.pop();
//
//		if (current.first == herbrotherloc) {
//			ds[index++] = current.second;
//		}
//
//		//만일 현재 위치가 0인 경우
//		if (current.first == 0) {
//			visited[current.first] = true;
//			pair<int, int>next;
//			int x = current.first;
//			int y = current.second;
//			
//			next.first = x + 1;
//			next.second = y+1;
//			if (visited[next.first]) { continue; }
//			else { Q.push(next); }
//		}
//		//만일 현재 수빈이의 위치가 최대인 경우
//		if (current.first == MAX - 1) {
//			visited[current.first] = true;
//			pair<int, int>next;
//			int x = current.first;
//			int y = current.second;
//			next.first = x - 1;
//			next.second = y + 1;
//			if (visited[next.first]) { continue; }
//			else { Q.push(next); }
//		}
//
//		//만일 현재 수빈이의 위치가 최대와 최대의 절반값 사이일 경우
//		//이때에는 2배 연산은 안된다.
//		if (current.first >= MAX / 2 + 1&&current.first<MAX-1) {
//			int move[2] = { current.first + 1,current.first - 1 };
//			for (int i = 0; i < 2; i++) {
//				int x = move[i];
//				int y = current.second;
//				if (visited[move[i]]) { continue; }
//				if (!visited[move[i]]) {
//					visited[move[i]] = true;
//					pair<int, int> next;
//					next.first = x;
//					next.second = y + 1;
//					Q.push(next);
//				}
//			}
//		}
//		if (current.first > 0 && current.first <= MAX / 2) {
//			int move[3] = { current.first + 1,current.first - 1,current.first * 2 };
//			for (int i = 0; i < 3; i++) {
//				int x = move[i];
//				int y = current.second;
//				if (visited[x]) { continue; }
//				if (!visited[x]) {
//					visited[x] = true;
//					pair<int, int> next;
//					next.first = x;
//					next.second = y + 1;
//					Q.push(next);
//				}
//			}
//		}
//
//
//
//	}
//
//
//}
//
//int main() {
//	cin >> subinloc >> herbrotherloc;
//
//	subin.first = subinloc;
//	subin.second = 0;
//
//	Q.push(subin);
//	BFS(subin);
//
//	int minimum = 100001;
//	for (int i = 0; i < index; i++) {
//		if (minimum > ds[i]) {
//			minimum = ds[i];
//		}
//	}
//	printf("%d ", minimum);
//}