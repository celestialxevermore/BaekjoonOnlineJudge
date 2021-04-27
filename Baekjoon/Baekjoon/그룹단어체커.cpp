//#include<iostream>
//#include<stdio.h>
//#include<string>
//#include<stack>
//using namespace std;
//
//int main() {
//	
//
//	int ans = 0;
//	int N;
//	cin >> N;
//	//string a;
//	//cin >> a;
//	//cout << *(a.end()-1);
//	for (int i = 0; i < N; i++) {
//		
//		int arr[201] = { 0, };
//		int flag = 0;
//		string a;
//		cin >> a;
//		string res="";
//		res.push_back(a[0]);
//		
//		arr[a[0] - '0']++;
//		
//		for (int i = 1; i < a.size(); i++) {
//			
//			if (*(res.end() - 1) == a[i]) {
//				
//				arr[a[i] - '0']++;
//				res.push_back(a[i]);
//				
//			}
//			else {
//				if (arr[a[i] - '0'] != 0) {
//					flag = 1;
//					break;
//				}
//				else {
//					arr[a[i] - '0']++;
//					res.push_back(a[i]);
//					
//				}
//				
//
//			}
//		}
//		if (flag == 1) { continue; }
//		if (flag == 0) {
//			ans++;
//		}
//		
//
//
//
//	}
//
//
//	cout << ans;
//}