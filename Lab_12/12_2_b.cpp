/*
Напишите объявления для следующих диаграмм классов, включив в него члены-данные, 
конструкторы по умолчанию и с параметрами , методы доступа, методы ввода-вывода для клавиатуры и экрана и т.д.
*/

#include <iostream>
#include <string.h>

using namespace std;

class Transport
{
protected:
	unsigned int number;
	unsigned int year;
    string brand;
public:
	Transport();

	inline unsigned int getNumber()
	{
		return number;
	}

	inline string getYear()
	{
		return year;
	}

	inline string getBrand()
	{
		return brand;
	}

	inline void setNumber(unsigned int number)
	{
		number = number;
	}

	inline void setYear(unsigned int year)
	{
		year = year;
	}

	inline void setBrand(string brand)
	{
		brand = brand;
	}
	
	inline void printNumberToConsole()
	{
		cout << "Номер транспорта: " << number << endl;
	}

	inline void printnYearToConsole()
	{
		cout << "Год выпуска: " << year << endl;
	}

	inline void printBrandToConsole()
	{
		cout << "Марка транспорта: " << brand << endl;
	}

	inline void printAllDataToConsole()
	{
		printNumberToConsole();
		printnYearToConsole();
		printBrandToConsole();
	};
	void setDataFromConsole();
};

class Car : Transport
{

protected:
	unsigned int maxspeed;
public:
	Car();

	inline unsigned int getMaxSpeed()
	{
		return maxspeed;
	}

	inline void setMaxSpeed(unsigned int maxspeed)
	{
		maxspeed = maxspeed;
	}

	inline void printMaxSpeedToConsole()
	{
		cout << "Максимальная скорость автомобиля: " << maxspeed << endl;
	}


	inline void printAllDataToConsole()
	{
		printNumberToConsole();
		printnYearToConsole();
		printBrandToConsole();
		printMaxSpeedToConsole();
	}

	void setDataFromConsole();
};

class Bus : Transport
{

protected:
	unsigned int seats;
public:
	Bus();

	inline unsigned int getSeats()
	{
		return seats;
	}

	inline void setSeatsSpeed(unsigned int seats)
	{
		seats = seats;
	}

	inline void printSeatsToConsole()
	{
		cout << "Число посадочных мест: " << seats << endl;
	}


	inline void printAllDataToConsole()
	{
		printNumberToConsole();
		printnYearToConsole();
		printBrandToConsole();
		printSeatsToConsole();
	}

	void setDataFromConsole();
};

void Transport::setDataFromConsole()
{
	cout << "Введите номер транспорта: " << endl;
	cin >> number;
	cout << "Введите год выпуска: " << endl;
	cin >> year;
	cout << "Введите марку: " << endl;
	cin >> brand;
}

void Car::setDataFromConsole()
{
	cout << "Введите номер транспорта: " << endl;
	cin >> number;
	cout << "Введите год выпуска: " << endl;
	cin >> year;
	cout << "Введите марку: " << endl;
	cin >> brand;
	cout << "Введите максимальную скорость: " << endl;
	cin >> maxspeed;
}

void Bus::setDataFromConsole()
{
	cout << "Введите номер транспорта: " << endl;
	cin >> number;
	cout << "Введите год выпуска: " << endl;
	cin >> year;
	cout << "Введите гендер студента: " << endl;
	cin >> brand;
    cout << "Введите число посадочных мест: " << endl;
	cin >> seats;
}

Transport::Transport()
{
	number = 0;
	year = 0;
	brand = "";
}

Car::Car() : Transport()
{
	maxspeed = 0;
}

Bus::Bus() : Transport()
{
	seats = 0;
}

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	Transport transport;
	transport.setDataFromConsole();
	transport.printAllDataToConsole();

	Car car;
	car.setDataFromConsole();
	car.printAllDataToConsole();

    Bus bus;
	bus.setDataFromConsole();
	bus.printAllDataToConsole();

	return 0;
}