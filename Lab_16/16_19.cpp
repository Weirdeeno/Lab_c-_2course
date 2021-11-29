/*19.	Введите ФИО, возраст, вес одной строкой в символьный массив и  затем в программе получите отдельные переменные и выведите их на экран. 
Используйте функции ввода-вывода языка С.*/
/**/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	char firstName[255] = { '\n' };
	char middleName[255] = { '\n' };
	char lastName[255] = { '\n' };
	unsigned int age;
	unsigned int weigth;

	printf("%s", "Введите ваше Имя Отчество Фамилию Возвраст Вес");
	scanf("%s %s %s %u %u", &firstName, &middleName, &lastName, &age, &weigth);
	cout << "Имя " << firstName << endl;
	cout << "Фамилия " << lastName << endl;
	cout << "Отчество " << middleName << endl;
	cout << "Возвраст " << age << endl;
	cout << "Вес " << weigth << endl;

	return 0;

}