//#include <string>
//#include <vector>
//#include<stdio.h>
//#include<iostream>
//#include<queue>
//using namespace std;
//queue<pair<int, int>>Q;
//int target;
//int cnt = 0;
//vector<int>numbers;
//vector<int> newnumbers;
//
//
//int BFS() {
//    pair<int, int>current;
//
//    while (!Q.empty()) {
//
//        current.first = Q.front().first;
//        current.second = Q.front().second;
//        Q.pop();
//
//        if (current.first == target) {
//            cnt++;
//        }
//        for (int i = 0; i < newnumbers.size(); i++) {
//
//            int newloc = current.first + newnumbers[i];
//
//            if (newloc >= 0 && newloc <= 1000) {
//                pair<int, int>next;
//                next.first = newloc;
//                next.second = current.second;
//                Q.push(next);
//            }
//
//        }
//
//
//    }
//    return cnt;
//
//
//
//}
//
//int solution(vector<int> numbers, int target) {
//    for (int i = 0; i < numbers.size(); i++) {
//        newnumbers.push_back(numbers[i]);
//        newnumbers.push_back(numbers[i] * (-1));
//    }
//    pair<int, int>start;
//    start.first = 0;
//    start.second = 0;
//    Q.push(start);
//    int answer = BFS();
//
//    return answer;
//}
//int main() {
//    int N;
//    cin >> N >> target;
//    for (int i = 0; i < N; i++) {
//        int input;
//        cin >> input;
//        numbers.push_back(input);
//    }
//
//    int ans = solution(numbers,target);
//    printf("%d ", ans);
//
//
//}