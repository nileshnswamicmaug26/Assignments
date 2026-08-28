/*
 * SensorLogBuffer.cpp
 *
 *  Created on: 27-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>
#include<cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>

using namespace std;

int main() {

	int nthReading;
	int error = 0;
	int index = 0;

	double criticalIndex;
	cout << "Enter readings." << endl;
	cin >> nthReading;
	double readings[nthReading];
	double min = 0;
	double max = 0;
	double sum=0.0;
	bool firstValidReading = true;
	cout << "Enter temperature value." << endl;

	for (int i = 0; i < nthReading; i++) {
		cin >> readings[i];
	}
	cout << "Reading entered   : " << nthReading << endl;
	cout << "Valid reading     : ";
	cout << fixed << setprecision(1);
	for (int i = 0; i < nthReading; i++) {
		if (readings[i] <= 0) {
			error++;
			continue;
		} else {
			if (firstValidReading) {
				min = readings[i];
				max = readings[i];
				firstValidReading = false;
			} else {
				if (readings[i] < min) {
					min = readings[i];
				}
				if (readings[i] > max) {
					max = readings[i];
				}
			}
			sum=sum+readings[i];
			printf("%.1f ",readings[i]) ;
		}

	}
	cout << endl;
	for (int i = 0; i < nthReading; i++) {

		if (readings[i] > 45.0) {
			index = i;
			criticalIndex = readings[i];
			break;
		}

	}
	cout << "Skipped (errors)  :" << error << endl;
	cout << "First CRITICAL    :" << "Index " << index << " -> "
			<< criticalIndex << "°C" << endl;

	double avg = sum / (nthReading - error);

	cout<< "min : "<< min<<"°C "<< "max : "<<max<<"°C "
			<<"Avg : "<< avg <<"°C "<<endl;

	int normal=0;
	int warning=0;
	int critical=0;
	int shutdown=0;
	for(int i=0;i<nthReading;i++){
		if(readings[i]<0){
			shutdown;
		}else if(readings[i]>0&&readings[i]<=10.0){
			normal++;
		}else if(readings[i]>10.0&&readings[i]<45.0){
			warning++;
		}else if(readings[i]>45.0){
			critical++;
		}
	}
	printf("normal : %.1f warning : %.1f critical : %.1f shutdown: %.1f\n", normal, warning, critical, shutdown);
}

