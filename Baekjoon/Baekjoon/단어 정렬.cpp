//#include<iostream>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//int N;
//
//string list[20001];
//int listcnt = 0;
//
//bool compareWith(string a, string b) {
//	if (a.length() == b.length()) {
//		return a < b;
//	}
//	return a.length() < b.length();
//}
//
//int main() {
//
//	cin >> N;
//
//	for (int i = 1; i <= N; i++) {
//		int flag = 0;
//		string a;
//		cin >> a;
//
//		if (listcnt == 0) {
//			list[listcnt++] = a;
//		}
//		else {
//			for (int j = 0; j < listcnt; j++) {
//				//�̹� �ִٸ�
//				if (list[j] == a) {
//					flag = 1;
//					break;
//				}
//			}
//
//			if (flag == 1) {
//				continue;
//			}
//			else {
//				list[listcnt++] = a;
//							
//			}
//		}
//	}
//	sort(list, list + listcnt,compareWith);
//	//printf("\n");
//	//for (int i = 0; i < listcnt; i++) {
//	//	cout << list[i] << endl;
//	//}
//
//	//printf("\n");
//
//
//	//for (int i = 0; i < listcnt; i++) {
//
//	//	//���ڿ� ���� ��
//	//	for (int j = 0; j < listcnt; j++) {
//
//	//		if (list[i].size() < list[j].size()) {
//	//			string tmp = "";
//	//			tmp = list[j];
//	//			list[j] = list[i];
//	//			list[i] = tmp;
//	//		}
//	//		//���࿡ ���̰� ���� ��� ���� �� ��
//	//		
//	//		else {
//	//			continue;
//	//		}
//	//	}
//
//
//	//}
//
//	
//
//	for (int i = 0; i < listcnt; i++) {
//		cout << list[i] << endl;
//	}
//
//}