//#include<iostream>
//#include<vector>
//#include<algorithm>
//#define MAX 10000
//using namespace std;
//
//
//string res[MAX];
//int rescnt = 0;
//
//int T;
//char stack[MAX];
//int top = 0;
//
//int main() {
//
//	cin >> T;
//
//	for (int i = 0; i < T; i++) {
//
//		string a;
//		cin >> a;
//		printf("3\n");
//		cout << "current string : " << a << endl;
//		for (int j = 0; j < a.size(); j++) {
//			if (top < -1) {
//				break;
//			}
//			if (a[j] == '(') {
//				printf("%d번째 원소 : %c, top : %d\n\n", j, a[j], top);
//				stack[++top] = '(';
//
//				printf("current top : %d\n", top);
//			}
//
//			else if (a[j] == ')')
//			{
//				printf("%d번째 원소 : %c, top : %d\n\n", j, a[j], top);
//  				if (a[top] == '(' && top > -1) {
//					top--;
//					printf("current top : %d\n", top);
//				}
//				else {
//					break;
//				}
//			}
//			else {
//				printf("!!!");
//			}
//			
//		}
//		printf("2\n");
//
//		if (top == 0) {
//			printf("YES");
//			res[++rescnt] = "YES";
//		}
//		else {
//			printf("NO");
//			res[++rescnt] = "NO";
//		}
//		printf("1\n");
//		top = -1;
//	}
//
//	for (int i = 0; i < rescnt; i++) {
//		cout << res[i] << endl;
//	}
//
//
//}