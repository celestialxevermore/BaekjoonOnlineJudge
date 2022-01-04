//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//
//
//vector<int>map[501];
//vector<int>stages(200001);
//
//vector<int>solution(int N, vector<int>stages) {
//
//	vector<int>answer;
//
//
//	for (int i = 0; i < stages.size(); i++) {
//
//		map[stages[i]].push_back(i + 1);
//	}
//	vector<int>current_total(N + 1);
//	vector<int>not_accepted(N + 1);
//	vector<float>res(N + 1);
//	current_total[0] = N;
//
//
//
//
//	for (int i = 0; map[i].size() != 0; i++) {
//		not_accepted[i] = map[i].size();
//		res[i + 1] = not_accepted[i] / current_total[i];
//		current_total[i + 1] = current_total[i] - not_accepted[i];
//	}
//
//	sort(res.begin(), res.end());
//	
//	vector<int>realres(N + 1);
//	for (int i = 0; i < res.size(); i++) {
//		realres.push_back(res[i]);
//	}
//	return realres;
//}
//
//
//
//int main() {
//
//	vector<int>res; 
//	stages = { 2,1,2,6,2,4,3,3 };
//	res = solution(5, stages);
//
//	for (int i = 0; i < res.size(); i++) {
//		cout << res[i];
//	}
//
//
//
//
//}