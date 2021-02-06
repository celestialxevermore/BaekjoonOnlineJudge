//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<string>
//#define MAX 1001
//using namespace std;
//
//
//string map[6][6];
//bool visited[6][6];
//int digit[10];
//
//string input;
//int stringcnt = 0;
//string check[MAX];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//bool checking(string input) {
//	for (int i = 0; i < MAX; i++) {
//		if (input == check[i]) {
//			printf("이미 해당 문자열은 존재합니다.\n\n");
//			return true; break;
//		}
//	}
//	return false;
//}
//
//
//
//void DFS(pair<int, int>start, int Level) {
//	
//	
//
//	if (Level == 6&&!checking(input)) {
//		printf("탐색 결과 해당문자열은 존재하지 않습니다. 문자열목록에 신규 생성합니다. \n\n");
//		cout << input << endl;
//		check[stringcnt] = input;
//		stringcnt++;
//		printf("현재까지의 새로 탐색된 문자열의 개수 : %d \n\n", stringcnt);
//		return;
//	}
//	if (Level == 6 && checking(input)) {
//		return;
//	}
//	if (Level > 6) {
//		return;
//	}
//	else {
//		int x = start.first;
//		int y = start.second;
//
//
//		if (!visited[x + 1][y] && x < 5) {
//			input.append(map[x + 1][y]);
//			cout << input << ": 현재까지 완성된 문자열입니다.\n\n";
//			pair<int, int>next;
//			next.first = x + 1;
//			next.second = y;
//			Level++;
//			printf("DFS(%d,%d,%d)에서 탐색을 시작합니다. \n\n", next.first, next.second, Level);
//			DFS(next, Level);
//		}
//		if (!visited[x - 1][y] && x > -1) {
//			input.append(map[x - 1][y]);
//			cout << input << ": 현재까지 완성된 문자열입니다.\n\n";
//			pair<int, int>next;
//			next.first = x - 1;
//			next.second = y;
//			Level++;
//			printf("DFS(%d,%d,%d)에서 탐색을 시작합니다. \n\n", next.first, next.second, Level);
//			DFS(next, Level);
//		}
//		if (!visited[x][y+1] && y<5) {
//			input.append(map[x][y+1]);
//			cout << input << ": 현재까지 완성된 문자열입니다.\n\n";
//			pair<int, int>next;
//			next.first = x;
//			next.second = y+1;
//			Level++;
//			printf("DFS(%d,%d,%d)에서 탐색을 시작합니다. \n\n", next.first, next.second, Level);
//			DFS(next, Level);
//		}
//		if (!visited[x][y - 1] && y > -1) {
//			input.append(map[x][y - 1]);
//			cout << input << ": 현재까지 완성된 문자열입니다.\n\n";
//			pair<int, int>next;
//			next.first = x;
//			next.second = y - 1;
//			Level++;
//			printf("DFS(%d,%d,%d)에서 탐색을 시작합니다. \n\n", next.first, next.second, Level);
//			DFS(next, Level);
//		}
//		
//	}
//}
//
//
//int main() {
//	/*string test1;
//	cin >> test1;
//	string test2;
//	cin >> test2;
//	test1.append(test2);
//	cout << test1;*/
//
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		cout << map[i][j] ;
//	//	}
//	//	printf("\n");
//	//}
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			pair<int, int>start;
//			start.first = i;
//			start.second = j;
//			int Level = 0;
//			input.append(map[i][j]);
//			cout << input << endl;
//			printf("시작하는 문자열\n\n");
//			
//			printf("최초시작 // DFS(%d,%d,%d)에서 탐색을 시작합니다. \n\n", start.first, start.second, Level);
//			DFS(start, Level);
//			input = "";
//		}
//	}
//
//	printf("%d", stringcnt);
//
//}