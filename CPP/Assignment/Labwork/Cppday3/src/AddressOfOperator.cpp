/*
 * AddressOfOperator.cpp
 *
 *  Created on: 27-Aug-2026
 *      Author: Nilesh
 */


#include<iostream>

using namespace std;

int main(){
	int a=10;
	int *ptr = &a;

	cout<<"This 'a' represent value: "<< a <<endl;

	cout<<"Address of 'a' : "<< &a <<endl;

	cout<<"ptr hold the address of 'a' :" <<ptr <<endl;

	cout<<"&ptr represent its own address: "<< &ptr <<endl;

	cout<<"*ptr represent the value of 'a' because it hold the address of 'a' :"<< *ptr <<endl;

	*ptr = 30;

	cout<<"This a represent value: "<< a <<endl;

	cout<<"*ptr represent the value of 'a' because it hold the address of 'a'"<< *ptr <<endl;

	cout<<"======================================================================================"<<endl;

	int b = 20;
	int &ref = b;
	//int &ref = &b;
	//int c = &ref;
	int c = 30;
	int *ptr1 = &ref;

	cout<<"Value of 'b' :"<< b <<endl;
	cout<<"Value of 'ref' :"<<ref <<endl;
	cout<<"Value of '*ptr1' :"<<*ptr<<endl;

	cout<<"Address of '&b' :" <<&b <<endl;
	cout<<"Address of '&ref' holds address of 'b'  :"<<&ref<<endl;
	cout<<"Address of '*ptr1' holds address of 'b' :"<<ptr1<<endl;
	cout<<"Address of '*ptr1' its own address :"<<&ptr1<<endl;
	cout<<"======================================================================================"<<endl;

	cout<<"int &ref = &b;---> we will ge this error : redeclaration of 'int& ref' we can not redeclaration" <<endl;
	cout<<"int c = &ref;---> we will ge this error :invalid conversion from 'int*' to 'int' [-fpermissive]" <<endl;

	cout<<"======================================================================================"<<endl;



	ptr1 = &c;
	cout<<"Value of 'c' :"<< c <<endl;

	cout<<"Address of '&c' :" <<&c <<endl;
	cout<<"Address of '&ptr1' :" <<ptr1 <<endl;
	cout<<"Address of '&ptr1' :" <<&ptr1 <<endl;

	cout<<"======================================================================================"<<endl;

	int d= 40;
//	int *ptr2 = d;
	int *ptr2 = &d;

	cout<<"Address of '&ptr' :" <<*ptr2 <<endl;

	cout<<"*ptr2 = d;->invalid conversion from 'int' to 'int*' [-fpermissive]"<<endl;
	return 0;
}

