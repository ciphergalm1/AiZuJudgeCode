#include<iostream>

using namespace std;

int main() {
	int diceValue[6];
	int diceRot[3] = {0,1,2};

	for (int i = 0; i < 6; i++) {
		cin >> diceValue[i];
	}

	int count;
	cin >> count;

	for (int i = 0; i < count; i++) {
		int axis1Val, axis2Val;
		cin >> axis1Val >> axis2Val;
		int axis1 = -1, axis2 = -1;
		bool axisSet = false;
		for (int j = 0; j < count&&(!axisSet); j++) {
				if (axis1Val == diceValue[j]) {
					axis1 = j;
				}
				if(axis2Val == diceValue[j]){
					axis2 = j;
				}
				if (axis1 != -1 && axis2 != -1) {
					axisSet = true;
				}
		}


	}

	return 0;
}