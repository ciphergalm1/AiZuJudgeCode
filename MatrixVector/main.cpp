#include<iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int** matrix = new int*[n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}

	int* vectorB = new int[m];
	int* resultVector = new int[n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int temp;
			cin >> temp;
			matrix[i][j] = temp;
		}
	}

	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		vectorB[i] = temp;
	}

	for (int i = 0; i < n; i++) {
		int rowSum = 0;
		for (int j = 0; j < m;j++) {
			rowSum += (matrix[i][j] * vectorB[j]);
		}
		resultVector[i] = rowSum;
	}

	for (int i = 0; i < n; i++) {
		cout << resultVector[i] << endl;
	}

	/*
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matrix[i][j];
			cout << ' ';
		}
		cout << endl;
	}
	*/


	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
	delete[] vectorB;
	delete[] resultVector;
	system("pause");
	return 0;
}