//#include<iostream>
//#include<queue>
//using namespace std;
//const int MAX = 100000 + 1;
//
//int cnt;
//int minSec;
//bool visited[MAX];
//
//int minSecond(int Subin, int herbrother) {
//	queue<pair<int, int>> q;
//
//	q.push(make_pair(Subin, 0));
//	visited[Subin] = true;
//
//	while (!q.empty()) {
//		int curLoc = q.front().first;
//		int curSec = q.front().second;
//
//		q.pop();
//
//		visited[curLoc] = true;
//
//		//이미 목적지에 도달한 적이 있는 경우 cnt++
//		if (minSec && minSec == curSec && curLoc == herbrother) {
//			cnt++;
//		}
//
//		//최초로 목적지 도달 시 최소 시간을 기록하고 cnt++
//		if (!minSec && curLoc == herbrother) {
//			minSec = curLoc;
//			cnt++;
//		}
//
//
//		if (curLoc + 1 < MAX && !visited[curLoc + 1]) {
//			q.push(make_pair(curLoc + 1, curSec + 1));
//		}
//		if (curLoc - 1 >= 0 && !visited[curLoc - 1]) {
//			q.push(make_pair(curLoc - 1, curSec + 1));
//		}
//		if (curLoc * 2 < MAX && !visited[curLoc * 2]) {
//			q.push(make_pair(curLoc * 2, curSec + 1));
//		}
//	}
//	return minSec;
//}
//int main() {
//	int Subin, herbrother;
//
//	cin >> Subin >> herbrother;
//
//	cout << minSecond(Subin, herbrother) << '\n';
//	cout << cnt << endl;
//}