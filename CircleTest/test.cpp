#include<iostream>

using namespace std;

const double PI = 3.141592653;
int main() {
	double r;
	cin >> r;
	cout << PI*r*r;
	cout << ' ';
	cout << 2 * PI*r;

	return 0;
}