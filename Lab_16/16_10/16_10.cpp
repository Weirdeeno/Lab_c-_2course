/*10.	Напишите программу, считывающую и распечатывающую двоичный файл, созданный в п.5 . Переменную для чтения объекта определить в стеке (свободной памяти).*/
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


	char path[255] = "./example.txt";
	//открываем файл в бинарном режиме чтения и записи
	f = fopen(path, "ab+");
	//Записываем в файл несколько копий объекта
	for (unsigned int i = 0; i < 3; i++)
	{
		fwrite(&ex, sizeof(Example), 1, f);
	}
	//отступаем один объект в файле
	fseek(f, sizeof(Example), SEEK_SET);
	//Сохдаем новый не инициализированный объект
	Example ex2;
	//Читаем данные из файла
	fread(&ex2, sizeof(Example), 1, f);
	cout << ex2.firstField << endl << ex2.secondField << endl << ex2.thirdField << endl << ex2.fourthField;

	fclose(f); // закрываем файл
	delete f;
	f = NULL;
	return 0;
}