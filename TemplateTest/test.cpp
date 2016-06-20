#include<iostream>
#include<string>

using namespace std;

int MyItoa(char* numstr);

int main() {
	char* numStr = "234";
	int result = MyItoa(numStr);

	cout << result << endl;

	system("pause");
	return 0;
}

int MyItoa(char* numstr)
{
	int temp = 0;
	int length = strlen(numstr);
	for (int i = 0; i < length; i++) {
		temp += 10 * (length - i - 1)*(numstr[i]-'0');
	}

	return temp;
}
