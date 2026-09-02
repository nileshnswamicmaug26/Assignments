/*
 * OOPWithConstructorList.cpp
 *
 *  Created on: 28-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>

using namespace std;

class Student {
private:
	string name;
	int rollno;
	double marks;
	const string course;
public:
	Student(): course(""){
		cout << "No parameterized."<<endl;
	}
	Student(const string &n, int r, double m, const string &c) :
			name(n), rollno(r), marks(m), course(c) {

	}
public:
	double getMarks() const {
		return marks;
	}

	void setMarks(double marks) {
		this->marks = marks;
	}

	const string& getName() const {
		return name;
	}

	void setName(const string &name) {
		this->name = name;
	}

	int getRollno() const {
		return rollno;
	}

	void setRollno(int rollno) {
		this->rollno = rollno;
	}
	const string& getCourse() const {
		return course;
	}

//	void setCourse(const string &course) {
//		this->course = course;
//	}
	void acceptDetails() {
		string course;
		cin >> name;
		cin >> rollno;
		cin >> marks;
		cin >> course;
	}

	void displayDetails() {
		cout << "Name:" << name << endl;
		cout << "Rollno:" << rollno << endl;
		cout << "Marks:" << marks << endl;
		cout << "Course:" << course << endl;
		cout << "========================================" << endl;
	}
};
int main() {

	Student *s = new Student("Vidhart",121,89.9,"AI");
	s->displayDetails();
	Student *str = new Student[3];

//	for (int i = 0; i < 3; i++) {
//		str[i].acceptDetails();
//	}
//	for (int i = 0; i < 3; i++) {
//		str[i].displayDetails();
//	}

	return 0;
}

