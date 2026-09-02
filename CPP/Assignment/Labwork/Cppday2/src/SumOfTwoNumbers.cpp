/*
 * SumOfTwoNumbers.cpp
 *
 *  Created on: 25-Aug-2026
 *      Author: Nilesh
 */


#include<iostream>

using namespace std;

int sumOfTwoNumbers(int num1,int num2){

	return num1 + num2;
}

int main(){

	int num1;
	int num2;

	cout<< "Enter the first number: " << endl;
	cin >> num1;
	cout<< "Enter the second number: " << endl;
	cin >> num2;

	int result = sumOfTwoNumbers(num1,num2);

	cout<< "Sum of "<< num1 << " and " << num2 <<" is : " << result;

	return 0;


}
