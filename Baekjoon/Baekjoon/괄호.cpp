//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<string>
//#include<stack>
//using namespace std;
//
//
//int T;
//int recnt = 0;
//string s[1001];
//string re[1001];
//int main() {
//
//	
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		cin >> s[i];
//	}
//	/*for (int i = 0; i < T; i++) {
//		int top = s[i].size() - 1;
//		for (int j = top; j >= 0; j--) {
//			printf("%c \n", s[i][j]);
//		}
//		printf("\n");
//	}*/
//
//
//
//
//
//
//
//
//
//	for (int i = 0; i < T; i++) {
//		
//		int top = s[i].size();
//		//printf("해당 문자열의 맨 마지막 위치는 %d 입니다. \n\n",top);
//		stack<char> test;
//		for (int j = 0; j < top; j++) {
//			if (test.empty()) {
//				//printf("현재 stack이 비었습니다. \n\n");
//				test.push(s[i][j]);
//				//printf("현재 stack의 최상단 : %c\n\n", test.top());
//			}
//			else {
//				if (test.top() == ')' && s[i][j] == '(') {
//					/*printf("현재 stack의 최상단 : %c 현재 새로 들어온 기호 : %c\n\n", test.top(), s[i][j]);
//					printf("기호가 짝에 맞지 않기 때문에 새로 들어온 기호를 stack에 넣습니다. \n\n");*/
//
//					test.push(s[i][j]);
//					//printf("현재 stack의 최상단 : %c\n\n", test.top());
//				}
//				if (test.top() == s[i][j]) {
//					/*printf("현재 stack의 최상단 : %c 현재 새로 들어온 기호 : %c\n\n", test.top(), s[i][j]);
//					printf("기호가 짝에 맞지 않기 때문에 새로 들어온 기호를 stack에 넣습니다. \n\n");*/
//
//					test.push(s[i][j]);
//					//printf("현재 stack의 최상단 : %c\n\n", test.top());
//				}
//
//
//
//				if (test.top() == '(' && s[i][j] == ')') {
//					/*printf("현재 stack의 최상단 : %c 현재 새로 들어온 기호 : %c\n\n", test.top(), s[i][j]);
//					printf("기호가 짝에 맞기때문에 현재 stack의 최상단을 제거합니다. \n\n");*/
//					test.pop();
//					//printf("현재 stack의 최상단 : %c\n\n", test.top());
//				}
//			}
//
//
//		}
//		if (test.empty()) {
//			re[recnt] = "YES";
//			recnt++;
//		}
//		else {
//			re[recnt] = "NO";
//			recnt++;
//		}
//
//
//	}
//
//	for (int i = 0; i < T; i++) {
//		cout << re[i];
//		printf("\n");
//	}
//}