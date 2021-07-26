//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//bool visited[201][201][201];
//
//typedef struct info {
//	int A;
//	int B;
//	int C;
//
//	info(int a, int b, int c) {
//		A = a;
//		B = b;
//		C = c;
//	}
//
//}Info;
//
//
//int abc[3];
//queue<Info>Q;
//int check[2000];
//int chcnt = 0;
//
//
//void BFS() {
//
//	Info current(0, 0, 0);
//
//	while (!Q.empty()) {
//
//		current = Q.front();
//		Q.pop();
//		int flag = 0;
//		int cache[3];
//		cache[0] = current.A;
//		cache[1] = current.B;
//		cache[2] = current.C;
//		int notzero[3];
//		int notzerocnt = 0;
//
//		for (int i = 0; i < 3; i++) {
//			if (cache[i] == 0) {
//				continue;
//			}
//			else {
//				notzero[notzerocnt++] = cache[i];
//			}
//		}
//
//
//		for (int i = 0; i < 3; i++) {
//
//			if (cache[i] == 0) {
//				for (int j = 0; j < notzerocnt; j++) {
//
//				}
//			}
//
//		}
//
//
//	}
//
//
//}
//
//
//
//int main() {
//
//	for (int i = 0; i < 3; i++) {
//		cin >> abc[i];
//	}
//
//
//
//	check[abc[2]]++;
//	visited[0][0][abc[2]] = true;
//	Q.push(Info(0, 0, abc[2]));
//
//	BFS();
//
//	
//
//
//}