#pragma once

#include <iostream>

class MyTime
{
public:
	MyTime(int y, int m, int d) { year = y; month = m; day = d; }
	~MyTime() {}

	MyTime operator ++ (int) { //postfix
		timePass();
		print();
		return *this;
	}

	//MyTime& operator ++ () { //prefix
	//	timePass();
	//	return *this;
	//}

	

private:
	int year;
	int month;
	int day;

	void timePass();

	void print();

	bool addDay();

	bool addMonth();

	void addYear();
};
