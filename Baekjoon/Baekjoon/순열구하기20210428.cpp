//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//bool visited[16];
//int arr[21];
//int N, R;
//int res[21];
//
//
//
//void DFS(int cur, int level) {
//	
//	if (level == R) {
//		for (int i = 0; i < level; i++) {
//			printf("%d ", res[i]);
//		}
//		printf("\n");
//		return;
//	}
//	else {
//		for (int i = 1; i <= N; i++) {
//			if (!visited[i]) {
//				visited[i] = true;
//				res[level] = arr[i];
//				//printf("DFS(%d,%d)\n",arr[i],level+1 );
//				DFS(arr[i], level+1);
//				visited[i] = false;
//				//level--;
//			}
//		}
//	}
//}
//
//
//
//
//int main() {
//
//	cin >> N >> R;
//	for (int i = 1; i <= N; i++) {
//		cin >> arr[i];
//	}
//
//
//	DFS(0, 0);
//
//
//}