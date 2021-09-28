#pragma once
#include "Transport.h"
#include "Car.h"
#include "Wagon.h"
class Coupe : virtual public Wagon, virtual public Car
{
protected:
	unsigned int passagersQuontity;

public:
	Coupe();
	
	~Coupe();

	void setPassagersQuontity(unsigned int passagersQuontity = 4);

	unsigned int getPassengersQountity();

	void printAllDataToConsole();
		 
};