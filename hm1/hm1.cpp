#include <iostream>
#include <conio.h>
#include <vector>
#include "MyTime.h"
#include "Character.h"
#include "EventsArchive.h"


int main(){
	std::cout << "Let's Start!\n";
	std::cout << "Hit \"q\" to finish this game\n";
	std::cout << "You can press or hold any key to continue\n";
	std::cout << "Enjoy 2 random events with different chances to happen\n";

	MyTime t(2008, 3, 12);
	std::vector<IEventType*> events;
	events.emplace_back(new EventHitByACar);
	events.emplace_back(new EventNap);
	Character g("Gorge", "Cardiac surgeon", 29, 177, 70, 1000, &events);

	while (_getch() != 'q') {
		t++;
		g++;
	}
	return 0;
}