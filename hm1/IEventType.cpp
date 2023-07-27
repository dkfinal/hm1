#include "IEventType.h"

IEventType::IEventType(std::string name, double chance, int consequences){
	this->name = name;
	this->chance = chance;
	this->consequences = consequences;
}

bool IEventType::isHappened(){
	srand(clock());
	if ((double)(rand() % maxNum() + 1) >= minNum()) {
		isHap = true;
		return true;
	}
	else {
		return false;
	}
}

void IEventType::printEvent(){
	if (isHap) {
		isHap = false;
		std::cout << "Today he " << name << std::endl;
	}
}

int IEventType::maxNum(){
	return 100;
}

double IEventType::minNum(){
	return 100 - chance * 100;
}
