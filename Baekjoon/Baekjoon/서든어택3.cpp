//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//#define MAX 100000001
//using namespace std;
//
//long long int n;
//
//long long int input[MAX];
//
//int main() {
//
//	cin >> n;
//	string ans = "";
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;
//		input[i] = a;
//	}
//
//	int jun = input[0];
//
//	sort(input + 1, input + n);
//
//	/*for (int i = 1; i < n; i++) {
//		printf("%d ", input[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < n; i++) {
//		printf("%d ", input[i]);
//	}*/
//
//	for (int i = 1; i < n; i++) {
//		if (input[i] < jun) {
//			jun += input[i];
//			ans = "yes";
//		}
//		else {
//			ans = "no";
//			break;
//		}
//	}
//	
//	if (n - 1 == 0) {
//		cout << ans;
//	}
//	else {
//		printf("Yes");
//	}
//	
//
//}