//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<stack>
//#include<string>
//#include<math.h>
//using namespace std;
//
//string test;
//stack<int>n;
//stack<string> s;
//
//
//int main() {
//	cin >> test;
//	int ans = 0;
//	
//	
//	for (int i = 0; i < test.size(); i++) {
//		int input=0;
//		
//		if (test[i] - '0' >= 0 && test[i] - '0' < 10) {
//			input = test[i]-'0';
//			printf("%d : %c\n\n",i, test[i]);
//			printf("%d : %d\n", i, input);
//			n.push(input);
//		}
//		else if(test[i]=='S'||test[i]=='D'||test[i]=='T'){
//			if (test[i] == 'S') {
//				input = pow(n.top(), 1);
//				n.pop();
//				n.push(input);
//				printf("%d : %c\n\n", i, test[i]);
//				printf("%d : %d\n", i, input);
//			}
//			if (test[i] == 'D') {
//				input = pow(n.top(), 2);
//				n.pop();
//				n.push(input);
//				printf("%d : %c\n\n", i, test[i]);
//				printf("%d : %d\n", i, input);
//			}
//			if (test[i] == 'T') {
//				input = pow(n.top(), 3);
//				n.pop();
//				n.push(input);
//				printf("%d : %c\n\n", i, test[i]);
//				printf("%d : %d\n", i, input);
//			}
//		}
//		else if (test[i] == '*') {
//			int tmp1 = n.top();
//			tmp1 = tmp1 * 2;
//			n.pop();
//			int tmp2 = n.top();
//			n.pop();
//			n.push(tmp1);
//			n.push(tmp2);
//			printf("i : %c\n\n", i, test[i]);
//			printf("%d : %d\n", i, input);
//		}
//		else if (test[i] == '#') {
//			int tmp1 = n.top();
//			tmp1 = tmp1 * (-1);
//			n.pop();
//			n.push(tmp1);
//		}
//
//
//
//	}
//	while (!n.empty()) {
//		ans += n.top();
//		n.pop();
//	}
//	printf("%d",ans);
//
//}