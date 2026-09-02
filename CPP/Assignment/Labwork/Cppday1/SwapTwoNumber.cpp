/*
 * SwapTwoNumber.cpp
 *
 *  Created on: 24-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>

using namespace std;

int main(){
	int a;
	int b;

	cout<<"Enter two numbers";

	cin>> a >>b;

	cout<< "Numbers before swapping: "<<"a= "<<a <<"b= "<<b<<endl ;

	a += b;
	b = a - b;
	a -= b;
	cout<< "a = " << a <<" b = "<< b << endl;


	return 0;
}




