#include<iostream>
#include<string>

using namespace std;

long computeByOperator(long a,long b,char operatorInput) {
	long result = 0;
	if (operatorInput =='+') {
		result = a + b;
	}
	if (operatorInput =='-') {
		result = a - b;
	}
	if (operatorInput =='*') {
		result = a * b;
	}
	return result;
}


int main() {
	long numList[200];
	int index = 0;
	string input;

	while (cin>>input) {
		//cin >> input;
		//cout << input;
		if (!isdigit(input[0])) {
			numList[index-2] =computeByOperator(numList[index-2],numList[index-1],input[0]);
			//cout << numList[index - 2] << endl;
			index -= 1;
		}
		else {
			long temp = stol(input,nullptr,10);
			numList[index] = temp;
			index++;
		}
	}
	cin.get();
	cout << numList[0] << endl;

	return 0;
}