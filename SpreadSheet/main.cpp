#include<iostream>

using namespace std;

int main() {
	int r, c;
	cin >> r >> c;
	int **oldTable = new int*[r];
	for (int i = 0; i < r; i++) {
		oldTable[i] = new int[c];
	}

	int **newTable = new int*[r + 1];
	for (int i = 0; i < r + 1; i++) {
		newTable[i] = new int[c + 1];
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			int temp;
			cin >> temp;
			oldTable[i][j] = temp;
		}
	}

	for (int i = 0; i < r + 1; i++) {
		for (int j = 0; j < c + 1; j++) {
			newTable[i][j] = 0;
			if (i < r&&j < c) {
				newTable[i][j] = oldTable[i][j];
			}
		}
	}

	// start computing here;
	int sum = 0;
	for (int i = 0; i < r + 1; i++) {
		for (int j = 0; j < c + 1; j++) {
			if (i == r&&j == c) {
				cout << sum;
			}else if (j == c) {
				cout << newTable[i][j];
			}
			else if (i == r) {
				cout << newTable[i][j];
				cout << ' ';
			}
			else{
				cout << newTable[i][j];
				cout << ' ';
				newTable[i][c]+= newTable[i][j];
				newTable[r][j] += newTable[i][j];
				sum += newTable[i][j];
			}

		}
		cout << endl;
	}



	for (int i = 0; i < r+1; i++) {
		delete[] newTable[i];
	}
	delete[] newTable;

	for (int i = 0; i < r; i++) {
		delete[] oldTable[i];
	}
	delete[] oldTable;
	return 0;
}