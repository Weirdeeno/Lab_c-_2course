#include "Wagon.h"
Wagon::Wagon()
{
	length = 5;
	width = 4;
	height = 2;
}

Wagon::~Wagon()
{
	cout << "Сработал деструктор Wagon " << endl;
}

void Wagon::rides()
{
	while (currentSpeed <= maxSpeed)
	{
		maxSpeed += 0.4;
	}
}

void Wagon::setLength(unsigned int length)
{
	length = length;
}
void Wagon::setWidth(unsigned int width)
{
	width = width;
}
void Wagon::setHeight(unsigned int height)
{
	height = height;
}

unsigned int Wagon::getLength()
{
	return length;
}
unsigned int Wagon::getWidth()
{
	return width;
}
unsigned int Wagon::getHeight()
{
	return height;
}