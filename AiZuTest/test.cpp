#include<iostream>

using namespace std;

int main() {
	char cha = 'a';
	int b = cha;
	b += 4;
	cha = b;
	cout << cha << endl;

	char * p = &cha;
	*p += 2;

	cout << cha << endl;

	int x = 10;
	cout << ++x << endl;

	cout << x << endl;

	cout << x++ << endl;

	return 0;
}