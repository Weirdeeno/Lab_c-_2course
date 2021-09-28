#include "Transport.h"
#include <iostream>
using namespace std;

	//Это виртуальные функции класса реализация есть только в потомках
 void Transport::rides()
	{

	}

	void Transport::crushes()
	{

	}

void Transport::printAllDataToConsole()
	{

	}

Transport::Transport()
	{
		model = "";
		owner = "";
		maxSpeed = 100;
		currentSpeed = 0;
		carMileage = 2;
		isBought = false;
		warrantyInYears = 1;
	}

Transport::~Transport()
	{
		cout << "Сработал деструктор Transport" << endl;
	}

	void Transport::setModel(string model)
	{
		model = model;
	}
	void Transport::setOwner(string name)
	{
		owner = name;
	}
	void Transport::setMaxSpeed(float maxSpeed) {
		maxSpeed = maxSpeed;
	}
	void Transport::setCurrentSpeed(float currentSpeed)
	{
		currentSpeed = currentSpeed;
	}
	void Transport::setMileage(float mileage)
	{
		carMileage = mileage;
	}
	void Transport::setStatus(bool isBought)
	{
		isBought = isBought;
	}
	void Transport::setWarranty(int warrantyInYears)
	{
		warrantyInYears = warrantyInYears;
	}

	string Transport::getModel()
	{
		return model;
	}
	string Transport::getOwner()
	{
		return owner;
	}
	float Transport::getMaxSpeed()
	{
		return maxSpeed;
	}
	float Transport::getCurrentSpeed()
	{
		return currentSpeed;
	}
	float Transport::getMileage()
	{
		return carMileage;
	}
	bool Transport::getStatus()
	{
		return isBought;
	}
	unsigned int Transport::getYearsOfWarranty()
	{
		return warrantyInYears;
	}