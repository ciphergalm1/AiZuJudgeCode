#include<iostream>

using namespace std;

int main() {
	int n, m, l;
	cin >> n >> m >> l;

	long int **matrixA = new long int*[n];
	for (int i = 0; i < n; i++) {
		matrixA[i] = new long int[m];
	}

	long int **matrixB = new long int*[m];
	for (int i = 0; i < m; i++) {
		matrixB[i] = new long int[l];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int temp;
			cin >> temp;
			matrixA[i][j] = temp;
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			int temp;
			cin >> temp;
			matrixB[i][j] = temp;
		}
	}


	long int **matrixC = new long int*[n];
	for (int i = 0; i < n; i++) {
		matrixC[i] = new long int[l];
	}

	//
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			matrixC[i][j] = 0;
		}
	}

	// start computing 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < m; k++) {
				matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			cout << matrixC[i][j];
			if (j != (l - 1)) {
				cout << ' ';
			}
		}
		cout << endl;
	}


	for (int i = 0; i < n; i++) {
		delete[] matrixA[i];
		delete[] matrixC[i];
	}

	for (int i = 0; i < m; i++) {
		delete[] matrixB[i];
	}

	delete[] matrixC;
	delete[] matrixB;
	delete[] matrixA;
	return 0;
}