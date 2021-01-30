//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//#include<vector>
//using namespace std;
//
//int n, m;
//int check[1001];
//int start, target;
//int flag = 0;
//vector<int> fr[100000];
//
//
//void DFS(int vertex, int target) {
//    if (vertex == target) {
//        /*flag = 1;
//        printf("YES");*/ return;
//    }
//    //if (fr[vertex].size() == 1) { return; }
//
//    else {
//        for (int i = 0; i < fr[vertex].size(); i++) {
//            if (check[fr[vertex][i]] == 0) {
//                check[fr[vertex][i]] = 1;
//                DFS(fr[vertex][i], target);
//            }
//            /*else if (check[fr[vertex][i]] == 1) {
//                return;
//            }*/
//        }
//    }
//
//}
//
//int main() {
//
//
//    int SNode, TNode;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < m; i++) {
//        scanf("%d %d", &SNode, &TNode);
//        fr[SNode].push_back(TNode);
//        fr[TNode].push_back(SNode);
//    }
//
//
//    scanf("%d %d", &start, &target);
//
//    check[start] = 1;
//  
//    DFS(start, target);
//
//    printf("\n");
//
//   /* for (int i = 1; i <= m; i++) {
//        printf("%d : %d \n", i, check[i]);
//    }*/
//
//
//    if (check[target] != 0) {
//        printf("YES");
//    }
//    else {
//        printf("NO");
//    }
//
//
//}