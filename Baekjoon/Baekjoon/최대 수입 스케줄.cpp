//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<vector>
//
//using namespace std;
//
//typedef struct Data {
//	int money;
//	int when;
//
//	Data(int a, int b) {
//		money = a;
//		when = b;
//	}
//
//	bool operator<(const Data& b)const {
//		return when > b.when;
//	}
//};
//
//#define MAX 987654321
//
//int main() {
//	int n, a, b, res = 0;
//	int max = 987654321;
//	vector<Data>T;
//	priority_queue<int>pQ;
//
//
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		cin >> a >> b;
//		T.push_back(Data(a, b));
//		if (max < b) {
//			max = b;
//		}
//	}
//	sort(T.begin(), T.end());
//	for (int i = max; i >= 1; i--) {
//		for (int j = 0; j < n; j++) {
//			if (T[j].when < i)break;
//			pQ.push(T[j].money);
//		}
//		if (!pQ.empty()) {
//			res += pQ.top();
//			pQ.pop();
//		}
//	}
//
//	printf("%d\n", res);
//}
