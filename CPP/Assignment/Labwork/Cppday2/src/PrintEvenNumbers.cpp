/*
 * PrintEvenNumbers.cpp
 *
 *  Created on: 25-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>

using namespace std;
int printEvenNumbers(int num);

int main(){

	int number;

	cout << "Enter a number: " <<endl;
	cin >> number;

	printEvenNumbers(number);
	return 0;
}

int printEvenNumbers(int number){

	int i =0 ;

	while(i<=number){

		if(i%2==0){
			cout << i << endl;
		}
		i++;
	}
	return 0;
}
