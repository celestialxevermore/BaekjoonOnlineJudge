//#include<iostream>
//#include<queue>
//#include<vector>
//#include<string>
//using namespace std;
//
//int R, C, N;
//int cnt = 0;
//
//typedef struct Bomb {
//	int x;
//	int y;
//	int cnt = 0;
//	int second = 0;
//}bomb;
//queue<bomb>Q;
//
//char map[201][201];
//
//
//int main() {
//
//	cin >> R >> C >> N;
//
//	
//	for (int i = 1; i <= R; i++) {
//		string inputs = "";
//		cin >> inputs;
//		for (int j = 0; j < inputs.size(); j++) {
//			map[i][j + 1] = inputs[j];
//		}
//	}
//	for (int i = 1; i <= R; i++) {
//		for (int j = 1; j <= C; j++) {
//			if (map[i][j] == 'O') {
//				bomb b;
//				b.x = i;
//				b.y = j;
//				b.cnt = cnt;
//				b.second = b.cnt%3; //초기 세팅 0
//				Q.push(b);
//			}
//		}
//	}
//	
//	while (1) {
//		//모듈러 연산으로 해야겠다.
//		//시간이 다 되었을 때
//		if (N == 0) {
//			string res[201];
//			int rescnt = 0;
//			for (int i = 1; i <= R; i++) {
//				string output = "";
//				for (int j = 1; j <= C; j++) {
//					output.push_back(map[i][j]);
//				}
//				res[rescnt++] = output;
//			}
//		}
//		else {
//			
//			for (int i = 1; i <= C; i++) {
//				for (int j = 1; j <= R; j++) {
//					if (map[i][j] == '.') {
//						Bomb B;
//						B.x = i;
//						B.y = j;
//						B.second = cnt % 3; //얘네들은 2임 
//					}
//				}
//			}
//
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