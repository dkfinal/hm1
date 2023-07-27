#include "Character.h"

Character::Character(std::string name, std::string job, int age, int height, int weight, int cash, std::vector<IEventType*>* events) {
	this->name = name;
	this->job = job;
	this->age = age;
	this->height = height;
	this->weight = weight;
	this->cash = cash;
	this->events = events;
}

void Character::live() {
	if (!isDead) {
		rndEvent();
		print();

	}
	else {
		std::cout << "-------------------------------------------------------------------------------------------" << std::endl;
		std::cout << "The " + name + " is dead." << std::endl;
		std::cout << "He was " + deathReason + ". Rest in peace poor " + name << std::endl;
		std::cout << "-------------------------------------------------------------------------------------------" << std::endl;
	}
}

void Character::print() {
	std::cout << name << std::endl;
	std::cout << health << std::endl;
}

void Character::rndEvent() {
	for (auto it = events->begin(); it < events->end(); ++it) {
		if ((*it)->isHappened()) {
			health += (*it)->result();
			(*it)->printEvent();
		}
	}
}