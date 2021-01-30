//#include<stdio.h>
//#include<vector>
//#include<stdlib.h>
//
//using namespace std;
//
//int main() {
//	int N;
//
//	scanf("%d", &N);
//
//	int* process = (int*)malloc(sizeof(int) * (N + 1));
//	process[0] = 0;
//
//	for (int i = 1; i < N + 1; i++) {
//		scanf("%d", &process[i]);
//	}
//	
//	int K; // 정전 시간 체크 
//	scanf("%d", &K);
//	int current = 1;
//
//	while (1) {
//		if (current == N + 1) {
//			current = 1;
//		}//current가 프로세스 범위를 넘어가면 다시 1로 초기화를 시킵니다.
//
//		//처리해야 할 작업이 있다면
//		if (process[current] != 0) {
//			process[current]--;
//			K--;//정전시간을 재고
//			current++; //그 다음 대기열을 처리하러 한칸 옮겨줍니다.
//		}
//		//현재 처리해야 할 작업이 없다면 
//		else {
//			current++;
//		}
//		//정전이 되어버린 시점에
//		if (K == 0) { 
//			
//			int flag = N;
//			//만일 모든 작업이 끝나있는 상태라면
//			for (int i = 1; i < N + 1; i++) {
//				if (process[i] == 0) { flag-- ; }
//			}
//			//더이상 처리해야할 작업이 없으므로 -1을 출력해준다. 
//			if (flag == 0) { printf("-1"); }
//
//			else {
//				if (current == N + 1) {
//					current = 1;
//					for (current; current < N + 1; current++) {
//						if (process[current] != 0) {
//							printf("%d", current);
//						}
//
//					}
//				}
//				else {
//					printf("%d", current);
//				}
//			}
//
//				//printf("%d", current);
//			
//			
//			break; }
//	}
// }