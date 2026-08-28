/*
 * SensorRecalibration.cpp
 *
 *  Created on: 29-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>

using namespace std;

void resetSensorPairv1(int reading1,int reading2){
	cout<<"------V1: Call by Value------"<<endl;
	cout<<"Before : A="<<reading1<<" B="<<reading2<<endl;
	reading1 = reading1+reading2;
	reading2 = reading1-reading2;
	reading1 = reading1-reading2;
}
void resetSensorPairv2(int &reading1,int &reading2){
	cout<<"------V2: Call by Refrence------"<<endl;
	cout<<"Before : A="<<reading1<<" B="<<reading2<<endl;
	reading1 = reading1+reading2;
	reading2 = reading1-reading2;
	reading1 = reading1-reading2;
}
void resetSensorPairv3(int *reading1,int *reading2){
	cout<<"------V3: Call by Pointer------"<<endl;
	cout<<"Before : A="<<*reading1<<" B="<<*reading2<<endl;
	*reading1 = *reading1+*reading2;
	*reading2 = *reading1-*reading2;
	*reading1 = *reading1-*reading2;
}

int main(){

	int reading1;
	int reading2;

	cout<<"Enter first reading:"<<endl;
	cin>>reading1;

	cout<<"Enter second reding:"<<endl;
	cin>>reading2;

	resetSensorPairv1(reading1,reading2);
	cout<<"After : A="<<reading1<<" B="<<reading2<<"   <------value unchanged"<<endl;

	resetSensorPairv2(reading1,reading2);
	cout<<"After : A="<<reading1<<" B="<<reading2<<"   <------values swapped"<<endl;

	resetSensorPairv3(&reading1,&reading2);
	cout<<"After : A="<<reading1<<" B="<<reading2<<"   <------values swapped back"<<endl;
	return 0;
}


