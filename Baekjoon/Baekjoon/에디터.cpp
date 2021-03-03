//#include<stdio.h>
//#include<iostream>
//#include<string>
//#include<stack>
//#define MAX 500000
//using namespace std;
//
//char input[100001];
//string order[MAX];
//int ordercnt = 0;
//int cursor = 0;
//int main() {
//
//
//	cin >> input;
//	int i = 0;
//	while (input[i] != '\0') { cursor++; i++; };
//	cursor--;
//	//printf("%c %d\n",input[cursor], cursor);
//
//
//	cin >> ordercnt;
//
//	for (int i = 0; i < ordercnt; i++) {
//		char order;
//		cin >> order;
//		if (order == 'P') {
//			char newch;
//			cin >> newch;
//			printf("새로 들어온 문자 : %c\n\n", newch);
//			stack<char>test;
//
//			
//				for (int i = cursor + 1; input[i] != '\0'; i++) {
//					test.push(input[i]);
//				}
//				input[++cursor] = newch;
//
//				while (!test.empty()) {
//					input[++cursor] = test.top();
//					printf("현재 cursor의 위치 : %d, 기존 문자 : %c", cursor, test.top());
//					test.pop();
//				}
//		
//			
//			printf("P 연산 결과 :");
//			for (int i = 0; i < sizeof(input); i++) {
//				printf("%c", input[i]);
//			}
//			printf("\n");
//
//		}
//		if (order == 'L') {
//			if (cursor == -1) {
//				printf("현재 cursor가 문자열의 맨 앞이므로 건너 뜁니다. \n\n");
//				continue;
//			}
//			else {
//				cursor--;
//			}
//		}
//		if (order == 'R') {
//			if (cursor == sizeof(input)) {
//				printf("현재 cursor가 문자열의 맨 뒤이므로 건너 뜁니다. \n\n");
//				continue;
//			}
//			else {
//				printf("현재 cursor의 위치를 뒤로 밉니다. \n\n");
//				cursor++;
//				printf("옮긴 cursor의 위치 : %d\n\n", cursor);
//			}
//		}
//		if (order == 'B') {
//			if (cursor == -1) {
//				printf("현재 cursor의 위치가 맨 앞이므로 지울 수 없습니다. \n\n");
//				continue; }
//			else {
//				stack<char>test;
//
//				for (int i = cursor + 1; input[i] != '\0'; i++) {
//					test.push(input[i]);
//				}
//				input[cursor] = '_';
//				cursor--;
//				printf("현재 cursor의 위치 : %d\n\n", cursor);
//				while (!test.empty()) {
//					input[++cursor] = test.top();
//					test.pop();
//				}
//				for (int i = 0; i < sizeof(input); i++) {
//					printf("%c", input[i]);
//				}
//			}
//		}
//
//
//	}
//
//	printf("%s", input);
//
//
//
//}