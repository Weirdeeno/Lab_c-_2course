/*
Напишите объявления для следующих диаграмм классов, включив в него члены-данные, 
конструкторы по умолчанию и с параметрами , методы доступа, методы ввода-вывода для клавиатуры и экрана и т.д.
*/

#include <iostream>
#include <string.h>

using namespace std;

class Student
{
    /**
     * Класс студент
     */
protected:
	unsigned int number;
	string surname;
    string gender;
    /**
     * protected - защищенное наследование, в котором
     * номер - гендерожительное целое число
     * фамилия - строковая переменная 
     * гендер - символьный тип данных
     */
public:
	Student();

	inline unsigned int getNumber()
	{
		return number;
	}
    /**
    * inline - встроенная ф-ция гендеручения номера
    * возвращает номер
    */

	inline string getSurname()
	{
		return surname;
	}
    /**
    * inline - встроенная гендеручения фамилии
    * возвращает фамилию
    */

	inline string getGender()
	{
		return gender;
	}
    /**
    * inline - встроенная ф-ция гендеручения гендера
    * возвращает гендер
    */

	inline void setNumber(unsigned int number)
	{
		number = number;
	}
    /**
    * функция типа данных void - не возвращает значение
    * указанный номер = номеру
    */

	inline void setSurname(string surname)
	{
		surname = surname;
	}
    /**
    * функция типа данных void - не возвращает значение
    * указанная фамилия = фамилии
    */

	inline void setGender(string gender)
	{
		gender = gender;
	}
    /**
    * функция типа данных void - не возвращает значение
    * указанный гендер = гендеру
    */
	
	inline void printNumberToConsole()
	{
		cout << "Номер студента: " << number << endl;
	}

	inline void printnSurnameToConsole()
	{
		cout << "Фамилия студента: " << surname << endl;
	}

	inline void printGenderToConsole()
	{
		cout << "Гендер студента: " << gender << endl;
	}

	inline void printAllDataToConsole()
	{
		printNumberToConsole();
		printnSurnameToConsole();
		printGenderToConsole();
	};
    /**
     * Встроенная ф-ция вывода номера, фамилии и гендера студента
     */

	void setDataFromConsole();
};

class ExstamuralStudent : Student
{
    /**
     * Класс заочника наследует класс студента
     */
protected:
	string job;
    string position;
    /**
     * job - строковая переменная места работы заочника
     * position - строковая переменная должности заочника
     */
public:
	ExstamuralStudent();

	inline string getJob()
	{
		return job;
	}

    inline string getPosition()
	{
		return position;
	}

	inline void setJob(string job)
	{
		job = job;
	}

    inline void setPosition(string position)
	{
		position = position;
	}

	inline void printJobToConsole()
	{
		cout << "Место работы: " << job << endl;
	}

    inline void printPositionToConsole()
	{
		cout << "Должность: " << position << endl;
	}

	inline void printAllDataToConsole()
	{
		printNumberToConsole();
		printnSurnameToConsole();
		printGenderToConsole();
		printJobToConsole();
        printPositionToConsole();
	}
    /**
     * Встроенная ф-ция вывода номера, фамилии, гендера,
     * места работы и должности
     */

	void setDataFromConsole();
};

void Student::setDataFromConsole()
{
	cout << "Введите номер студента: " << endl;
	cin >> number;
	cout << "Введите фамилию студента: " << endl;
	cin >> surname;
	cout << "Введите гендер студента: " << endl;
	cin >> gender;
}

void ExstamuralStudent::setDataFromConsole()
{
	cout << "Введите номер студента: " << endl;
	cin >> number;
	cout << "Введите фамилию студента: " << endl;
	cin >> surname;
	cout << "Введите гендер студента: " << endl;
	cin >> gender;
	cout << "Введите место работы заочника: " << endl;
	cin >> job;
    cout << "Введите должность заочника: " << endl;
	cin >> position;
}

Student::Student()
{
	number = 0;
	surname = "";
	gender = "";
}

ExstamuralStudent::ExstamuralStudent() : Student()
{
	job = "";
    position = "";
}
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	Student stud;
	stud.setDataFromConsole();
	stud.printAllDataToConsole();

	ExstamuralStudent ext;
	ext.setDataFromConsole();
	ext.printAllDataToConsole();

	return 0;
}