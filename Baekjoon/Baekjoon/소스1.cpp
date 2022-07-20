#include<iostream>
#include<string>

using namespace std;

#include<vector>

vector<string> inputs(1000);

int main() {
	string input = "";
	while (1) {
		cin >> input;
		if (input != '\n') {
			inputs.push_back(input);
		}

	}
	for (int i = 0; i < inputs.length; i++) {
		if (inputs[i] != "") {
			cout << inputs[i];
		}
	}
}