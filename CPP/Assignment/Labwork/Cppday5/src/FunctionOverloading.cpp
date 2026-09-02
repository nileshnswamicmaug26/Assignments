//============================================================================
// Name        : Cppday5.cpp
// Author      : Nilesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>

using namespace std;

int add(int p,int q){
	return p+q;
}
double add(double p,double q,double r){
	return p*q-r;
}
int adddouble(double p, double q,double r){
	return p-q+r;
}
double adddouble(int p, double q){
	return p*q;
}

//double constValue(double p=3.14,int q){
//	return p*q;								//you can not initialized the value to first argument.
//}
double constValue(int q,double p=3.14){
	return p*q;
}
int main() {

	int a=10;
	int b=20;

	int c=30.0;
	int d=40.0;

	cout<<fixed<<setprecision(1);

	cout<<add(a,b)<<endl;
	cout<<adddouble(d,c,a)<<endl;
	cout<<add(a,d,c)<<endl;
	cout<<adddouble(b,d)<<endl;
	cout<<constValue(b)<<endl;
	cout<<constValue(b,2)<<endl; // here the value will be override.
	return 0;
}
