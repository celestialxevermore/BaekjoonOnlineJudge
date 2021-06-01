//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int N;
//
//bool func(int p) {
//
//	int res[4];
//	int rescnt = 0;
//	int tmp;
//	tmp = p;
//	int cnt = 0;
//
//
//	while (p > 0) {
//		p = p / 10;
//		res[rescnt++] = tmp % 10;
//		tmp = tmp / 10;
//		cnt++;
//	}
//
//	/*for (int i = 0; i < cnt; i++) {
//		printf("%d ", res[i]);
//	}*/
//
//	switch (cnt) {
//	case 1:
//		return true; break;
//
//
//	case 2:
//		return true; break;
//
//	case 3:
//		if (res[1] * 2 == res[0] + res[2]) {
//			return true; break;
//		}
//		else {
//			return false; break;
//		}
//
//	case 4:
//		if ((res[1] * 2 == res[0] + res[2]) && (res[2] * 2 == res[1] + res[3])) {
//			return true; break;
//		}
//		else {
//			return false; break;
//		}
//
//
//	}
//
//
//
//}
//
//
//int main() {
//
//
//	cin >> N;
//	int ans = 0;
//	
//	for (int i = 1; i <= N; i++) {
//		if (func(i)) {
//			ans++;
//		}
//	}
//	cout << ans;
//}