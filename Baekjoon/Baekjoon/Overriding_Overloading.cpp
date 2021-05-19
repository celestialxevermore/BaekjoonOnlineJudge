//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
////Overriding
//class Employee {
//	
//public:
//	string name;
//	int age;
//
//
//	void print() {
//		printf("name : ", this->name, "old : ", this->age);
//	}
//};
//
////Employee상속
//class Manager : Employee {
//	
//private:
//	string jobofManage;
//	string name;
//	int age;
//
//
//public:
//
//	//Manager(){}
//	Manager(string jobofManage, string name, int age) { this->jobofManage = jobofManage;  this->name = name; this->age = age; }
//	//overriding Employee의 print를 오버라이딩
//
//	void print() {
//		cout << "name : " << this->name << "old : " << this->age;
//		printf("\n\n");
//		cout << "manager :" << this->name << " is engaged in " << this->jobofManage;
//	}
//};
//
//
//
////Overloading 
//class OverloadingTest {
//	void test() {
//		printf("None");
//	}
//
//	void test(string name) {
//		printf("%s",name);
//	}
//	void test(string name, int age) {
//		printf("%s and %d", name, age);
//	}
//
//};
//
//int main() {
//	Manager m1("Marketing","aa",19);
//	m1.print();
//
//
//}
