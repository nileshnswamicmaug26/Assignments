/*
 * OOPWithConstructor.cpp
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
	Student() {

	}

	Student(const string& n, int r, double m) {
		this->name = n;
		this->rollno = r;
		this->marks = m;
	}
public:
	const string& getName() {
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

	double getMarks() const {
		return marks;
	}

	void setMarks(double marks) {
		this->marks = marks;
	}

	~Student(){
		cout<<"destructor: "<< name <<" "<< rollno <<" "<< marks <<endl;
	}
};

int main() {

	Student s;

	s.setName("Nilesh");
	s.setRollno(121);
	s.setMarks(87.9);

	cout << "Name:" << s.getName() << endl;
	cout << "Roll no.:" << s.getRollno() << endl;
	cout << "Marks:" << s.getMarks() << endl;

	Student *s1 = new Student("Vidhyarth", 007, 98.9);

	cout << "Name:" << s1->getName() << endl;
	cout << "Roll no.:" << s1->getRollno() << endl;
	cout << "Marks:" << s1->getMarks() << endl;


	delete s1;
	return 0;
}

