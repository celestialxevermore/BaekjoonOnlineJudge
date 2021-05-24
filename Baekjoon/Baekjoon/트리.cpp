//#include<iostream>
//#include<vector>
//#include<queue>
//
//
//using namespace std;
//
//
//int N;
//int input;
//
//
//int tree[100];
//bool visited[100];
//int total = 0;
//int subt = 0;
//void DFS1(int cur) {
//	int flag = 0;
//	for (int i = 0; i < N; i++) {
//		if (tree[i] == cur) {
//			flag = 1;
//			DFS1(i);
//			
//		}
//	}
//	if (flag == 0) {
//		total++;
//	}
//	
//
//
//}
//
//void DFS2(int start) {
//	int flag = 0;
//	for (int i = 0; i < N; i++) {
//		if (tree[i] == start) {
//			flag = 1;
//			DFS2(i);
//
//		}
//	}
//	if (flag == 0) {
//		subt++;
//	}
//
//
//
//}
//
//int main() {
//
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> tree[i];
//	}
//	
//	cin >> input;
//
//
//	if (input == 0) {
//		printf("0");
//	}
//	else {
//		DFS1(0);
//
//		DFS2(input);
//		if (total == subt) {
//			cout << total;
//		}
//		else if (total < subt) {
//			cout << 0;
//		}
//		else {
//			cout << total - subt;
//		}
//		
//	}
//	
//	
//}
