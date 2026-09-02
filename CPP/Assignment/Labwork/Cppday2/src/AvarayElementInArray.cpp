/*
 * AvarayElementInArray.cpp
 *
 *  Created on: 25-Aug-2026
 *      Author: Nilesh
 */
#include<iostream>

using namespace std;

int main(){

	int arr[5];
	int total=0;

	cout << "Enter the marks." <<endl;

	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	for(int i=0;i<size(arr);i++){

		total = total + arr[i];
	}
	cout << "Average: " << (total /size(arr));
	return 0;
}



