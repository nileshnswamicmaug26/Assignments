/*
 * CallByRefrence.cpp
 *
 *  Created on: 26-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>

using namespace std;

void callByRefrence(int &p, int &q) {
	cout << "Before : Value of p : " << p << endl;
	cout << "Before Value of q : " << q << endl;
	int temp = p;
	p = q;
	q = temp;

	cout << "Address of p: " << &p << endl;
	cout << "Address of q: " << &q << endl;
	cout << "====================================================" << endl;

}

int main() {

	int a = 100;
	int b = 200;

	cout << "Before : Value of a : " << a << endl;
	cout << "Before Value of b : " << b << endl;

	cout << "Address of a: " << &a << endl;
	cout << "Address of b: " << &b << endl;

	cout << "====================================================" << endl;
	callByRefrence(a, b);

	cout << "After: Value of a : " << a << endl;
	cout << "After: Value of b : " << b << endl;
	cout << "Address of a: " << &a << endl;
	cout << "Address of b: " << &b << endl;
}
