#include "Car.h"
Car::Car()
{
    color = "white";
    quontityOfWheels = 4;
}

void Car::rides()
{
    while (currentSpeed < maxSpeed)
    {
        currentSpeed += 2;
    }
}
void Car::crushes()
{
    currentSpeed = 0;
}

Car::~Car()
{
    cout << "Сработал деструктор Car" << endl;
}

void Car::setColor(string color)
{
    color = color;
}
void Car::setQuontityOfWheels(unsigned int quontityOfWheels)
{
    quontityOfWheels = quontityOfWheels;
}
string Car::getColor()
{
    return color;
}
unsigned int Car::getQuontityOfWheels()
{
    return quontityOfWheels;
}