/*
 * HardwareRegisterAccess.cpp
 *
 *  Created on: 29-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>

using namespace std;

int main() {

	int statusReg = 0b10110001;
	int controlReg = 0b00000000;
	int dataReg = 0b11001010;

	const int *regPtr1 = &statusReg;

	cout << "Status register " << *regPtr1 << endl;

//	regPtr1 = 150;//error: invalid conversion from 'int' to 'const int*' [-fpermissive]  regPtr1 = 150;

	regPtr1 = &dataReg;
	cout << *regPtr1 << endl;

	int *const regPtr2 = &controlReg;
	cout << "Control register " << *regPtr2 << endl;

	*regPtr2 = 0b11001010;
	cout << "Control register attempt repoint: " << *regPtr2 << endl;

	//regPtr2 = &dataReg; //error: assignment of read-only variable 'regPtr2'

	const int *const regPtr3 = &statusReg;

	cout << "Data register " << *regPtr3 << endl;

	//regPtr3=controlReg;//error: assignment of read-only variable 'regPtr3

	//*regPtr3=dataReg;//error: assignment of read-only location '*(const int*)regPtr3 *regPtr3=dataReg;

	return 0;
}

