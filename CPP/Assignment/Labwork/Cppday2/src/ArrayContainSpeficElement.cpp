/*
 * ArrayContainSpeficElement.cpp
 *
 *  Created on: 25-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>

using namespace std;

int main(){

	int size;

	int num;
	cout << "Enter the size of array: "<<endl;
	cin >> size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin >> arr[i];
	}
	cout << "Enter a number that you want to find: "<<endl;

	cin >> num;
	for(int i=0;i<size;i++){
		if(arr[i] == num){
			cout << "Number found";
			return 0;
		}
	}
	 cout<< "Not found"<<endl;
	 return 0;
}


