//============================================================================
// Name        : Cppday3.cpp
// Author      : Nilesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//void callByValue(int a, int b){
//
//	int temp = a;
//	a = b ;
//	b = temp;
//
//		cout<< "After: Value of a : "<<a <<endl;
//		cout<< "Address of a: "<<&a << endl;
//		cout<< "After: Value of b : "<< b << endl;
//		cout<< "Address of b: "<< &b << endl;
//}
int callByValue(int a, int b) {

	int temp = a;
	a = b;
	b = temp;
return 0;

}

int main() {
	int a = 100;
	int b = 200;
	cout << "Before : Value of a : " << a << endl;
//	cout << "Address of a: " << &a << endl;
	cout << "Before Value of b : " << b << endl;
//	cout << "Address of b: " << &b << endl;

	callByValue(a, b);

	cout << "After: Value of a : " << a << endl;
//	cout << "Address of a: " << &a << endl;
	cout << "After: Value of b : " << b << endl;
//	cout << "Address of b: " << &b << endl;
	return 0;
}
