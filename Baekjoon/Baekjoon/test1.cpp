//#include <string>
//#include <vector>
//#include<queue>
//#include<iostream>
//using namespace std;
//
//int dist[20001];
//bool visited[20001];
//vector<int>node[20001];
//queue<pair<int, int>>Q;
//void dijk(int n, vector<vector<int>> edge) {
//    pair<int, int>cur;
//    while (!Q.empty()) {
//
//        printf("11\n\n");
//        cur = Q.front();
//        Q.pop();
//        int curnode = cur.first;
//        int curcost = cur.second;
//        for (int i = 0; i < node[curnode].size(); i++) {
//            int nextnode = node[curnode][i];
//            int nextcost = curcost + 1;
//            if (dist[nextnode] > nextcost) {
//                dist[nextnode] = nextcost;
//                pair<int, int>next;
//                next.first = nextnode;
//                next.second = nextcost;
//                Q.push(next);
//            }
//        }
//    }
//
//}
//
//
//
//
//
//int solution(int n, vector<vector<int>> edge) {
//    int answer = 0;
//    for (int i = 0; i <= 20000; i++) { dist[i] = 100000; }
//
//    printf("11\n\n");
//    printf("%d \n\n", edge.size());
//    for (int i = 0; i < edge.size(); i++) {
//
//        printf("11\n\n");
//        printf("1 : %d 2 : %d\n\n", edge[i][0], edge[i][1]);
//        node[edge[i][0]].push_back(edge[i][1]);
//        node[edge[i][1]].push_back(edge[i][0]);
//    }
//
//    printf("11\n\n");
//    dist[1] = 0;
//    pair<int, int>start;
//    start.first = 1;
//    start.second = 0;
//    visited[1] = true;
//
//    printf("11\n\n");
//    Q.push(start);
//
//    printf("11\n\n");
//    dijk(n, edge);
//
//    int maxi = -1;
//    for (int i = 1; i <= n; i++) {
//        if (maxi < dist[i]) {
//            maxi = dist[i];
//        }
//    }
//    for (int i = 1; i <= n; i++) {
//        if (maxi == dist[i]) {
//            answer++;
//        }
//    }
//
//
//
//    return answer;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    vector<vector<int>>start = { {3, 6},{4, 3},{3, 2},{1, 3},{1, 2},{2, 4}, { 5, 2 }};
//
//
//    int ans = solution(n, start);
//    printf("%d ", ans);
//}