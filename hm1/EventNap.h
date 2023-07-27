#pragma once
#include "IEventType.h"
class EventNap : public IEventType
{
public:
	EventNap() :IEventType("took a good nap meanwhile", 0.15, 15) {}

	int result() override;
};

