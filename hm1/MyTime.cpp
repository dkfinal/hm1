#include "MyTime.h"

void MyTime::timePass() {
	if (addDay()) {
		if (addMonth()) {
			addYear();
		}
	}
}

void MyTime::print() {
	std::cout << "Date: " << day << "." << month << "." << year << std::endl;
}

bool MyTime::addDay() {
	if (day < 30) {
		day += 1;
		return false;
	}
	else {
		day = 1;
		return true;
	}
}

bool MyTime::addMonth() {
	if (month < 12) {
		month += 1;
		return false;
	}
	else {
		month = 1;
		return true;
	}
}

void MyTime::addYear() {
	year += 1;
}
