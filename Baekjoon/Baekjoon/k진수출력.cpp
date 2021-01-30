//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//#include<algorithm>
//#include<vector>
//#include<stack>
//using namespace std;
//
//int main() {
//	
//	stack<int> decimal;
//	stack<int>penta;
//	stack<int>octamal;
//	stack<int>hexadecimal;
//
//	printf("1 \n");
//
//	/*decimal.push(1);
//	decimal.push(2);*/
//
//
//	/*while (!decimal.empty()) {
//
//		cout << decimal.top() << endl;
//		decimal.pop();
//
//	}*/
//
//	printf("1 \n");
//	int N,K;
//
//	printf("1 \n");
//	cin >> N;
//	cin >> K;
//	int copy = N;
//
//
//	switch (K) {
//	case 2:
//		while (copy > 0) {
//			decimal.push(copy % 2);
//			copy /= 2;
//			if (copy < 10) {
//				octamal.push(copy); break;
//			}
//		}
//
//		while (!decimal.empty()) {
//			cout << decimal.top();
//			decimal.pop();
//		}
//		break;
//	case 5:
//		while (copy > 0) {
//			penta.push(copy % 5);
//			copy /= 5;
//			if (copy < 10) {
//				octamal.push(copy); 
//			}
//		}
//		while (!penta.empty()) {
//			cout << penta.top();
//			penta.pop();
//		}
//		break;
//	case 8:
//		while (copy > 0) {
//			octamal.push(copy % 2);
//			copy /= 8;
//			if (copy < 10) {
//				octamal.push(copy); break;
//			}
//		}
//		
//
//		while (!octamal.empty()) {
//			cout << octamal.top();
//			octamal.pop();
//		}
//
//		break;
//
//	case 16:
//		while (copy > 0) {
//			if (copy % 16 > 9) {
//				char alpha = 107 - (copy % 16);
//				hexadecimal.push(alpha);
//
//				copy /= 16;
//				
//			}
//			else {
//				hexadecimal.push(copy % 16);
//
//				copy /= 16;
//			}
//
//		}
//		while (!hexadecimal.empty()) {
//			cout << hexadecimal.top();
//			hexadecimal.pop();
//		}
//
//
//	}
//
//
//
//
//
//
//}