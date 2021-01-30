//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//
//using namespace std;
//
//bool flag = false;
//int N;
//int SumSet[1025];
//int* set;
//int total = 0;
//void DFS(int Level,int sum) {
//	if (sum > total / 2) { return; }
//	if (flag == true)return;
//	/*if (Level == N + 1) {
//		if (sum == total - sum) {
//			flag = true;
//		}
//	}*/
//	else {
//		DFS(Level + 1, sum + set[Level]);
//		DFS(Level + 1, sum);
//	}
//	
//
//}
//
//
//int main() {
//
//
//	//배열 원소의 개수를 정합니다. 
//	scanf("%d", &N);
//
//
//	//집합을 만들어줍니다. 이 때, 인덱스가 1부터 시작할 수 있도록
//	//N+1크기로 만들어줍니다.
//	int* set = (int*)malloc(sizeof(int) * (N + 1));
//	//부분집합의 개수만큼 합이 생길 예정이므로 2의 N제곱 -1 크기의 
//	//배열을 만들어줍니다. 
//	
//	//이후 배열에 원소를 집어 넣습니다. 참고로 중복은 없습니다.
//	//첫째 원소는 무쓸모이니까 0으로 그냥 초기화합니다.
//	//배열에다가 받습니다.
//	set[0] = 0;
//	
//	for (int i = 1; i < N + 1; i++) {
//		scanf("%d", &set[i]);
//		total += set[i];
//	}
//
//
//	DFS(1,0);
//	if (flag)printf("YES \n");
//	else { printf("NO \n"); }
//	return 0;
//}
//
