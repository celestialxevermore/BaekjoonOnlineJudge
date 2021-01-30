//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//int main() {
//
//	int N=3;
//	/*scanf("%d", &N);
//
//
//	int* train = (int*)malloc(sizeof(int) * N);
//
//	for (int i = 1; i < N; i++) {
//		scanf("%d", &train);
//	}*/
//
//	int train[3] = { 3,1,2 };
//
//
//	int top = -1;
//	int current = 0;
//	int pre = 0;
//
//
//	stack<int> theThirdcity;
//	stack<int> destination;
//	
//
//	
//	for (current; current < N; current++) {
//		if (theThirdcity.empty()) {
//			theThirdcity.push(train[current]);  printf("P "); continue;
//		}
//		else {
//			if (train[current] <= theThirdcity.top()) {
//				theThirdcity.push(train[current]); printf("P ");
//			}
//			else if (train[current] > theThirdcity.top()) {
//				while (train[current] > theThirdcity.top()) {
//					int parcer = theThirdcity.top(); printf("O ");
//					destination.push(parcer); 
//					theThirdcity.pop();
//					if (theThirdcity.empty()) {
//						theThirdcity.push(train[current]); printf("P ");
//						if (current == N - 1) {
//							printf("O "); break;
//						}
//						else { continue; }
//
//						
//					}
//				}
//				
//			}
//			
//		}
//	}
//
//
//
//
//
//	//while (!destination.empty()) {
//	//	cout << destination.top() <<endl;
//
//	//	destination.pop();
//	//}
//
//	
//
// }