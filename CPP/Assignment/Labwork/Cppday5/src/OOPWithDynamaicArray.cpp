/*
 * OOPWithDynamaicArray.cpp
 *
 *  Created on: 28-Aug-2026
 *      Author: Nilesh
 */
#include<iostream>

using namespace std;

class Student{
	string name;
	int rollno;
	double marks;

public:
	student(){

	}

	student(const string& n,int r,double m){
		this->name=n;
		this->rollno=r;
		this->marks=m;
	}
public:
	const string& getName(){
		return name;
	}

	void setName(const string& name){
		this->name=name;
	}

	int getRollno()const{
		return rollno;
	}

	void setRollno(int rollno){
		this->rollno=rollno;
	}

	double getMarks(){
		return marks;
	}

	void setMarks(double marks){
		this->marks=marks;
	}

	void acceptStudentDetails();
	void displayStudentDetails()const;
};
void Student :: acceptStudentDetails(){
	string name;
	int rollno;
	double marks;

	cin>>name;
	cin>>rollno;
	cin>>marks;

	setName(name);
	setRollno(rollno);
	setMarks(marks);
}
void Student :: displayStudentDetails()const{
	cout<<"Name:"<<name <<endl;
	cout<<"Rollno:"<<rollno<<endl;
	cout<<"Marks:"<<marks<<endl;
	cout<<"========================================"<<endl;
}
int main(){

	Student *stdArr = new Student[3];

	for(int i=0;i<3;i++){
		stdArr[i].acceptStudentDetails();
	}
	for(int i=0;i<3;i++){
		stdArr[i].displayStudentDetails();
	}

	delete []stdArr;
	return 0;

}
