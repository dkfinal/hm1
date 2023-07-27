#pragma once
#include <iostream>
#include <vector>
#include "IEventType.h"

class Character
{
public:
	Character(std::string name, std::string job, int age, int height, int weight, int cash, std::vector<IEventType*>* events);
	~Character() {}

	Character operator ++ (int) {
		live();
		return *this;
	}



private:
	bool isDead = false;

	std::string name;
	std::string job;
	int age;
	int height;
	int weight;
	int cash;
	int health = 100;

	std::string deathReason = "";

	std::vector<IEventType*> *events;

	void live();
	void print();
	void rndEvent();
};

