/*14.	Введите ФИО, возраст, вес одной строкой в символьный массив и  затем в программе получите отдельные переменные и выведите их на экран. 
Используйте классы внутреннего ввода-вывода языка С++.*/
/**/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
void split(char*, char*, unsigned int);

class Human
{
public:
	char firstName[255] = { '\n' };
	char middleName[255] = { '\n' };
	char lastName[255] = { '\n' };
	unsigned int age;
	unsigned int weigth;

	friend istream& operator >>(istream& stream, Human& human);
	friend ostream& operator << (ostream& stream, Human& human);

	char* getFirstName()
	{
		return this->firstName;
	}
};

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	Human hum;
	cin >> hum;
	cout << endl << "dvmcl " << hum.firstName << endl << endl;
	cout << hum;
	return 0;

}

void split(char* line, char* word, unsigned int wordNumber)
{
	unsigned int quontityOfSpacesNeeded = wordNumber - 1;
	unsigned int i = 0;
	while (quontityOfSpacesNeeded != 0)
	{
		if (line[i] == ' ')
		{
			quontityOfSpacesNeeded--;
		}
		i++;
	}
	unsigned int j = 0;
	while (line[i] != ' ' && line[i] != '\0')
	{
		word[j] = line[i];
		j++;
		i++;
	}
}

istream& operator >>(istream& stream, Human& human)
{
	cout << "Введите свое имя, фамилию, отчество, возвраст и вес" << endl;
	char allData[255];
	char temporal[255];
	stream.getline(allData, 255);
	split(allData, temporal, 4);
	human.age = atoi(temporal);
	split(allData, temporal, 5);
	human.weigth = atoi(temporal);
	split(allData, human.firstName, 1);
	split(allData, human.middleName, 2);
	split(allData, human.lastName, 3);
	return stream;
}

ostream& operator << (ostream& stream, Human& human)
{
	stream << "Имя " << human.getFirstName() << endl;
	stream << "Фамилия " << human.lastName << endl;
	stream << "Отчество " << human.middleName << endl;
	stream << "Возвраст " << human.age << endl;
	stream << "Вес " << human.weigth << endl;
	return stream;
}