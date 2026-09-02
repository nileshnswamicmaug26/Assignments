/*
 * PrintMultiplicationTable.cpp
 *
 *  Created on: 25-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>

using namespace std;
int printMultiplicationTable(int num);

int main(){

	int num = 5;

	printMultiplicationTable(num);

	return 0;
}

int printMultiplicationTable(int num){

	for(int i=1; i<=10; i++){

		cout << num << " X " << i << " = "<< num * i <<endl;
	}
	return 0;
}
