/*
 * SignalProcessingPipeling.cpp
 *
 *  Created on: 29-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>
#include<iterator>

using namespace std;

void normalized(double *signal, int n) {

	double maxValue = 0.0;

	for (int i = 0; i < n; i++) {
		if (abs(signal[i]) > maxValue) {
			maxValue = abs(signal[i]);
		}
	}
	if (maxValue > 0.0) {
		for (int i = 0; i < n; i++) {
			signal[i] = signal[i] / maxValue;
		}
	}
	cout << "Normalized array:" << endl;
	for (int i = 0; i < n; i++) {
		cout << signal[i] << " ";
	}
	cout << endl;
}

void applyGain(double *signal, int n, double gainFactor) {

	for (int i = 0; i < n; i++) {
		*(signal + i) = *(signal + i) * gainFactor;
	}
	for (int i = 0; i < n; i++) {
		cout << signal[i] << " ";
	}
}
double computeRMS(double *signal, int n) {

	double sumofsquare = 0.0;
	double sqrt = 0.0;
	for (int i = 0; i < n; i++) {
		sumofsquare = signal[i] * signal[i];
	}
	cout << endl;
	return sqrt = (sumofsquare) / n;
}
int countZeroCrossings(double *signal, int n){

	int count=0;
	for(int i=0;i<n-1;i++){
		if(signal[i]*signal[i+1]<0){
			count++;
		}
	}
	cout<<endl;
	return count;
}
int main() {

	double signal[] = { 0.5, -1.2, 0.8, -0.3, 1.0, -0.9, 0.1 };
	int n = size(signal);

	cout << "before calling normalise() and applyGain()" << endl;
	for (int i = 0; i < n; i++) {
		cout << signal[i] << " ";
	}
	cout << endl;
	double gainFactor = 2.0;

	normalized(signal, n);

	applyGain(signal, n, gainFactor);

	double sqrt = computeRMS(signal, n);
	cout << "sqrt = " << sqrt << endl;

	int count = countZeroCrossings(signal,n);
	cout << "Number of opposite posision "<<count<<endl;

	return 0;
}

