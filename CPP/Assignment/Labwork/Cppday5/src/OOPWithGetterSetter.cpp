/*
 * OOPWithGetterSetter.cpp
 *
 *  Created on: 28-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>

using namespace std;

class Student {

	string name;
	int rollno;
	double marks;

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
};
void displayDetails(Student s) {
	cout << "Name:" << s.getName() << endl;
	cout << "Rollno:" << s.getRollno() << endl;
	cout << "Marks:" << s.getMarks() << endl;
	cout<<"================================="<<endl;
}
int main() {

	Student s;  // object create in stack
	Student *s1 = new Student(); // object create in heap.
//	s.acceptDetails();

	s.setName("Nilesh");
	s.setRollno(121);
	s.setMarks(87.9);

	displayDetails(s);

	cout << "Name:" << s.getName() << endl;
	cout << "Rollno:" << s.getRollno() << endl;
	cout << "Marks:" << s.getMarks() << endl;

	cout << "Memory occupied : " << sizeof(s) << endl;

	return 0;
}

