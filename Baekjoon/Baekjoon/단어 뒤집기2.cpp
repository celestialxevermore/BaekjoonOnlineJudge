//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//char input[100001];
//
//
//void swap_(char a, char b) {
//	char tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main() {
//
//
//
//	gets_s(input);
//	int length = 0;
//	int i = 0;
//	int spacecnt = 0;
//	while (input[i]!='\0') {
//		length++;
//		i++;
//		if (input[i] == ' ') {
//			spacecnt++;
//		}
//	}
//
//	if (spacecnt == 0) {
//		
//
//
//
//
//	}
//
//	else {
//
//		vector<string>tmp(10001);
//		string ans = "";
//		int tmpcnt = 0;
//		int i = 0;
//		while (i != length) {
//
//			if (input[i] != ' ') {
//				tmp[tmpcnt].push_back(input[i]);
//			}
//			else {
//				tmpcnt++;
//			}
//			i++;
//		}
//		
//		for (int i = 0; i <= tmpcnt; i++) {
//
//			string now = tmp[i];
//			int nowlength = now.length();
//
//
//			for (int j = 0; j < nowlength; j++) {
//				char tmp;
//				tmp = now[j];
//				now[j] = now[nowlength - 1 - j];
//				now[nowlength - 1 - j] = tmp;
//
//
//			}
//
//
//			
//			ans += now;
//			ans += " ";
//
//		}
//
//		cout << ans;
//
//	}
//
//
//}