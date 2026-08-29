/*
 * StructPadding.cpp
 *
 *  Created on: 30-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>
using namespace std;
struct Layout1 {
	char c1;
	int i;
	char c2;
};
struct Layout2 {
	int i;
	char c1;
	char c2;
};
int main() {

	cout << "Layout1 size: " << sizeof(Layout1) << endl;

	cout << "Layout2 size: " << sizeof(Layout2) << endl;

	cout << endl;

	cout << "Why the sizes differ?" << endl;
	cout
			<< "Structure size differs because the sequence of data types are changed"
			<< endl;

	cout << endl;

	cout << "What padding is and why the compiler adds it" << endl;
	cout
			<< "Using extra space or adding extra bytes in between member to ensure proper alignment."
			<< endl;
	cout << endl;

	cout
			<< "Why member order matters when defining network packet headers or hardware register maps"
			<< endl;
	cout
			<< "Network Packets: If your software struct includes unexpected padding, the layout of your "
					"struct will not match the raw bytes arriving over the network wire."
					"Hardware Registers: Microcontrollers and CPUs expose hardware features at exact bit and byte offsets. "
					"If a register expects a configuration flag at byte 2,"
					" but your compiler inserts 3 padding bytes before it, your code will write to the wrong hardware register, causing crashes or system failure."
					"Your application will read padding bytes as actual data, corrupting the message."
			<< endl;

	return 0;
}

