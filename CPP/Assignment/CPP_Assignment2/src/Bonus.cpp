/*
 * Bonus.cpp
 *
 *  Created on: 01-Sep-2026
 *      Author: Nilesh
 */


#include<iostream>

using namespace std;

int level =1;

namespace Engine::audio{
	void playSound(string name){
		cout<<"Playing : "<<name<<endl;
	}
}
int main(){
	int level = 2;

	cout<<"player level : "<<level<<endl;
	cout<<"game difficulty level : "<<::level<<endl;

	Engine::audio::playSound("sword_clash");

	return 0;
}

