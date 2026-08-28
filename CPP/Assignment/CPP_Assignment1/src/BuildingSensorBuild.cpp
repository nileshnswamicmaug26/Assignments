/*
 * BuildingSensorBuild.cpp
 *
 *  Created on: 28-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int floors;
	int rooms;

	cout << "Enter number of Floors" << endl;
	cin >> floors;
	cout << "Enter number of rooms" << endl;
	cin >> rooms;

	double building[floors][rooms];

	cout << "Set temprature in room" << endl;

	for (int i = 0; i < floors; i++) {

		for (int j = 0; j < rooms; j++) {

			cin >> building[i][j];
		}
	}

	double maxtemp = building[0][0];
	int floorroo=0;
	int roomno=0;
	double sum = 0.0;
	double avg=0.0;
	double maxavg = 0.0;
	int warning=0;
	int htfloor=0;
	cout << "          Room1 Room2 Room3"<<endl;
	for (int i = 0; i < floors; i++) {
		cout << "Floor " << i + 1 << " : " << " ";
		avg = 0.0;
		sum = 0.0;
		for (int j = 0; j < rooms; j++) {

			printf("%.1f ", building[i][j]);

			if (maxtemp < building[i][j]) {
				maxtemp = building[i][j];
				floorroo = i + 1;
				roomno = j + 1;
			}
			if (building[i][j] >= 30.0) {
				warning = j+i;
			}
			sum = sum + building[i][j];
			avg = sum / floors;
			if (maxavg < avg) {
				maxavg = avg;
				htfloor = i + 1;
			}

		}
		cout << endl;
	}

	cout << "Hottest room : " << "Floor " << floorroo << " Room " << roomno
			<< " -> " << maxtemp << "°C" << endl;
	cout << "Hottest floor : " << " floor " << htfloor << " (" << maxavg
			<< "°C) " << endl;
	cout << "Rooms at WARNING or above :" << warning << endl;
	return 0;
}

