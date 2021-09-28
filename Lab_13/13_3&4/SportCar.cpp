#include "SportCar.h"
void SportCar::rides()
{
	while (currentSpeed <= maxSpeed)
	{
		maxSpeed += 3;
	}
}

SportCar::SportCar()
{
	carClass = 's';
}

SportCar::~SportCar()
{
	cout << "Сработал деструктор SportCar" << endl;
}

void SportCar::setClass(char carClass)
{
	carClass = carClass;
}

char SportCar::getCarClass()
{
	return carClass;
}