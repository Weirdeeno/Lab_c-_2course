#pragma once
#include "Transport.h"
class Bus : virtual public Transport
{
protected:
	unsigned int carryingCapacity;

public:
	Bus();
	void rides();

	void crushes();

	~Bus();
	void setCarryingCapacity(unsigned int carryingCapacity);
	unsigned int getCarryingCapacity();
	
	void printAllDataToConsole();
	

};