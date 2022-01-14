//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//
//string res = "";
//char input[101];
//
//int N, R;
//
//void DFS(int start, int cnt) {
//	//만일 R개를 전부 골랐을 경우
//	if (cnt == R) {
//		cout << res;
//		printf("\n");
//		return;
//	}
//
//	//아직 R개를 모두 고르지 않은 경우
//	else {
//		for (int i = start; i < N; i++) {
//			res += input[i];
//			DFS(i+1, cnt + 1);
//			res.pop_back();
//		}
//	}
//}
//
//
//int main() {
//
//	cin >> N >> R;
//
//	for (int i = 0; i < N; i++) {
//		cin >> input[i];
//	}
//	
//	DFS(0, 0);
//
//
//
//}