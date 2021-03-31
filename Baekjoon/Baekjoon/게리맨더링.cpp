//#include<iostream>
//#include<vector>
//#define MAX 10000
//#include<queue>
//#include<algorithm>
//#include<math.h>
//
//using namespace std;
//
//
//vector<int>N[MAX];
//bool visited[MAX];
//int p[MAX];
//
//int mini = 100000;
//int res = 0;
//int total = 0;
//
//int n;
//int R;
//
//int flag = 0;
//void DFS2(int start) {
//	
//	for (int i = 0; i < N[start].size(); i++) {
//		if (!visited[N[start][i]]) {
//			visited[N[start][i]] = true;
//			printf("DFS2(%d)\n\n",N[start][i]);
//			DFS2(N[start][i]);
//		}
//	}
//
//
//
//}
//
//
//void DFS1(int T, int Level,int start) {
//
//
//	//만일 r,R개만큼 선택이 된 경우
//	if (Level == R) {
//		printf("%d개만큼 선택이 되었습니다!! 현재 Level : %d R : %d\n\n", R, Level, R);
//		//1개를 선택한 경우 혹은 전체 개수에서 하나를 뺀 개수만큼 고른 경우
//		printf("현재까지 ");
//		for (int i = 1; i <= n; i++) {
//			if (visited[i]) { printf("%d 번 정점 ", i); }
//		}
//		printf("이 방문처리가 되었습니다. 이 지점들이 현재 선거구 1입니다. \n\n");
//		printf("이제 선거구2를 결정합니다.\n\n");
//
//		
//		for (int i = 1; i <= n; i++) {
//
//			if (!visited[i]) {
//				printf("%d개 만큼 순회한 시점에, 아직 방문하지 않은 정점 %d이 존재합니다!!\n\n", R, i);
//				printf("%d 정점에서 아직 방문처리가 되지 않았습니다.이 지점에서부터 선거구 확정을 위한 DFS2를 시작합니다.\n\n", i);
//				printf("start : DFS2(%d)\n\n", i);
//				//visited[i] = true;
//				DFS2(i);
//				for (int j = 1; j <= n; j++) {
//					if (!visited[j]) {
//						printf("여전히 %d 정점에서 방문처리가 되지 않았음을 확인하였습니다...\n\n", j);
//						flag = 1;
//						break;
//
//					}
//				}
//				if (flag == 1) {
//					for (int i = 1; i <= n; i++) {
//						visited[i] = false;
//					}
//					flag = 0;
//					return;
//				}
//			}
//				
//		}
//			/*for (int j = 1; j <= n; j++) {
//				if (!visited[j]) {
//					printf("여전히 %d 정점에서 방문처리가 되지 않았음을 확인하였습니다...\n\n", j);
//					flag = 1;
//					break;
//
//				}
//			}*/
//		if (flag == 0) {
//			printf("선거구1과 선거구 2가 잘 나뉘었습니다!!\n\n");
//			printf("전체 인구 : %d에서 이 경우의 선거구1의 인구 : %d를 제한 결과를 만들어냅니다.\n\n", total, T);
//			res = total - T;
//			printf("선거구 1의 인구 : %d 선거구 2의 인구 : %d \n\n", T, res);
//			res = abs(T - res);
//			
//			mini = min(mini, res);
//			mini = abs(mini);
//			printf("현재까지 갱신된 결과 : %d\n\n\n\n", mini);
//			for (int k = 1; k <= n; k++) { visited[k] = false; }
//			flag = 0;
//			return;
//		}
//		
//
//
//	}
//	else {
//		for (int i = 0; i < N[start].size(); i++) {
//			if (!visited[N[start][i]]) {
//				visited[N[start][i]] = true;
//				T += p[N[start][i]];
//				Level++;
//				printf("시작점 : %d // DFS1(%d,%d,%d)\n\n",N[start][i], T, Level,N[start][i]);
//				DFS1(T, Level,N[start][i]);
//				printf("DFS1(%d,%d,%d)종료\n\n", T, Level, N[start][i]);
//				Level--;
//				T -= p[N[start][i]];
//				//visited[i] = false;
//			}
//		}
//	}
//
//
//
//
//}
//
//
//void comb(int n, int r) {
//	int tmp;
//	//0개 고르는 경우
//	if (r == 0) { 
//		printf("전체 %d개 중 %d개를 고르는 경우에 해당합니다. \n\n", n, r);
//		printf("모두 골랐으므로 전체 인구가 하나의 선거구에 해당합니다. \n\n");
//		return;
//	}
//	//모두 고르는 경우
//	if (r == n) { 
//		printf("전체 %d개 중 %d개를 고르는 경우에 해당합니다. \n\n", n, r);
//		printf("모두 골랐으므로 선거구1과 선거구2로 나뉘어질 수 없습니다.\n\n");
//		return;
//	}
//
//	else {
//		//DFS2에서 Level한도 확인을 위해 R이라는 전역변수 설정
//		R = r;
//		printf("전체 %d개 중 %d개를 고르도록 하겠습니다. \n\n", n, R);
//		//레벨 0, 총합 0
//		int Level = 0;
//		int T = 0;
//		int start = 0;
//		visited[0] = true;
//		//주어진 R개만큼 선거구 확정을 위한 DFS1를 일단 돈다. 
//		
//
//			DFS1(T, Level, start);
//			printf("<<<<<%d개를 고를때 종료!!>>>>>\n\n", R);
//			for (int i = 1; i <= n; i++) {
//				visited[i]=false;
//			}
//	}
//
//
//}
//
//
//
//
//
//
//
//int main() {
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int input;
//		cin >> input;
//		p[i] = input;
//		total += input;
//	}
//
//	/*for (int i = 1; i <= n; i++) {
//		printf("%d : %d \n", i, p[i]);
//	}*/
//	for (int i = 1; i <= n; i++) {
//		N[0].push_back(i);
//	}
//	for (int i = 1; i <= n; i++) {
//
//		int cnt;
//		cin >> cnt;
//		for (int j = 0; j < cnt; j++) {
//
//			int input;
//			cin >> input;
//			N[i].push_back(input);
//		}
//
//	}
//
//	for (int i = 0; i <= n; i++) {
//		printf("%d번 정점에 연결된 정점 : ", i);
//		for (int j = 0; j < N[i].size(); j++) {
//			printf("%d 정점 ", N[i][j]);
//		}
//		printf("\n\n");
//	}
//
//
//
//
//	for (int r = 0; r <= n; r++) {
//		printf("<<<<< start : 전체 %d개 중 %d개를 고르세요.>>>>>\n\n", n, r);
//		comb(n, r);
//	}
//
//
//	if (mini == 100000) {
//		printf("-1");
//	}
//	else {
//
//		printf("%d", mini);
//
//	}
//
//
//
//}