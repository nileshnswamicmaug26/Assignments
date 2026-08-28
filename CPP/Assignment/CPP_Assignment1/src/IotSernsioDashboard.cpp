//============================================================================
// Name        : Assignment1.cpp
// Author      : Nilesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void modulePanel(int &statusCode) {

	switch (statusCode) {
	case -1:
		cout << "Status      : " << "SENSOR_ERROR" << endl;
		cout << "Action      : " << "Sensor fault — check wiring" << endl;
		break;
	case 0:
		cout << "Status      : " << "NORMAL" << endl;
		cout << "Action      : " << "No action required" << endl;
		break;
	case 1:
		cout << "Status      : " << "WARNING" << endl;
		cout << "Action      : " << "Alert sent to supervisor" << endl;
		break;
	case 2:
		cout << "Status      : " << "CRITICAL" << endl;
		cout << "Action      : " << "Cooling system triggered" << endl;
		break;
	case 3:
		cout << "Status      : " << "SHUTDOWN" << endl;
		cout << "Action      : " << "Emergency shutdown initiated" << endl;
		break;
	default:
		break;

	}

}

int main() {
	double sensorValue;
	int statusCode;

	cout << "Sensor value:" << endl;
	cin >> sensorValue;

	if (sensorValue < -1) {
		statusCode = -1;
	} else if (sensorValue >= 0 && sensorValue <= 29) {
		statusCode = 0;
	} else if (sensorValue >= 30 && sensorValue <= 44) {
		statusCode = 1;
	} else if (sensorValue >= 45 && sensorValue <= 59) {
		statusCode = 2;
	} else if (sensorValue >= 60) {
		statusCode = 3;
	}
	double tempreture = (sensorValue * 9 / 5) + 32;
	string status = (sensorValue > 25) ? "Above Average" : "Below Average";

	cout << "Temperature : " <<sensorValue <<"°C" <<" / "<< tempreture <<"°F" << endl;
	modulePanel(statusCode);
	cout << "Reading     : " << status << endl;
	return 0;
}
