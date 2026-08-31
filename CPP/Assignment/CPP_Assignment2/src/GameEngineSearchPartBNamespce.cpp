/*
 * GameEngineSearchPartBNamespce.cpp
 *
 *  Created on: 31-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>
using namespace std;
namespace physics {
double clamp(double val, double min, double max) {
	if (val < min) {
		return min;
	}
	if (val > max) {
		return max;
	}
	return val;
}
double lerp(double a, double b, double t) {
	return a + (b - a) * t;
}
}

namespace GameMath {

int clamp(int val, int min, int max) {
	if (val < min) {
		return min;
	}
	if (val > max) {
		return max;
	}
	return val;
}

double lerp(double a, double b, double t) {
	return a + (b - a) * t;
}
}

int main() {
	double velocity;
	int health;
	double linear;
	double animation;

	velocity = physics::clamp(120.5, -100.0, 100.0);
	cout << velocity << endl;

	health = GameMath::clamp(120, 0, 100);
	cout << health << endl;

	linear = physics::lerp(10.0, 50.0, 0.5);
	cout << linear << endl;

	animation = GameMath::lerp(100.0, 200.0, 0.25);
	cout << animation << endl;

	return 0;

}
