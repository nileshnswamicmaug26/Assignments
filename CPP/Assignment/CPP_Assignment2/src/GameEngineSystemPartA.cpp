/*
 * GameEngineSystemPartA.cpp
 *
 *  Created on: 31-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>

using namespace std;

class Entity {
private:
	string name;
	int health;
	int level;
	string type;

public:
	Entity() {

	}
	Entity(string name, int health, int level, string type) {
		this->name = name;
		this->health = health;
		this->level = level;
		this->type = type;
	}

	string getName() {
		return name;
	}
	Entity& setName(const string &name) {
		this->name = name;
		return *this;
	}

	int getHealth() const {
		return health;
	}

	Entity& setHealth(int health) {
		this->health = health;
		return *this;
	}

	int getLevel() {
		return level;
	}

	Entity& setLevel(int level) {
		this->level = level;
		return *this;
	}

	string getType() const {
		return type;
	}

	Entity& setType(const string &type) {
		this->type = type;
		return *this;
	}
};

int main() {

	Entity player;
	Entity enemy;
	Entity item;

	player.setName("Aragorn").setHealth(100).setLevel(10).setType("Player");
	cout<<player.getName()<<" "<<player.getHealth() <<" "<<player.getLevel()<<" "<<player.getType()<<endl;

	enemy.setName("Orc").setHealth(60).setLevel(5).setType("Enemy");
	cout<<enemy.getName()<<" "<<enemy.getHealth() <<" "<<enemy.getLevel()<<" "<<enemy.getType()<<endl;

	item.setName("HealthPotion").setHealth(0).setLevel(1).setType("Item");
	cout<<item.getName()<<" "<<item.getHealth() <<" "<<item.getLevel()<<" "<<item.getType()<<endl;


}
