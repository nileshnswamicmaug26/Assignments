/*
 * DronNavigationUtilities.cpp
 *
 *  Created on: 29-Aug-2026
 *      Author: Nilesh
 */
#include<iostream>
#include<cmath>

using namespace std;

inline double distanceBetween(double x1, double y1, double x2, double y2) {
	double sqrt = (pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return sqrt;
}
inline double toRadians(double degrees) {
	return degrees * (M_PI / 18.0);
}

inline double clamp(double value, double minVal, double maxVal) {
	if (value < minVal) {
		return minVal;
	}
	if (value > maxVal) {
		return maxVal;
	}
	return value;
}
inline bool isInSafeZone(double x, double y, double cx, double cy,
		double radius){
	double distance = distanceBetween(x,y,cx,cy);
	return distance<=radius;
}
int main() {

	double homePosition1 = 0.0;
	double homePosition2 = 0.0;

	double safeZone_Radius = 50.0;

	double waypoint1a;
	double waypoint1b;
	double waypoint2a;
	double waypoint2b;
	double waypoint3a;
	double waypoint3b;

	cout << "enter waypoint1 values" << endl;
	cin >> waypoint1a;
	cin >> waypoint1b;
	cout << "enter waypoint2 values" << endl;
	cin >> waypoint2a;
	cin >> waypoint2b;
	cout << "enter waypoint3 values" << endl;
	cin >> waypoint3a;
	cin >> waypoint3b;

	double distance1 = distanceBetween(homePosition1,waypoint1a,homePosition2,waypoint1b);
	double distance2 = distanceBetween(homePosition1,waypoint2a,homePosition2,waypoint2b);
	double distance3 = distanceBetween(homePosition1,waypoint3a,homePosition2,waypoint3b);


	cout << "waypoint 1:"<< "( "<<waypoint1a<<","<< waypoint1b<<" )"<<endl;
	cout << "Distance from home:" <<distance1<< endl;
	cout << "safe zone: "
			<<(isInSafeZone(homePosition1,waypoint1a,homePosition2,waypoint1b,safeZone_Radius)?"yes":"no")<<endl;
	cout<<endl;
	cout << "waypoint 2:"<< "( "<<waypoint2a<<","<< waypoint2b<<" )"<<endl;
	cout << "Distance2:" <<distance2<< endl;
	cout << "safe zone: "<<
			(isInSafeZone(homePosition1,waypoint2a,homePosition2,waypoint2b,safeZone_Radius)?"yes":"no")<<endl;
	cout<<endl;
	cout << "waypoint 3:"<< "( "<<waypoint3a<<","<< waypoint3b<<" )"<<endl;
	cout << "Distance3:" <<distance3<< endl;
	cout << "safe zone: "
			<<(isInSafeZone(homePosition1,waypoint3a,
					homePosition2,waypoint3b,safeZone_Radius)? "yes":"no")
			<<endl;
	cout<<endl;
	cout << "Radian:" << toRadians(distance1) << endl;
	cout<<endl;
	cout << "clamp:" << clamp(distance1, distance2,distance3) << endl;
	return 0;
}

