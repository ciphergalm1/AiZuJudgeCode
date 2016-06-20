#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int MyItoa(char* numstr);

int main() {
	char x[20];
	scanf_s("%s",x,20);
	int result = MyItoa(x);

	cout << result << endl;

	system("pause");
	return 0;
}

int MyItoa(char* numstr)
{
	int temp = 0;
	int length = strlen(numstr);
	cout << "length: " << length<<endl;
	for (int i = 0; i < length; i++) {
		int digit = numstr[i] - '0';            //get the digit in int
		cout << digit << endl;
		
		temp += pow(10, (length - i - 1)) *digit;			//multiply the digit with the right number
		cout << "temp result: "<<temp << endl;
	}

	return temp;
}
