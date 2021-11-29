/*9.	Используйте  любой ранее разработанный класс. 
Напишите программу, создающую в цикле несколько объектов этого класса в стеке (свободной памяти). Запишите этот объекты в двоичный файл.*/
/**/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // подключаем функции для работы с файлами
#include <iostream>

using namespace std;

class Example // в файл будем записывать пакеты
{
public:
	int firstField;
	int secondField;
	float thirdField;
	char fourthField[255];
};

int main()
{
	Example ex; // пакет
	FILE* f; // переменная для работы с файлом
	int i; // счётчик

	//присваиваем значения объекту ex
	ex.firstField = 2;
	ex.secondField = 0;
	ex.thirdField = 89.324;
	strcpy_s(ex.fourthField, "some text");

	//открываем файл в бинарном режиме чтения и записи
	f = fopen("./example.txt", "ab+");
	//Записываем в файл несколько копий объекта
	for (unsigned int i = 0; i < 3; i++)
	{
		fwrite(&ex, sizeof(Example), 1, f);
	}

	fclose(f); // закрываем файл
	return 0;
}