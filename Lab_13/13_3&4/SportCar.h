#pragma once
#include "Transport.h"
#include "Car.h"
class SportCar : virtual public Car
{
protected:
	char carClass;
public:
	void rides();

	SportCar();
	
	~SportCar();
	
	void setClass(char carClass);

	char getCarClass();
	
};
