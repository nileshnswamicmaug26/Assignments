/*
 * CalibrationPackerParser.cpp
 *
 *  Created on: 29-Aug-2026
 *      Author: Nilesh
 */
#include<iostream>

using namespace std;
bool parsePacket(const int *rawData, int size, int **outMin, int **outMax) {

	const int *min = rawData;
	const int *max = rawData;
	if (size < 0) {
		return false;
	}
	for (int i = 0; i < size; i++){

		if (*(rawData + i) < *min){
			min = rawData + i;
		}

		if (*(rawData + i) > * max) {
			max = rawData + i;
		}
	}

	*outMin = const_cast<int*> (min);
	*outMax = const_cast<int*> (max);
	return true;
}
int main() {

	int packet[] = { 45, 12, 67, 8, 55, 31 };
	int *minPtr = nullptr;
	int *maxPtr = nullptr;
	if (parsePacket(packet, 6, &minPtr, &maxPtr)) {
		cout << "Calibration Min : " << *minPtr << endl;
		cout << "Calibration Max : " << *maxPtr << endl;
	}else {
		cout << "Failed to parse packet." << endl;
	}

	return 0;
}

