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
//			//현재 들어온 숫자가 6이거나 9인 경우
//			if (current == 6) {
//				//printf("current is 6\n");
//				//자신이 6이고, 0이 비어 있는 경우에는
//				if (space[cnt][current] == 0) {
//					space[cnt][current] = 1;
//				}
//				//그런데 지금 6이 이미 들어와 있는데, 다만 9가 비어 있는 경우
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
//				//자신이 9이고, 0이 비어 있는 경우에는
//				if (space[cnt][current] == 0) {
//					space[cnt][current] = 1;
//					
//				}
//				//그런데 지금 9가 이미 들어와 있는데, 다만 6이 비어 있는 경우
//				else if (space[cnt][current] == 1 && space[cnt][6] == 0) {
//					space[cnt][6] = 1;
//				}
//				//9도 이미 차 있고, 6도 이미 차 있는 경우
//				else if (space[cnt][current] == 1 && space[cnt][6] == 1) {
//					cnt++;
//					space[cnt][current] = 1;
//					//printf("cnt++ :%d ", cnt);
//				}
//
//			}
//
//			//6과 9를 제외한 나머지 숫자인 경우
//			else {
//				//printf("current is 1,2,3,4,5,7,8 \n");
//				//이미 차 있는 경우
//				if (space[cnt][current] == 1) {
//					cnt++;
//					space[cnt][current] = 1;
//				}
//				else {
//					//현재 자기 자신에 1을 추가한 뒤 cnt++
//					space[cnt][current] = 1;
//					
//				}
//			}
//		}
//		//전혀 고려하지 않는 경우임
//		else { continue; }
//
//	}
//	cout << cnt + 1;
//}
