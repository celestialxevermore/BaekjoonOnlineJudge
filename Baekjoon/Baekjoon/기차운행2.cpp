//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//#include<stack>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//
//	int N;
//	scanf("%d", &N);
//
//	char PO[51];
//	int POindex = 0;
//
//	int* train = (int*)malloc(sizeof(int) * N);
//	//기차 순서 입력받습니다. 
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &train[i]);
//
//	}
//
//	int Intersection[51];
//	int top = -1;
//
//
//	int RightSequence[51];
//	//index는 강의 영상에서 나온 j를 말합니다.
//	int index = 0;
//	//순서대로 숫자가 들어간 배열을 만듭니다.
//	for (int i = 0; i < 51; i++) {
//		RightSequence[i] = i;
//	}
//
//
//
//	for (int i = 0; i < N; i++) {
//
//		//만일 교차로가 비었다면 
//		if (top == -1) {
//			Intersection[++top] = train[i]; //train에 하나 넣습니다. 
//			PO[POindex] = 'P'; //P를 기록합니다.
//			POindex++; //그리고 다음을 계속하여 기록할 수 있도록 인덱스를 증가합니다.
//		}
//
//		//만일 교차로 안에 무언가 있다면
//		//정렬된 배열과 교차로 맨 위의 원소를 서로 하나씩 비교를 시작합니다.
//		else if (Intersection[top] == RightSequence[index]) {
//			PO[POindex] = 'O'; POindex++; //'O'를 기록한 후 PO인덱스를 증가시킵니다.
//			Intersection[top--] = 0;  //해당 top은 일치함을 확인하였으니 제거합니다.
//			index++; // 다음 원소와의 비교를 위해 인덱스를 증가시킵니다.
//
//			//그리고 교차로에 남아있는 것들을 나란히 비교합니다.
//			for (top; top > -1; top--) {
//				//일치한다면 빼내고 index를 증가합니다.
//				if (Intersection[top] == RightSequence[index]) {
//					PO[POindex] = 'O'; POindex++;
//					Intersection[top--] = 0;
//					index++;
//				}
//				//top과 일치하지 않는다면 top아래의 것들과 비교할 수 없으므로
//				//for문을 빠져나온다. 
//				else { break; }
//			}
//
//			
//
//
//		}
//		//교차로가 비어있지도 않은데, 정렬된 것과 다른 경우면 이제 새로운 것을 추가할 수 있습니다. 
//		else { Intersection[top] = RightSequence[index]; top++; PO[POindex] = 'P'; POindex++; }
//
//	}
//
//	
//	
//	if (top != -1) {
//
//		printf("Impossible \n");
//	}
//	else {
//		//이제 결과를 출력하면 됩니다. 
//		for (int i = 0; i < 51; i++) {
//			if (PO[i] != 'P' && PO[i] != 'O') { break; }
//			else {
//				printf("%c ", PO[i]);
//			}
//		}
//	}
//	
//	
//
//}