//#include<iostream>
//#include<stdio.h>
//#include<queue>
//
//using namespace std;
//
//queue<int> location[10001];
//int Queue[10001];
//int front = 0, back = 0;
//int jump[3] = { 1,-1,5 };
//int S, E;
//int cnt = 0; 
//
//int main() {
//	//큐에 있는지 없는지만 보면됩니다. 
//
//
//
//	scanf("%d %d", &S, &E);
//
//	int level = 0;
//	Queue[++back] = S;
//	
//	while (front < back) {
//		
//		int current = Queue[++front];
//		
//		for (int i = 0; i < 3; i++) {
//			Queue[++back] = current + jump[i]; 
//		}
//		for (int i = 0; i < sizeof(Queue)/sizeof(int); i++) {
//			int check = Queue[i]+S;
//			if (check!= E) { continue; }
//			else { front = back; break;  }
//		}
//		cnt++;
//	}
//	printf("%d", cnt);
//
//
//
//
//}