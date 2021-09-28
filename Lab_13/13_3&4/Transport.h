#pragma once
#include <iostream>
using namespace std;
class Transport
{
protected:
	string model;
	string owner;
	float maxSpeed;
	float currentSpeed;
	float carMileage;
	bool isBought;
	unsigned int warrantyInYears;

public:
	//Это виртуальные функции класса реализация есть только в потомках
	virtual void rides();

	void crushes();

	virtual void printAllDataToConsole();
	
	Transport();
	virtual ~Transport();

	void setModel(string model);
	void setOwner(string name);
	void setMaxSpeed(float maxSpeed);
	void setCurrentSpeed(float currentSpeed);
	void setMileage(float mileage);
	void setStatus(bool isBought);
	void setWarranty(int warrantyInYears);

	string getModel();
	string getOwner();
	float getMaxSpeed();
	float getCurrentSpeed();
	float getMileage();
	bool getStatus();
	unsigned int getYearsOfWarranty();
};