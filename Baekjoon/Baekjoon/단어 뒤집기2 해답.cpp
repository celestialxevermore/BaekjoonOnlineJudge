//#include<iostream>
//#include<string>
//#include<stack>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//
//	string s = "";
//
//	getline(cin, s);
//	//끝에 추가함
//	s += '\n';
//	stack<char>st;
//
//	bool check = false;
//
//	for (int i = 0; i < s.size(); i++) {
//
//		if (s[i] == '<') {
//			while (!st.empty()) {
//				printf("%c", st.top());
//				st.pop();
//			}
//			printf("<");
//			check = true;
//		}
//		else if (s[i] == '>') {
//			printf(">");
//			check = false;
//		}
//		else if (check) { printf("%c", s[i]); }
//		else if (s[i] == ' ' || s[i] == '\n') {
//			while (!st.empty()) {
//				printf("%c", st.top());
//				st.pop();
//			}
//			printf(" ");
//		}
//		else st.push(s[i]);
//	}
//	return 0;
//
//}