#pragma once
#include "Car.h"
#include "Transport.h"
class Wagon : virtual public Car
{
protected:
	unsigned int length;
	unsigned int width;
	unsigned int height;
public:

	Wagon();
	~Wagon();

	void rides();
	void setWidth(unsigned int width);
	void setLength(unsigned int length);
	void setHeight(unsigned int height);

	unsigned int getLength();
	unsigned int getWidth();
	unsigned int getHeight();
};
