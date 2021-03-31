//#include<iostream>
//#include<stdio.h>
//#include<queue>
//#include<vector>
//#include<math.h>
//#include<algorithm>
//#define MAX 10001
//using namespace std;
//
//int N;
//int values[MAX];
//bool visited[MAX];
//vector<int>node[MAX];
////pair의 first는 노드의 번호, second는 현재까지의 합
//queue<pair<int, int>>Q2;
//queue<pair<pair<int, int>, int>>Q1;
//int Total = 0;
//int Level = 0;
//int v1, v2 = 0;
//int ans = MAX;
//int flag = 0;
//int origin = 0;
//int qtotal = 0;
//
//
//void BFS2() {
//
//	pair<int, int>current;
//	while (!Q2.empty()) {
//		current.first = Q2.front().first;
//		current.second = Q2.front().second;
//		qtotal = current.second;
//		Q2.pop();
//		for (int i = 0; i < node[current.first].size(); i++) {
//
//			if (!visited[node[current.first][i]]) {
//				visited[node[current.first][i]] = true;
//
//				pair<int, int>next;
//				next.first = node[current.first][i];
//				next.second = current.second + values[node[current.first][i]];
//				Q2.push(next);
//			}
//		}
//
//
//
//	}
//	for (int i = 1; i <= N; i++) {
//		if (visited[i]) {
//			continue;
//		}
//		//연결되지 않은 점이 남아있음을 의미
//		else {
//			printf("%d에서 방문하지 않은 점이 발견\n\n",i);
//			printf("선거구 1,2가 잘 형성되지 않았습니다!\n\n");
//			flag = 1;
//			printf("방문 여부 출력 : ");
//			for (int i = 1; i <= N; i++) {
//				if (visited[i]) { printf("%d ",i); }
//			}
//			printf("\n");
//			break;
//		}
//	}
//	if (flag == 0) {
//		printf("선거구 1,2가 잘 형성되었습니다!!\n\n");
//		printf("방문 여부 출력 : ");
//		for (int i = 1; i <= N; i++) {
//			if (visited[i]) { printf("%d ",i); }
//		}
//		printf("\n");
//	}
//}
//
//
//
//
//
//
//
////void DFS(int start, int currenttotal, int currentlevel) {
////	visited[start] = true;
////	printf("DFS(start : %d currenttotal : %d currentlevel : %d)\n\n",start,currenttotal,currentlevel);
////		//만일 레벨에 도달하였을 때
////		if (Level == currentlevel) {
////
////			for (int i = 1; i <= N; i++) {
////				if (!visited[i]) {
////					visited[i] = true;
////					int start_ = i;
////					int currenttotal_ = values[i];
////					pair<int, int>start;
////					start.first = i;
////					start.second = currenttotal_;
////					printf("start : first : %d second : %d\n\n", start.first, start.second);
////					Q.push(start);
////					BFS();
////					//만일 선거구1,2가 형성되지 않은 경우
////					if (flag == 1) {
////						printf("초기화...\n\n");
////						for (int i = 1; i <= N; i++) {
////							visited[i] = false;
////
////						}
////						////visited[origin] = true;
////						flag = 0;
////						return;
////
////
////					}
////					else {
////						v1 = currenttotal;
////						v2 = Total - v1;
////						printf("v1 :%d v2 : %d\n\n", v1, v2);
////						ans = min(ans, abs(v1 - v2));
////						printf("current ans : %d\n\n", ans);
////						for (int i = 1; i <= N; i++) {
////							visited[i] = false;
////
////						}
////						return;
////					}
////				}
////			}
////		
////		
////
////		
////		}
////
////
////
////
////	else {
////
////		for (int i = 0; i < node[start].size(); i++) {
////			
////			if (!visited[node[start][i]]) {
////				//printf("%d\n\n", node[start][i]);
////				visited[node[start][i]] = true;
////				currentlevel++;
////				currenttotal += values[node[start][i]];
////				printf("DFS(%d,%d,%d)\n\n", node[start][i], currenttotal, currentlevel);
////				DFS(node[start][i], currenttotal, currentlevel);
////				currenttotal -= values[node[start][i]];
////				currentlevel--;
////				visited[node[start][i]] = false;
////			}
////			
////		}
////
////
////	}
////
////}
//
//
//
//
//int main() {
//
//
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		cin >> values[i];
//		Total += values[i];
//	}
//
//	for (int i = 1; i <= N; i++) {
//		int count;
//		cin >> count;
//
//		for (int j = 0; j < count; j++) {
//			int input;
//			cin >> input;
//			node[i].push_back(input);
//		}
//	}
//
//
//	
//
//	printf("Total : %d\n\n", Total);
//
//	
//
//	for (int i = 1; i <= N; i++) {
//		
//	}
//
//
//
//
//
//
//	if (ans == MAX) {
//		printf("-1");
//	}
//	else {
//
//		printf("%d", ans);
//	}
//}
