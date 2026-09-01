/*
 * GameEngineSearchPartCGameMap.cpp
 *
 *  Created on: 01-Sep-2026
 *      Author: Nilesh
 */

#include<iostream>

using namespace std;

int main() {
	int rows, cols;

	int Grass = 0;
	int Water = 0;
	int Mountain = 0;
	int Forest = 0;
	int Dungeon = 0;

	cout << "Enter rows." << endl;
	cin >> rows;
	cout << "Enter cols." << endl;
	cin >> cols;

	int **arr = new int*[rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	//Loop for user input
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			cin >> arr[i][j];
//		}
//	}

	cout << "============== GAME MAP (" << rows << " x " << cols
			<< ") ==============" << endl;

	for (int i = 0; i < rows; i++) {
		cout << " ";
		for (int j = 0; j < cols; j++) {
			arr[i][j]=rand()%5;
			if (arr[i][j] == 0) {
				Grass++;
			}
			if (arr[i][j] == 1) {
				Water++;
			}
			if (arr[i][j] == 2) {
				Mountain++;
			}
			if (arr[i][j] == 3) {
				Forest++;
			}
			if (arr[i][j] == 4) {
				Dungeon++;
			}
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Legend: 0=Grass 1=Water 2=Mountain 3=Forest 4=Dungeon" << endl;
	cout << endl;

	cout << "Tile Count" << endl;
	cout << "  Grass    : " << Grass << endl;
	cout << "  Water    : " << Water << endl;
	cout << "  Mountain : " << Mountain << endl;
	cout << "  Forest   : " << Forest << endl;
	cout << "  Dungeon  : " << Dungeon<< endl;


	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}

