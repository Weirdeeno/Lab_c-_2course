#pragma once
#include "Transport.h"
class Car : virtual public Transport
{
protected:
	string color;
	unsigned int quontityOfWheels;

public:
	Car();
	

	void rides();

	void crushes();



	virtual ~Car();
	

	void setColor(string color);
	void setQuontityOfWheels(unsigned int quontityOfWheels);
	string getColor();
	unsigned int getQuontityOfWheels();
};
