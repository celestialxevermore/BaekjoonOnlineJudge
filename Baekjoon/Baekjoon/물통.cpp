//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//bool visited[201][201][201];
//
//int A, B, C;
//int res[2000];
//int rescnt = 0;
//
//void BFS(int a, int b, int c) {
//	
//
//	
//	
//		//c�� 0�� �ƴѰ��
//		if (a == 0 && b == 0 && c != 0) {
//			int cc = c;
//			if (c > A) {
//				a = A;
//				c = c - A;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					BFS(a, b, c);
//				}
//			}
//			else {
//				a = c;
//				c = 0;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					BFS(a, b, c);
//				}
//			}
//
//			if (c > B) {
//				b = B;
//				c = c - B;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					BFS(a, b, c);
//				}
//			}
//			else {
//				b = c;
//				c = 0;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					BFS(a, b, c);
//				}
//			}
//
//
//		}
//		//b�� 0�� �ƴ� ���
//		else if (a == 0 && b != 0 && c == 0) {
//			if (b > A) {
//				a = A;
//				b = b - A;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//			else {
//				a = b;
//				b = 0;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//
//			if (b > c) {
//				c = C;
//				b = b - C;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//			else {
//				c = b;
//				b = 0;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//		}
//		//a�� 0�� �ƴ� ���
//		else if (a != 0 && b == 0 && c == 0) {
//			if (a > B) {
//				b = B;
//				a = a - B;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//			else {
//				b = a;
//				a = 0;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//
//			if (a > c) {
//				c = C;
//				a = a - C;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//			else {
//				c = a;
//				a = 0;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//		}
//		
//		//a�� 0�� ���
//		else if (a == 0 && b != 0 && c != 0) {
//			
//			//b�� ���ؼ�
//			if (b > A) {
//				a = A;
//				b = b - A;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//			else {
//				a = b;
//				b = 0;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//
//
//			if (c > A) {
//				a = A;
//				c = c - A;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//			else {
//				a = c;
//				c = 0;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//
//
//
//
//		}
//		//b�� 0�� ���
//		else if (a != 0 && b == 0 && c != 0) {
//			
//			if (a > B) {
//				b = B;
//				a = a - B;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//			else {
//				b = a;
//				a = 0;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//
//			if (c > B) {
//				b = B;
//				c = c - B;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//			else {
//				b = c;
//				c = 0;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//
//
//		}
//		//c�� 0�� ���
//		else if (a == 0 && b != 0 && c != 0) {
//			if (b > A) {
//				a = A;
//				b = b - A;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//			else {
//				a = b;
//				b = 0;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//			
//			if (c > A) {
//				a = A;
//				c = c - A;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//			else {
//				a = c;
//				c = 0;
//				if (!visited[a][b][c]) {
//					visited[a][b][c] = true;
//					printf("BFS(%d, %d, %d)\n\n", a, b, c);
//					if (a == 0 && c != 0) {
//						res[rescnt++] = c;
//					}
//					BFS(a, b, c);
//				}
//			}
//
//		
//		}
//
//	
//
//
//}
//
//int main() {
//
//	cin >> A >> B >> C;
//
//	BFS(0, 0, C);
//
//	for (int i = 0; i < rescnt; i++) {
//		cout << res[i];
//	}
//
//
//}