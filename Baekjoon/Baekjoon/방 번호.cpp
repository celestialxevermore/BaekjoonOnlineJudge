//#include<iostream>
//#include<vector>
//#include<string>
//#define SETCNT 10
//using namespace std;
//
//int space[SETCNT][10];
//
//int cnt = 0;
//int input[10];
//int inputcnt = 0;
//int main() {
//
//	string inputs = "";
//	cin >> inputs;
//
//	for (int i = 0; i < sizeof(input) / sizeof(int); i++) {
//		if (input[i] != 0) {
//			cout << input[i];
//		}
//		else {
//			continue;
//		}
//	}
//	for (int i = 0; i < inputs.size(); i++) {
//		input[inputcnt++] = inputs[i] - '0';
//	}
//
//
//
//	for (int i = 0; i < sizeof(input) / sizeof(int); i++) {
//		
//		int current = 0;
//		if (input[i] != 0) {
//			//printf("current : %d\n", input[i]);
//			current = input[i];
//			//���� ���� ���ڰ� 6�̰ų� 9�� ���
//			if (current == 6) {
//				//printf("current is 6\n");
//				//�ڽ��� 6�̰�, 0�� ��� �ִ� ��쿡��
//				if (space[cnt][current] == 0) {
//					space[cnt][current] = 1;
//				}
//				//�׷��� ���� 6�� �̹� ���� �ִµ�, �ٸ� 9�� ��� �ִ� ���
//				else if (space[cnt][current] == 1 && space[cnt][9] == 0) {
//					space[cnt][9] = 1;
//				}
//				else if (space[cnt][current] == 1 && space[cnt][9] == 1) {
//					cnt++;
//					space[cnt][current] = 1;
//					//printf("cnt++ :%d ", cnt);
//				}
//			}
//			else if (current == 9) {
//				//printf("current is 9 \n");
//				//�ڽ��� 9�̰�, 0�� ��� �ִ� ��쿡��
//				if (space[cnt][current] == 0) {
//					space[cnt][current] = 1;
//					
//				}
//				//�׷��� ���� 9�� �̹� ���� �ִµ�, �ٸ� 6�� ��� �ִ� ���
//				else if (space[cnt][current] == 1 && space[cnt][6] == 0) {
//					space[cnt][6] = 1;
//				}
//				//9�� �̹� �� �ְ�, 6�� �̹� �� �ִ� ���
//				else if (space[cnt][current] == 1 && space[cnt][6] == 1) {
//					cnt++;
//					space[cnt][current] = 1;
//					//printf("cnt++ :%d ", cnt);
//				}
//
//			}
//
//			//6�� 9�� ������ ������ ������ ���
//			else {
//				//printf("current is 1,2,3,4,5,7,8 \n");
//				//�̹� �� �ִ� ���
//				if (space[cnt][current] == 1) {
//					cnt++;
//					space[cnt][current] = 1;
//				}
//				else {
//					//���� �ڱ� �ڽſ� 1�� �߰��� �� cnt++
//					space[cnt][current] = 1;
//					
//				}
//			}
//		}
//		//���� ������� �ʴ� �����
//		else { continue; }
//
//	}
//	cout << cnt + 1;
//}
