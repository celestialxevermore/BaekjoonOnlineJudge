//#include<iostream>
//#include <string>
//#include <vector>
//
//#define MAX 201
//using namespace std;
//int computers[MAX][MAX];
//int n;
//bool visited[MAX];
//int answer = 0;
//
//
//int DFS(int start, vector<vector<int>> computers) {
//
//}
//
//
//void solution(int start) {
//
//    for (int i = 1; i <= n; i++) {
//        if (computers[start][i] == 1 && !visited[i]) {
//            visited[i] = true;
//            //printf("solution(%d)\n\n", i);
//            solution(i);
//            
//        }
//    }
//    
//}
//int main() {
//
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            cin >> computers[i][j];
//        }
//    }
//    int start;
//    for (int i = 1; i <= n; i++) {
//        start = i;
//        if (!visited[start]) {
//            visited[start] = true;
//           // printf("solution(%d)\n\n", start);
//            solution(start);
//            answer++;
//        }
//    }
//    printf("%d", answer);
//
//
//
//
//}
//
