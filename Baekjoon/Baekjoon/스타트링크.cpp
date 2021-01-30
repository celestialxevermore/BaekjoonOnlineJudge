//#include<stdio.h>
//#include<iostream>
//#include<queue>
//#include<vector>
//#define MAX 1000001
//using namespace std;
//
//queue< pair<int, int>> Q;
//bool visited[MAX];
//int F, S, G, U, D;
//int flag = 0;
//void BFS(pair<int,int> now) {
//	if (S < G&&U==0&&D!=0) {
//		printf("use the stairs");
//		return;
//	}
//	if (S > G && U != 0 && D == 0) {
//		printf("use the stairs");
//		return;
//	}
//
//	while (!Q.empty()) {
//
//		pair<int, int> tmp; //다음 bfs를 진행하기 위한 지점 설정
//
//		tmp.first = Q.front().first;
//		tmp.second = Q.front().second; 
//		
//		/*printf("(%d,%d) : 현재 Q의 front의 지점입니다.\n\n", Q.front().first, Q.front().second);
//		printf("(%d,%d) : 본 지점을 Q에서 제거해줍니다. \n\n", Q.front().first, Q.front().second);*/
//		//만일 원하는 지점에 도달을 했다면
//		if (Q.front().second == G) {
//			//printf("(%d,%d) / %d : 원하는 지점에 도달하였습니다!! \n\n", Q.front().first, Q.front().second, G);
//			printf("%d", Q.front().first);
//			flag = 1;
//			break;
//		}
//		Q.pop();
//
//		int upanddown[2] = { U,-D };
//
//		//위 아래로 이동을 시작합니다. 
//		for (int i = 0; i < 2; i++) {
//			pair<int, int>current;
//			current.first = tmp.first;
//			current.second = tmp.second;
//
//			int currentposition = current.second + upanddown[i];
//			//printf("(%d,%d) : 본 지점으로 이동할 지 여부를 측정합니다. \n\n", current.first, currentposition);
//			
//		
//			//현재 위치가 0이거나 건물의 최상단보다 높은 경우
//			if (currentposition <= 0 || currentposition > F) {
//				//printf("(%d,%d) : 본 지점은 건물의 범위를 벗어나기 때문에 Q에서 제거합니다.\n\n", current.first, currentposition);
//				continue;
//			}
//			//만일 방문을 한 지점에 도달했다면
//			if (visited[currentposition]) {
//				//printf("(%d,%d) : 본 지점은 이미 방문한 적이 있기 때문에 제거합니다. \n\n", current.first, currentposition);
//				continue;
//			}
//			//아직 방문한 적이 없는 경우
//			if (!visited[currentposition]) {
//				//방문했음을 표시해주고
//				visited[currentposition] = true;
//				pair<int, int> next;
//				current.first++;
//				next.first = current.first;
//				next.second = currentposition;
//				/*printf("(%d,%d) : 본 지점은 아직 방문한 적이 없기 때문에 Q에 넣습니다. \n\n", current.first, currentposition);
//				printf("현재까지의 방문 계수: %d / 현재 층 수 : %d\n\n", next.first, next.second);
//				printf("(%d,%d) : 본 지점을 Q에다가 넣어줍니다. \n\n", next.first, next.second);*/
//				Q.push(next);
//			}
//		}
//	}
//	if (flag == 0) {
//		printf("use the stairs");
//	}
//
//	return;
//
//}
//
//int main() {
//
//	//cin >> F >> S >> G >> U >> D;
//	scanf("%d%d%d%d%d", &F, &S, &G, &U, &D);
//	pair<int, int> start;
//	start.first = 0;
//	start.second = S;
//
//	//시작점은 당연히 현재 위치니까 방문한 셈이다.
//	visited[S] = true;
//
//	Q.push(start);
//	BFS(start);
//
//	return 0;
//}