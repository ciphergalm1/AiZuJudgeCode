#include<iostream>

using namespace std;

int main() {
	int* list = new int[10];
	for (int i = 0; i < 10; i++) {
		cin >> list[i];
	}

	//implementaion of shell sort;



	delete[] list;
	return 0;
}