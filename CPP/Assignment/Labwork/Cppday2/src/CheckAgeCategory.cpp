#include<iostream>

using namespace std;

int checkAgeCategory(int age){

	if(age<18){
		cout << "You are Minor" <<endl;
	}else if(age>=18 && age<60){
		cout << "You are Adult" <<endl;
	}else{
		cout << "You are Senior citizen" <<endl;
	}
	return 0;
}

int main(){

	int age;

	cout << "Enter your age: " <<endl;

	cin >> age;

	checkAgeCategory(age);

	return 0;
}
