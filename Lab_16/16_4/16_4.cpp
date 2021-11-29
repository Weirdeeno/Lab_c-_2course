/*Используя один из ранее разработанных классов (Worker, Student … ), 
создайте в программе список объектов путем ввода данных с клавиатуры и рапечатайте его на экране в виде таблицы.*/
/**/
#include <iostream>
#include <iomanip>
#include "./Student.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	const unsigned short int quontityOfStudents = 3;
	Student students[quontityOfStudents] = {};

	//Создает объекты класса студенты с указанными пользователем параметрами
	//Ввод происходит с помощью cin
	for (unsigned short int i = 0; i < 3; i++)
	{
		unsigned short int age;
		cout << "Введите возвраст студента " << endl;
		cin >> age;
		students[i].setAge(age);

		
		char empty[25];
		cin.getline(empty, 25);
		

		char name[255];
		cout << "Введите имя студента " << endl;
		cin.getline(name, 255);
		students[i].setName(name);

		char gender[255];
		cout << "Введите пол студента" << endl;
		cin.getline(gender, 255);
		students[i].setGender(gender);

		unsigned int scolarship;
		cout << "Введите стипендию студента" << endl;
		cin >> scolarship;
		students[i].setScolarship(scolarship);
	}

	//Длины колон таблицы
	const unsigned short int firstFieldLength = 5;
	const unsigned short int secondFieldLength = 20;
	const unsigned short int thirdFieldLength = 15;
	const unsigned short int fourthFieldLength = 11;

	//Задаем оглавление таблицы
	cout.width((firstFieldLength + secondFieldLength + thirdFieldLength + fourthFieldLength));
	cout.fill('-');
	cout << "-";
	cout << endl;
	cout.width(firstFieldLength);
	cout.fill(' ');
	cout << left << "|AGE|";
	cout.width(secondFieldLength - 1);
	cout << left << "NAME" << "|";
	cout.width(thirdFieldLength - 1);
	cout << left << "GENDER" << "|";
	cout.width(fourthFieldLength - 1);
	cout << left << "SCOLARSHIP|";
	cout.width((firstFieldLength + secondFieldLength + thirdFieldLength + fourthFieldLength));
	cout.fill('-');
	cout << endl << "-" << endl;

	//Печатаем данные объектов студент в консоль
	for (unsigned short int i = 0; i < quontityOfStudents; i++)
	{
		cout.fill(' ');
		cout << "|";
		cout.width(firstFieldLength - 2);
		cout <<  left << students[i].getAge() << "|";
		cout.width(secondFieldLength - 1);
		cout << left << students[i].getName() << "|";
		cout.width(thirdFieldLength - 1);
		cout << left << students[i].getGender() << "|";
		cout.width(fourthFieldLength - 1);
		cout << left << students[i].getScolarship() << "|";

		cout.width((firstFieldLength + secondFieldLength + thirdFieldLength + fourthFieldLength));
		cout.fill('-');
		cout << endl << "-" << endl;
	}

	return 0;
}