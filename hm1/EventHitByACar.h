#pragma once
#include "IEventType.h"
class EventHitByACar : public IEventType
{
public:
	EventHitByACar() : IEventType("was hitted by a car", 0.0001, -80) {}

	int result() override;
};