//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#define MAX 10001
//
//using namespace std;
//
//int N, M;
//
//vector<int>computer[MAX];
//bool visited[MAX];
//int hist[MAX] = { -1, };
//int maxi = -1;
//queue<pair<int, int>>Q;
//
//void BFS() {
//	//printf("<<<<<BFS>>>>>\n\n");
//	//printf("Q front first : %d second : %d\n\n", Q.front().first, Q.front().second);
//	pair<int, int>current;
//
//	while (!Q.empty()) {
//
//		current = Q.front();
//		Q.pop();
//		//maxi = max(current.second, maxi);
//
//		for (int i = 0; i < computer[current.first].size(); i++) {
//			if (!visited[computer[current.first][i]]) {
//
//
//				//타겟의 최대 깊이가 이미 발견된 경우 
//				if (hist[computer[current.first][i]] != -1) {
//					
//					current.second = 1 + hist[computer[current.first][i]];
//					//printf("신규 깊이 : %d 더할 깊이 : %d\n\n", current.second, hist[computer[current.first][i]]);
//					//printf("이미 최대 깊이가 발견된 위치(%d)에 접근하였으므로 더 돌 필요 없이 루프를 빠져나옵니다.\n\n",computer[current.first][i]);
//					hist[current.first] = current.second;
//					
//					break;
//				}
//
//				//타겟의 최대 깊이가 아직 발견되지 않은 경우
//				else {
//					//printf("뭔가 할 일이 있는 경우 : <%d>\n\n",current.first);
//					hist[current.first] = current.second + 1;
//					//printf("hist[%d] : %d\n\n",current.first,hist[current.first]);
//				}
//				visited[computer[current.first][i]] = true;
//				pair<int, int>next;
//				next.first = computer[current.first][i];
//				next.second = current.second;
//				//printf("next first : %d second : %d\n\n", next.first, next.second);
//				Q.push(next);
//			}
//		}
//		if (hist[current.first] == -1) {
//			//printf("아무것도 안한 경우 : <%d>\n\n", current.first);
//			hist[current.first] = current.second;
//		}
//
//	}
//
//}
//
//
//int main() {
//
//
//	cin >> N >> M;
//
//
//	for (int i = 0; i < M; i++) {
//		int Snode, Tnode;
//		cin >> Snode >> Tnode;
//		computer[Tnode].push_back(Snode);
//	}
//
//	for (int i = N; i >= 1; i--) {
//
//		pair<int,int> start = make_pair(i, 0);
//		Q.push(start);
//		BFS();
//		
//
//	}
//
//	//printf("end!\n\n");
//
//	/*for (int i = 1; i <= N; i++) {
//		printf("%d : %d ", i, hist[i]);
//	}*/
//
//	int res[MAX];
//	int rescnt = 0;
//
//	for (int i = 1; i <= N; i++) {
//		if (maxi < hist[i]) {
//			maxi = hist[i];
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		if (maxi == hist[i]) {
//			res[rescnt++] = i;
//		}
//	}
//	for (int i = 0; i < rescnt; i++) {
//		printf("%d ", res[i]);
//	}
//}