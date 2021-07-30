//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//int main() {
//
//	//map<char, int> ch;
//
//	//map<char, int>::iterator it;
//
//	
//
//	//cin >> a;
//
//
//	//for (int i = 0; a[i] != '\0'; i++) {
//	//	ch[a[i]]++;
//	//}
//	//int maxi = -1;
//	//for (it = ch.begin(); it != ch.end(); it++) {
//	//	maxi = max(maxi, it->second);
//	//	cout << it->first << ' ' << it->second << '\n';
//	//}
//	//cout << maxi;
//
//	char a[100];
//	map<string, int> ch1;
//	map<string, int>::iterator it1;
//
//	int n;
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		ch1[a]++;
//	}
//
//
//	int maxi = -1;
//	string res;
//	for (it1 = ch1.begin(); it1 != ch1.end(); it1++) {
//		if (it1->second > maxi) {
//			maxi = it1->second;
//			res = it1->first;
//		}
//		cout << it1->first << ' ' << it1->second << '\n';
//
//		
//	}
//
//	cout << res;
//	
//}