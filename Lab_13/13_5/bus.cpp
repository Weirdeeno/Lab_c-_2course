#include "bus.h"
Bus::Bus()
{
	carryingCapacity = 1000;
}


void Bus::rides()
{
	while (currentSpeed < maxSpeed)
	{
		currentSpeed++;
	}
}

void Bus::crushes()
{
	currentSpeed = 0;
}

Bus::~Bus()
{
	cout << "Сработад деструктор автобус" << endl;
}

void Bus::setCarryingCapacity(unsigned int carryingCapacity)
{
	carryingCapacity = carryingCapacity;
}
unsigned int Bus::getCarryingCapacity()
{
	return carryingCapacity;
}

void Bus::printAllDataToConsole()
{
	cout << "Модель автобуса: " << model << endl;
	cout << "Имя владельца автобуса: " << owner << endl;
	cout << "Максимальная скорость автобуса: " << maxSpeed << endl;
	cout << "Нынешняя скорость автобуса: " << currentSpeed << endl;
	cout << "Пробег автомбуса: " << carMileage << endl;
	cout << "Грузоподъемность автобуса: " << carryingCapacity << endl;
	cout << "Количество лет гарантии: " << warrantyInYears << endl;
	cout << "Была ли куплена: " << isBought << endl;

}