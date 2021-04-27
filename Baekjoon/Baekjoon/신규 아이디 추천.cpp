//#include <string>
//#include <vector>
//#include<iostream>
//#include<stack>
//using namespace std;
//
//string solution(string new_id) {
//    string input = new_id;
//    string answer = "";
//    string tmp1 = "";
//    string tmp2 = "";
//    string tmp3 = "";
//    string tmp4 = "";
//    string tmp5 = "";
//    string tmp6 = "";
//    string tmp7 = "";
//    //#1
//    for (int i = 0; i < input.size(); i++) {
//        if (isupper(input[i])) {
//            tmp1.push_back(tolower(input[i]));
//        }
//        else {
//            tmp1.push_back(input[i]);
//        }
//    }
//    cout << tmp1 << endl;
//    //#2
//    for (int i = 0; i < tmp1.size(); i++) {
//        if (isalpha(tmp1[i]) || isdigit(tmp1[i])) {
//            tmp2.push_back(tmp1[i]);
//        }
//        else if (tmp1[i] == '-' || tmp1[i] == '_' || tmp1[i] == '.') {
//            tmp2.push_back(tmp1[i]);
//        }
//        else {
//            continue;
//        }
//    }
//    cout << tmp2 << endl;
//
//    for (int i = 0; i < tmp2.size()-1; i++) {
//        stack<char>s1;
//        if (s1.empty()) {
//            s1.push(tmp2[i]);
//        }
//        else {
//            if (s1.top() == '.' && tmp2[i] == '.') {
//                continue;
//            }
//            else if (s1.top() == '.' && tmp2[i] != '.') {
//                    s1.push(tmp2[i]);
//                 }
//            else {
//                s1.push(tmp2[i]);
//            }
//        }
//        while (!s1.empty()) {
//            tmp3.push_back(s1.top());
//            s1.pop();
//        }
//
//    }
//    if (tmp2[tmp2.size()] != '.') {
//        tmp3.push_back(tmp2[tmp2.size()]);
//    }
//    cout << tmp3 << endl;
//
//    return answer;
//}
//
//int main() {
//    string a;
//
//    string ans;
//
//    cin >> a;
//
//    ans = solution(a);
//    
//    cin >> a;
//
//    
//
//}