/*
 * PoaitiveNegativeNumArray.cpp
 *
 *  Created on: 25-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>

using namespace std;

int main(){

	int size;
	int arr[size];
	int positive=0;
	int negative=0;
	cout << "Enter the size of array: " <<endl;
	cin >> size;
	cout << "Enter element in the array: " <<endl;
	for(int i=0;i<size;i++){
		cin >> arr[i];
	}
	for(int i=0;i<size;i++){
			if(arr[i]>0){
				positive++;
			}else if(arr[i]<0){
				negative++;
			}
		}
	cout << "Total positive number are: " << positive <<endl;
	cout << "Total negative number are: " << negative <<endl;
	return 0;
}



