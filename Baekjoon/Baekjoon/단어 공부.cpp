//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<string>
//#include<map>
//using namespace std;
//
//
//int main() {
//
//	string a;
//	string b="";
//	cin >> a;
//
//
//	int arr[201];
//	int maxi = -1;
//	char res = ' ';
//	int cnt = 0;
//
//	map<char, int> input;
//	map<char, int>:: iterator it;
//
//	for (int i = 0; i < a.size(); i++) {
//		if (islower(a[i])) {
//			b.push_back(toupper(a[i]));
//		}
//		else {
//			b.push_back(a[i]);
//		}
//	}
//	//cout << b;
//	for (int i = 0; i < b.size(); i++) {
//		input[b[i]]++;
//	}
//
//
//	for (it = input.begin(); it != input.end(); it++) {
//		if (maxi < it->second) {
//			maxi = it->second;
//			res = it->first;
//		}
//	}
//	
//	
//	for (it = input.begin(); it != input.end(); it++) {
//		if (maxi == it->second) {
//
//			cnt++;
//		}
//	}
//
//
//	if (cnt == 1) {
//		if (islower(res)) {
//			res = toupper(res);
//			cout << res;
//		}
//		else {
//			cout << res;
//		}
//		
//	}
//	else {
//		cout << '?';
//	}
//
//
//}