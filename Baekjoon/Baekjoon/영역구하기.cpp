//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int n, m, sectorcount;
//int map[101][101];
//bool visited[101][101];
//int space[101];
//int indexforspace = 0;
//
//
//int dx[4] = { -1,1,0,0 };A
//int dy[4] = { 0,0,1,-1 };
//
//
//void DFS(int rstart, int cstart) {
//	if (rstart < 0 || cstart < 0 || rstart >= n || cstart >= m) { return; }
//	else {
//
//		for (int i = 0; i < 4; i++) {
//			int x = rstart + dx[i];
//			int y = cstart + dy[i];
//			
//			//���� ������ ����� ���
//			if (x < 0 || y < 0 || x >= n || y >= m) { /*printf("�ش� ��ǥ (%d,%d)�� ���� ����ϴ�. \n\n", x, y);*/  continue; }
//
//
//
//			//���ٸ� ���� ���
//			if (map[x][y] == 1) {/* printf("�ش� ��ǥ (%d,%d)�� ���ٸ� ���Դϴ�. \n\n", x, y);*/ continue; }
//			if(visited[x][y]==true){ /*printf("�ش� ��ǥ (%d,%d)�� ���ٸ� ���Դϴ�. \n\n", x, y);*/ continue; }
//			//���� ���� �ִ� ���, �׸��� �� ���� ���� �湮���� ���� ���
//			if (map[x][y] == 0 && !visited[x][y]) {
//				//�湮ǥ�ø� �Ѵ�.
//				visited[x][y] = true;
//				map[x][y] = 1; //�װŸ� �߰����ش�.
//				//printf("�ش� ��ǥ (%d,%d)���� �̵��մϴ�.\n\n", x, y);
//				space[indexforspace]=space[indexforspace]+map[x][y];
//				//�湮�� ������ �߰�����
//				/*printf("��������� ���̰�� : %d \n\n", space[indexforspace]);
//				printf("DFS(%d,%d) ���� \n",x,y);*/
//				DFS(x, y);
//			}
//		}
//	}	
//}
//int main() {
//
//	cin >> n >> m >> sectorcount;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			map[i][j] = 0;
//		}
//	}
//
//
//	for (int i = 0; i < sectorcount; i++) {
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//
//		//���簢���� ���ϴ� �������� ���� �������� �־������Ƿ� 
//		for (int y = y1; y < y2; y++) {
//			for (int x = x1; x < x2; x++) {
//				map[y][x] = 1;
//			}
//			for (int x = x1; x < x2; x++) {
//				visited[x][y] = false;
//			}
//
//
//		}
//
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (map[i][j] == 0) {
//				space[indexforspace]++;
//				visited[i][j] = true;
//				DFS(i, j);
//				indexforspace++;
//			}
//		}
//	}
//	printf("%d \n",indexforspace);
//	sort(space, space + indexforspace);
//	for (int i = 0; i < indexforspace; i++) {
//		printf("%d ",space[i]);
//	}
//	return 0;
//}