//#include<stdio.h>
//#include<stdlib.h>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	/*int h, w;
//	scanf("%d %d", &h, &w);
//
//
//	int** territory = (int**)malloc(sizeof(int*) * h);
//
//	for (int i = 0; i < h; i++) {
//		territory[i] = (int*)malloc(sizeof(int) * w);
//	}*/
//
//
//	int test_territory[6][7] = {
//		{3,5,1,3,1,3,2},
//		{1,2,1,3,1,1,2},
//		{1,3,1,5,1,3,4},
//		{5,1,1,3,1,3,2},
//		{3,1,1,3,1,1,2},
//		{1,3,1,3,1,2,2},
//	};
//
//	int givenh, givenw;
//	scanf("%d %d", &givenh, &givenw);
//
//	int** sum_record = (int**)malloc(sizeof(int*) * (6 - givenh + 1));
//	for (int i = 0; i < 6 - givenh + 1; i++) {
//		sum_record[i] = (int*)malloc(sizeof(int) * (7 - givenw + 1));
//	}
//
//	//세로
//	//크기가 6이고 주어진 길이가 3이면, 4를 넘어가면 안됨
//	//크기가 h이고 주어진 길이가 givenh이면, h-givenh+1을 넘어가면 안됨
//	//가로
//	//크기가 7이고 주어진 길이가 4이면, 4를 넘어가면 안됨
//	//크기가 w이고 주어진 길이가 givenw이면, w-givenw+1을 넘어가면 안됨
//	int starth = 0, startw = 0; int sum = 0;
//	/*while (starth <= 6 - givenh + 1 && startw <= 7 - givenw + 1) {
//		int territory_sum = 0;
//		printf("시작 세로 : %d 시작 가로 : %d \n", starth, startw);
//		for (int i=starth; i <givenh; i++) {
//			for (int j=startw; j <givenw; j++) {
//				territory_sum += test_territory[i][j];
//				
//			}
//		}
//		sum_record[starth][startw] = territory_sum;
//		starth++;
//		startw++;
//
//
//	}*/
//	for (starth; starth <= 6 - givenh + 1; starth++) {
//		
//		
//		for (startw; startw <= 7 - givenw + 1; startw++) {
//			
//			int territory_sum = 0;
//			//starth와 startw가 정해질 때 그 안에서 
//			for (int i = starth; i < starth+givenh; i++) {
//				for (int j = startw; j < startw+givenw; j++) {
//					territory_sum += test_territory[i][j];
//
//				}
//			}
//			
//
//			sum_record[starth][startw] = territory_sum;
//		}
//
//		
//
//	}
//	int ans = 0;
//	for (int i = 0; i < 6 - givenh + 1; i++) {
//		for (int j = 0; j < 7 - givenw + 1; j++) {
//			if (ans < sum_record[i][j]) {
//				ans = sum_record[i][j];
//			}
//		}
//	}
//	for (int i = 0; i < 6 - givenh + 1; i++) {
//		for (int j = 0; j < 7 - givenw + 1; j++) {
//			printf("%d ", sum_record[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("%d \n", ans);
//
//
//
//	//////////////////////////////////////////////////////////////////////
//
//	starth = 1; startw = 0;
//	for (starth; starth <= 6 - givenh + 1; starth++) {
//
//
//		for (startw; startw <= 7 - givenw + 1; startw++) {
//
//			int territory_sum = 0;
//			//starth와 startw가 정해질 때 그 안에서 
//			for (int i = starth; i < starth + givenh; i++) {
//				for (int j = startw; j < startw + givenw; j++) {
//					territory_sum += test_territory[i][j];
//
//				}
//			}
//
//
//			sum_record[starth][startw] = territory_sum;
//		}
//
//	}
//	int ans1 = 0;
//	for (int i = 0; i < 6 - givenh + 1; i++) {
//		for (int j = 0; j < 7 - givenw + 1; j++) {
//			if (ans1 < sum_record[i][j]) {
//				ans1 = sum_record[i][j];
//			}
//		}
//	}
//	for (int i = 0; i < 6 - givenh + 1; i++) {
//		for (int j = 0; j < 7 - givenw + 1; j++) {
//			printf("%d ", sum_record[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("%d \n", ans1);
//
//
//	//////////////////////////////////////////////////////////////////////
//
//
//
//	starth = 2; startw = 0;
//	for (starth; starth <= 6 - givenh + 1; starth++) {
//
//
//		for (startw; startw <= 7 - givenw + 1; startw++) {
//
//			int territory_sum = 0;
//			//starth와 startw가 정해질 때 그 안에서 
//			for (int i = starth; i < starth + givenh; i++) {
//				for (int j = startw; j < startw + givenw; j++) {
//					territory_sum += test_territory[i][j];
//
//				}
//			}
//
//
//			sum_record[starth][startw] = territory_sum;
//		}
//
//
//
//	}
//
//
//	printf("\n");
//	int ans2 = 0;
//	for (int i = 0; i < 6 - givenh + 1; i++) {
//		for (int j = 0; j < 7 - givenw + 1; j++) {
//			if (ans2 < sum_record[i][j]) {
//				ans2 = sum_record[i][j];
//			}
//		}
//	}
//	for (int i = 0; i < 6 - givenh + 1; i++) {
//		for (int j = 0; j < 7 - givenw + 1; j++) {
//			printf("%d ", sum_record[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("%d \n", ans2);
//
//	
//
//	//////////////////////////////////////////////////////////////////////
//
//
//	starth = 3; startw = 0;
//	for (starth; starth <= 6 - givenh + 1; starth++) {
//
//
//		for (startw; startw <= 7 - givenw + 1; startw++) {
//
//			int territory_sum = 0;
//			//starth와 startw가 정해질 때 그 안에서 
//			for (int i = starth; i < starth + givenh; i++) {
//				for (int j = startw; j < startw + givenw; j++) {
//					territory_sum += test_territory[i][j];
//
//				}
//			}
//
//
//			sum_record[starth][startw] = territory_sum;
//		}
//
//
//
//	}
//
//
//	printf("\n");
//	int ans3 = 0;
//	for (int i = 0; i < 6 - givenh + 1; i++) {
//		for (int j = 0; j < 7 - givenw + 1; j++) {
//			if (ans3 < sum_record[i][j]) {
//				ans3 = sum_record[i][j];
//			}
//		}
//	}
//	for (int i = 0; i < 6 - givenh + 1; i++) {
//		for (int j = 0; j < 7 - givenw + 1; j++) {
//			printf("%d ", sum_record[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("%d \n", ans3);
//
//	
//
//
//	//////////////////////////////////////////////////////////////////////
//
//
//	starth = 4; startw = 0;
//	for (starth; starth <= 6 - givenh + 1; starth++) {
//
//
//		for (startw; startw <= 7 - givenw + 1; startw++) {
//
//			int territory_sum = 0;
//			//starth와 startw가 정해질 때 그 안에서 
//			for (int i = starth; i < starth + givenh; i++) {
//				for (int j = startw; j < startw + givenw; j++) {
//					territory_sum += test_territory[i][j];
//
//				}
//			}
//
//
//			sum_record[starth][startw] = territory_sum;
//		}
//
//
//
//	}
//	printf("\n");
//
//
//	int ans4 = 0;
//	for (int i = 0; i < 6 - givenh + 1; i++) {
//		for (int j = 0; j < 7 - givenw + 1; j++) {
//			if (ans4 < sum_record[i][j]) {
//				ans4 = sum_record[i][j];
//			}
//		}
//	}
//	for (int i = 0; i < 6 - givenh + 1; i++) {
//		for (int j = 0; j < 7 - givenw + 1; j++) {
//			printf("%d ", sum_record[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("%d \n", ans4);
//
//
//
//
//
//
//}