/*
 * AskForPositiveNumber.cpp
 *
 *  Created on: 25-Aug-2026
 *      Author: Nilesh
 */


#include<iostream>

using namespace std;
int askForPositiveNumber();
int main(){

	askForPositiveNumber();
	return 0 ;
}
int askForPositiveNumber(){
	int num;
	do{
		cout << "Enter positive number: "<< endl;
		cin >> num;
		if(num<0){
			cout <<	"You entered negative number. "<<endl;
		}else{
			cout <<	"You entered positive number. "<<endl;
		}
	}while(num<=0);
	return 0;
}
