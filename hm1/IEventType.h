#pragma once
#include <iostream>
#include <string>
#include <ctime>

//This class store an event and its appear realisation

class IEventType abstract
{
public:
	explicit IEventType(std::string name, double chance, int consequences);
	~IEventType() {}

	bool isHappened();
	void printEvent();

	virtual int result() = 0;

	const std::string getName() { return name; }
	const double getChance() { return chance; }
	const int getConsequences() { return consequences; }

private:
	std::string name;
	double chance;
	int consequences;
	bool isHap = false;

	int maxNum();
	double minNum();
};