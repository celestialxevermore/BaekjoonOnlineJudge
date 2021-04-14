//#include<iostream>
//#include<string>
//
//using namespace std;
//
//string a;
//int flag = 0;
//int main() {
//
//
//	cin >> a;
//
//	if (a.size() % 2 == 0) {
//		int right = a.size() / 2;
//		int left = a.size() / 2 - 1;
//
//		for (int i = 0; i < a.size() / 2; i++) {
//			if (a[left - i] == a[right + i]) {
//				continue;
//			}
//			else {
//				flag = 1;
//				break;
//			}
//		}
//
//	}
//	else {
//
//		int mid = a.size() / 2;
//		for (int i = 0; i < a.size() / 2; i++) {
//			if (a[mid - i] == a[mid + i]) {
//				continue;
//			}
//			else {
//				flag = 1;
//				break;
//			}
//		}
//
//
//
//
//
//	}
//	if (flag == 1) {
//		printf("0");
//	}
//	else {
//		printf("1");
//	}
//}