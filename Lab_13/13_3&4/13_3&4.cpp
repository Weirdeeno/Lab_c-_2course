/*
3.	Напишите программу, в которой классы Car и Bus будут производными от класса Transport, 
а MicroBus – производным от  Car и Bus. 
Сделайте Transport абстрактным типом данных с двумя чисто виртуальными функциями. 
Классы Car и Bus не должны быть ADT. 
Проверьте программу, путем создания объектов разных типов.
4.	Модифицируйте программу п.3 так, чтобы Car был ADT,
и выведите из Car классы SportsCar, Wagon, Coupe. 
Реализуйте в классах простейшие функции.
*/

#include <iostream>
#include "Transport.h"
#include "bus.h"
#include "Car.h"
#include "SportCar.h"
#include "Wagon.h"
#include "Coupe.h"

using namespace std;

// Класс является абстрактным, если у него есть хотя бы одна виртуальная функция.

class MicroBus : public Bus, public Car
{
public:
	void rides()
	{
		Bus::rides();
	}
	void crushes()
	{
		Car::crushes();
	}
};

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	Transport* trans = new Transport();

	delete trans;

	Transport* bus = new Bus;
	bus->rides();
	bus->printAllDataToConsole();

	delete bus;

	MicroBus* mbus = new MicroBus();
	mbus->rides();


	cout << "\n\n\n";

	cout << "Нынешняя скорость миль: " << mbus->getCurrentSpeed() << endl;

	mbus->crushes();

	cout << "Скорость после аварии: " << mbus->getCurrentSpeed() << endl << endl << endl << endl;

	mbus->printAllDataToConsole();

	delete mbus;

	cout << endl << endl;

	Transport* wg = new Coupe();

	wg->printAllDataToConsole();

	delete wg;

	//Обнуляем показатели
	trans = NULL;
	bus = NULL;
	mbus = NULL;
	wg = NULL;



	return 0;
}