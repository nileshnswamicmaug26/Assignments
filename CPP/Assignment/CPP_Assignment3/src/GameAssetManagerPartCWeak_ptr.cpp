/*
 * GameAssetManagerPartCWeak_ptr.cpp
 *
 *  Created on: 02-Sep-2026
 *      Author: Nilesh
 */
#include<iostream>
#include<memory>

using namespace std;

class AudioClip{
private :
	string name;
	double duration;

public:
	AudioClip(){

	}

	AudioClip(string name,double duration):name(name),duration(duration){
	}

	void setName(const string& name){
		this->name=name;
	}
	string getName()const{
		return name;
	}
	void setDuration(double duration){
		this->duration=duration;
	}
	double getDuration()const{
		return duration;
	}

	~AudioClip(){
		cout<<"Audio Clip Destructor."<<endl;
	}
};
int main(){

	auto audio = make_shared<AudioClip>("explosion",3.5);
	weak_ptr<AudioClip>observer = audio;
	if(auto clip = observer.lock())
		cout<<"Clip alive:"<<clip->getName()<<endl;
	audio.reset();
	if(observer.expired())
		cout<<"Clip already expired"<<endl;
}


