/* 5.	Напишите  объявление массива 10 указателей п.4.*/

#include <iostream>

typedef long int(*ptrsToFunc[10])(int);

class Car
{
public:
	static long int convertToLong(int exmpl)
	{
		return long int(exmpl);
	}
};

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	// Создаем массив с 10 ячейками для функций
	ptrsToFunc pointers;

	//Присваиваем всем функциям в массиве указатели на функцию convert
	for (unsigned int i = 0; i < 10; i++)
	{
		pointers[i] = Car::convertToLong;
	}

	cout << pointers[3](15); //Обращаемя к 3 функции с аргументом 15

	return 0;
}