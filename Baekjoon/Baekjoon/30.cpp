//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//
//
//string N;
//char res[1000001];
//int rescnt = 0;
//int main() {
//
//	cin >> N;
//	int thirty = 0;
//	int flag = 0;
//	for (int i = 0; i < N.size(); i++) {
//		if (N[i] == '0') {
//			flag = 1;
//		}
//		thirty += N[i] - '0';
//		res[rescnt++] = N[i];
//	}
//	string ans = "";
//
//	if (flag == 1 && thirty % 3 == 0) {
//
//		sort(res, res + rescnt,greater<>());
//		
//		for (int i = 0; i < rescnt; i++) {
//			ans += res[i];
//		}
//		
//		cout << ans;
//	}
//	else {
//		printf("-1");
//	}
//	
//
//}