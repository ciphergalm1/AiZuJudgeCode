#include<iostream>

using namespace std;

int countDigit(long n) {
	int x = 0;
	if (n < 10) {
		return 1;
	}
	else {
		return 1 + countDigit(n / 10);
	}
}

int main() {
	long a, b;
	while (!cin.eof()) {
		cin >> a >> b;
		cout << countDigit(a) + countDigit(b) << endl;
		//cout << a + b << endl;
	}

	return 0;
}