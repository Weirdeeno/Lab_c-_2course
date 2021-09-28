#include "Coupe.h"
Coupe::Coupe()
{
	passagersQuontity = 4;
}

Coupe ::~Coupe()
{
	cout << "Сработал деструктор Coupe" << endl;
}

void Coupe::setPassagersQuontity(unsigned int passagersQuontity)
{
	passagersQuontity = passagersQuontity;
}

unsigned int Coupe::getPassengersQountity()
{
	return passagersQuontity;
}

void Coupe::printAllDataToConsole()
{
	Transport::printAllDataToConsole();
	cout << "Размер вагона: " << "Длина = " << length << " Ширина = " << width << " Высота = " << height << endl;
	cout << "Количество пассажиров, которые помещаются в вагон: " << passagersQuontity << endl;
}