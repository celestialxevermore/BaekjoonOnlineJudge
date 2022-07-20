//#include<iostream>
//#include<vector>
//#include<string>
//#include<map>
//#define MAX 100001
//using namespace std;
//map<string, int>dict1;
//map<int, string>dict2;
//int ordertype[MAX];
//int ordercnt = 0;
//vector<string>res1(MAX);
//vector<int>res2(MAX);
//map<string, int>::iterator iter1;
//map<int, string>::iterator iter2;
//int main() {
//
//	int N, M;
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; i++) {
//		string poke = "";
//		cin >> poke;
//		dict1.insert(make_pair(poke, i));
//		dict2.insert(make_pair(i, poke));
//	}
//
//
//
//	for (int i = 0; i < M; i++) {
//
//		string order = "";
//		cin >> order;
//		//숫자를 물어본 경우 -> 포켓몬 이름을 내놓아야 할 경우
//		if (isdigit(order[0])) {
//			ordertype[ordercnt] = 1;
//			
//			res1[ordercnt] = dict2[stoi(order)];
//		}
//		//포켓몬 이름을 물어본 경우 -> 숫자를 내노항야 할 경우
//		else{
//			ordertype[ordercnt] = 0;
//			
//			
//			res2[ordercnt] = dict1[order];
//		}
//		ordercnt++;
//	}
//	
//	for (int i = 0; i < ordercnt; i++) {
//		if (ordertype[i] == 1) {
//			cout << res1[i] << endl;
//		}
//		else {
//			cout << res2[i] << endl;
//		}
//	}
//
//}