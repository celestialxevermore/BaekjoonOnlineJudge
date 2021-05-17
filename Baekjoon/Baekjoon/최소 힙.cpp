//#include<iostream>
//#include<queue>
//#include<algorithm>
//
//using namespace std;
//
//
//int main() {
//
//	priority_queue<int>pQ;
//
//	int start = 0;
//	int N;
//	int input;
//	int arr[100000];
//	int top = 0;
//	cin >> N;
//	while (start < N) {
//		cin >> input;
//		if (pQ.empty()) {
//			
//			if (input == 0) { printf("0 \n"); arr[top++] = 0; }
//			else {
//				pQ.push(input);
//				arr[top++] = input;
//			}
//
//		}
//		else {
//			if (input == 0) { printf("%d\n", -pQ.top());  arr[top++] = -pQ.top(); pQ.pop(); }
//			else {
//				pQ.push(-input);
//				arr[top++] = -input;
//			}
//		}
//		start++;
//
//
//	}
//	for (int i = 0; i < top; i++) {
//		printf("%d\n",arr[i]);
//	}
//
//}