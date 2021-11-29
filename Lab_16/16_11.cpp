/*11.	Используйте любой ранее разработанный класс. Напишите в нем :
a)	операторы для стандартного ввода-вывода (экран и клавиатура);
b)	специализированные методы для последовательного текстового и бинарного ввода-вывода объектов;  
c)	специализированные методы для прямого бинарного ввода-вывода объектов;  */
/**/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <ostream>

using namespace std;

class Example 
{
public:
	int firstField;
	int secondField;
	float thirdField;
	char fourthField[255];
	static unsigned int bytesRead;
	static unsigned int bytesWritten;

    //специализированные методы для прямого бинарного ввода-вывода объектов 
	void readBinFileDirect(char path[255], unsigned int byteToStateFrom = 0)
	{
		if (path[0] == '\0')
		{
			strcpy(path, "./example.txt");
		}
		FILE* f = fopen(path, "ab+");
		fseek(f, byteToStateFrom, SEEK_SET);
		fread(this, sizeof(Example), 1, f);
		fclose(f);

	
		f = NULL;
	}

	void writeToBinFileDirect(char path[255], unsigned int byteToStateFrom = 0)
	{
		if (path[0] == '\0')
		{
			strcpy(path, "./example.txt");
		}
		FILE* f = fopen(path, "ab+");
		fseek(f, byteToStateFrom, SEEK_SET);
		fwrite(this, sizeof(Example), 1, f);
		fclose(f);

	
		f = NULL;
	}

    // специализированные методы для последовательного текстового и бинарного ввода-вывода объектов
	void readBinFileSuccessily(char path[255])
	{
		if (path[0] == '\0')
		{
			strcpy(path, "./example.txt");
		}
		FILE* f = fopen(path, "ab+");
		fseek(f, Example::bytesRead, SEEK_SET);
		fread(this, sizeof(Example), 1, f);
		Example::bytesRead += 4;
		fclose(f);


		f = NULL;
	}
	void writeToBinFileSuccesily(char path[255])
	{
		if (path[0] == '\0')
		{
			strcpy(path, "./example.txt");
		}
		FILE* f = fopen(path, "ab+");
		fseek(f, Example::bytesWritten, SEEK_SET);
		fwrite(this, sizeof(Example), 1, f);
		Example::bytesWritten += 4;
		fclose(f);

	
		f = NULL;
	}

	friend ostream& operator <<(ostream&, Example&);
	friend istream& operator >>(istream&, Example&);
};

unsigned int Example::bytesRead = 0;
unsigned int Example::bytesWritten = 0;

int main()
{
	//Создадим объект example
	Example ex;
	//Присвоим полям значения
	ex.firstField = 1;
	ex.secondField = 2;
	ex.thirdField = 3;
	strcpy(ex.fourthField, "something");

	//Путь по которому будет содаваться файл
	char mPath[255] = "./Exam.txt";
	//Пишет объект в файл
	ex.writeToBinFileDirect(mPath);
	//Считывает объект из файла
	ex.readBinFileDirect(mPath);
	//Если б было что-то неправильно входной объект несоответствовал бы выходному
	cout << ex << endl;

	Example* ex2 = new Example();
	char mPath2[255] = "./Example.txt";
	ex2->readBinFileSuccessily(mPath);
	ex2->writeToBinFileSuccesily(mPath2);

	cout << endl << endl << *ex2;

	return 0;
}

ostream& operator << (ostream& stream, Example& example)
{
	stream << "First field: " << example.firstField << endl;
	stream << "Second Field: " << example.secondField << endl;
	stream << "Third Field: " << example.thirdField << endl;
	stream << "Fourth Field: " << example.fourthField << endl;
	return stream;
}
istream& operator >> (istream& stream, Example& example)
{
	cout << "Введите первое поле " << endl;
	stream >> example.firstField;
	cout << "Введите втоорое поле " << endl;
	stream >> example.secondField;
	cout << "Введите третье поле " << endl;
	stream >> example.thirdField;
	cout << "Введите четвертое поле";
	stream >> example.fourthField;

	return stream;
}