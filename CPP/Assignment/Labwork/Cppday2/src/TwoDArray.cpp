/*
 * TwoDArray.cpp
 *
 *  Created on: 25-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>

using namespace std;

int main() {

	int row;
	int column;
	cout << "Enter a size of row";

	cin >> row;
	cout << "Enter a size of column";

	cin >> column;

	int arr[row][column];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cin >> arr[i][j];
		}
	}
	cout << "Matrix of " << row << " X " << column << endl;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

