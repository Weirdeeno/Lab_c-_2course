/*10.	Напишите указатель на функцию-член для доступа к приватной статической переменной п.9 и используйте его для вывода значения на экран.*/

#include <iostream>
using namespace std;

class Example
{
private:
	static int staticField;
public:
	int varField;
	Example()
	{
		staticField++;
		varField = 5;
	}

	Example(int varField)
	{
		staticField++;
		this->varField = varField;
	}

	~Example()
	{
		staticField--;
	}

	static int getStatic()
	{
		return Example::staticField;
	}
};

// Выделяем память для статичного члена-поля(Data-field) класса Example и инициализируем его
int Example::staticField = 0;

void printStaticAndVarFields(Example*);
int (*getStatic)() = Example::getStatic;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	Example* ex1 = new Example(1);
	printStaticAndVarFields(ex1);

	Example* ex2 = new Example(2);
	printStaticAndVarFields(ex2);

	Example* ex3 = new Example(6);
	printStaticAndVarFields(ex3);

	//Чистим память, обнуляем указатели
	delete ex1;
	ex1 = NULL;
	cout << "Значение статической переменной после удаления объекта:" << getStatic() << endl;

	delete ex2;
	ex2 = NULL;
	cout << "Значение статической переменной после удаления объекта: " << getStatic() << endl;

	delete ex3;
	ex3 = NULL;
	cout << "Значение статической переменной после удаления объекта: " << getStatic() << endl;


	return 0;
}

void printStaticAndVarFields(Example* ex)
{
	cout << "Значение статичной переменной: " << getStatic() << endl;
	cout << "Значение динамичной переменной: " << (*ex).varField << endl;
}