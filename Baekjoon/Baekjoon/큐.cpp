//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int queue[10001];
//int front = 1, back = 1;
//int order = 0;
//int res[100001];
//int top = 0;
//int main() {
//
//	cin >> order;
//
//	int start = 0;
//	while (start < order) {
//
//		string a;
//		int input;
//
//		cin >> a;
//		if (a[0] == 'p') {
//			if (a[1] == 'u') {
//				cin >> input;
//				//printf("input : %d\n", input);
//				queue[back] = input; back = back + 1;
//				//printf("front : %d back : %d\n\n", front, back);
//			}
//			if (a[1] == 'o') {
//				if (queue[front] == 0) {
//					//printf("-1\n");
//					res[top++] = -1;
//					//printf("front : %d back : %d\n\n", front, back);
//				}
//				else {
//					//printf("%d\n", queue[front]);
//					res[top++] = queue[front];
//					queue[front] = 0;
//					front++;
//					//printf("front : %d back : %d\n\n", front, back);
//				}
//				
//			}
//		}
//		if (a == "front") {
//			if (queue[front] == 0) {
//				//printf("-1\n");
//				res[top++] = -1;
//			}
//			else {
//				//printf("%d\n", queue[front]);
//				res[top++] = queue[front];
//			}
//		}
//		if (a == "back") {
//			if (queue[back-1] == 0) {
//				//printf("-1\n");
//				res[top++] = -1;
//				//printf("front : %d back : %d\n\n", front, back);
//			}
//			else {
//				//printf("%d\n", queue[back-1]);
//				res[top++] = queue[back - 1];
//			}
//			
//		}
//		if (a == "size") {
//			int cnt = 0;
//			for (int i = front; i <= back; i++) {
//				if (queue[i] != 0) { cnt++; }
//			}
//			//printf("%d\n", cnt);
//			res[top++] = cnt;
//		}
//		if (a == "empty") {
//			int flag = 1;
//			for (int i = front; i <= back; i++) {
//				if (queue[i] != 0) {
//					flag = 0;
//					//printf("%d\n", flag);
//					res[top++] = flag;
//					break;
//				}
//			}
//			if (flag == 1) {
//				//printf("%d\n", flag);
//				res[top++] = flag;
//			}
//		}
//
//		start++;
//
//
//	}
//	for (int i = 0; i < top; i++) {
//		printf("%d\n", res[i]);
//	}
//
//}