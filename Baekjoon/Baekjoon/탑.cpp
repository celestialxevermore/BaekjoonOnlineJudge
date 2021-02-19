//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#define MAX 1001
//
//using namespace std;
//
//int N;
//int stack[MAX];
//int top = 0;
//int receiving[MAX];
//
//int main() {
//
//	cin >> N;
//
//	receiving[0] = 0;
//	receiving[1] = 0;
//	int flag = 0;
//
//	for (int i = 0; i < N; i++) {
//		int input;
//		cin >> input;
//		for (int i = top; i >= 0; i--) {
//			printf("<<현재 %d 와 %d를 비교합니다!!>>\n\n", input, stack[i]);
//			if (stack[i] > input) {
//				printf("%d > %d 이므로 해당 범위에서 신호를 보낼 수 있습니다.\n\n", stack[i], input);
//				printf("따라서 %d를 스택에 넣어주고, 가장 맨 처음 만나는 송전탑의 인덱스를 적습니다. \n\n", input);
//				printf("현재 top : %d \n\n", top);
//				printf("현재 top에 해당하는 원소 : %d \n\n", stack[top]);
//				stack[++top] = input;
//				
//
//				printf("이제 들어가야 할 원소 : %d\n\n", i);
//				receiving[top] = i;
//				flag = 1;
//				break;
//			}
//			else {
//
//			}
//
//
//		}
//		if (flag == 0) {
//
//			printf("%d > %d 이므로 해당 범위에서 신호를 보낼 수 없습니다.\n\n", stack[i], input);
//			printf("따라서 %d를 스택에 넣어주고 현재 %d보다 높은 탑이 존재하지 않으므로 해당 인덱스에는 0을 넣습니다. \n\n", input, input);
//			stack[++top] = input;
//			receiving[top] = 0;
//
//		}
//	}
//
//
//	for (int i = 1; i <= top; i++) {
//		printf("%d ", receiving[i]);
//	}
//
//}