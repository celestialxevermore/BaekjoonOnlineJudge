//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//#define MAX 100000+1
//using namespace std;
//
//int Subin, herbrother;
//bool visited[MAX];
//
//queue< pair<int, int> > q;
//
//void BFS(pair<int, int> start) {
//	while (!q.empty()) {
//	pair<int, int>current;
//	current.first = q.front().first;
//	current.second = q.front().second;
//	q.pop();
//	if (current.first == herbrother) {
//		printf("%d ", current.second);
//	}
//	
//	
//	if (current.first + 1 < MAX && !visited[current.first+1]) {
//		visited[current.first+1] = true;
//		
//		pair<int, int>next;
//		next.first = current.first + 1;
//		next.second = current.second;
//		next.second++;
//		q.push(next);
//	}
//	if (current.first - 1 >= 0 && !visited[current.first-1]) {
//		visited[current.first-1] = true;
//		pair<int, int>next;
//		next.first = current.first - 1;
//		next.second = current.second;
//		next.second++;
//		q.push(next);
//	}
//	if (current.first * 2 < MAX && !visited[current.first*2]) {
//		visited[current.first*2] = true;
//		pair<int, int>next;
//		next.first = current.first * 2;
//		next.second = current.second;
//		next.second++;
//		q.push(next);
//	}
//	}
//
//}
//
//int main() {
//
//	cin >> Subin >> herbrother;
//
//	pair<int, int>start;
//	start.first = Subin;
//	start.second = 0;
//	q.push(start);
//	visited[start.first]=true;
//	BFS(start);
//
//}
