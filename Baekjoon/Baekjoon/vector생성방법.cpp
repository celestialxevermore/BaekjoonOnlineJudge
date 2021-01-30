//#include<stdio.h>
//#include<vector>
//#include<iostream>
//using namespace std;
//
//
//int main() {
//
//
//	vector<int> a(3); //벡터 int형 a
//	
//	a[1] = 5; //빈벡터에다 이러면 안됨 인덱스 전제가 없어서. 
//	
//	
//	cout << a[1] << endl;
//
//
//
//	vector<int> c[3]; //c라는 이름을 가진 벡터가 세개 생김
//	//뭔가 2치원 배열의 주소느낌???
//
//	c[0].push_back(1);
//	c[0].push_back(2);
//	c[0].push_back(3);
//
//	c[1].push_back(4);
//	c[1].push_back(5);
//	c[1].push_back(6);
//
//	c[2].push_back(7);
//	c[2].push_back(8);
//	c[2].push_back(9);
//
//
//
//	cout << c[0][2] << endl; // 3출력
//
//	cout << c[2][2] << endl; // 9출력 
//
//
//
//
//
//
//	vector<pair<int, int> > g[3];
//
//	g[1].push_back({ 3,5 });
//	g[1].push_back({ 4,7 });
//	g[1].push_back({ 5,9 });
//	g[2].push_back(make_pair(7, 7));
//
//
//	cout << g[2][0].first << " " << g[2][0].second << endl;
//
//
//
//
//
//
//
//}