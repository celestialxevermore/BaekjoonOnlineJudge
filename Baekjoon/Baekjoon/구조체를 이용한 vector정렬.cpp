//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//typedef struct Loc {
//	int x, y, z;
//
//	Loc(int a, int b, int c) {
//		x = a;
//		y = b;
//		z = c;
//	}
//	//원본을 바꿀 수 없음
//	bool operator<(const Loc& b)const {
//		//return x < b.x;
//		//x는 함수를 호출한 객체의 x
//		// b.x는 새로 등장한 b의 x 
//		//앞에것이 작고 뒤에가 크다 오름차순 정리 
//
//
//		if (x != b.x)return x < b.x;
//		if (y != b.y)return y < b.y;
//		if (z != b.z)return z < b.z;
//	}
//};
//
//
//int main() {
//	
//	vector<Loc> XY;
//	XY.push_back(Loc(2, 3, 5));
//	XY.push_back(Loc(3,6,7));
//	XY.push_back(Loc(2,3,1));
//	XY.push_back(Loc(5,2,3));
//	XY.push_back(Loc(3,1,6));
//	
//	sort(XY.begin(), XY.end());
//
//
//	for (auto pos : XY) cout << pos.x << " " << pos.y << " " << pos.z << endl;
//
//
//
//	
//
//
//}