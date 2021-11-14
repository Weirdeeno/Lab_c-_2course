/*7.	Напишите небольшую программу с объявлением класса, имеющего одну переменную-член  и одну статическую переменную-член. Пусть конструктор инициализирует переменную-член и инкрементирует статическую переменную член, а деструктор – декрементирует ее.
8.	Напишите драйвер к п.7, в котором создается три объекта и на экран выводятся значения обычной и статической переменных членов класса. Уничтожьте эти объекты и проследите как будет меняться значение статической переменной члена.
*/

#include <iostream>
using namespace std;

class Example
{
public:
	static int staticField;
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
};

/*Выделяем память для статичного члена-поля(Data-field) класса Example и инициализируем его*/
int Example::staticField = 0;

void printStaticAndVarFields(Example*);

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	Example* ex1 = new Example(1);
	printStaticAndVarFields(ex1);

	Example* ex2 = new Example(4);
	printStaticAndVarFields(ex2);

	Example* ex3 = new Example(9);
	printStaticAndVarFields(ex3);


	//Чистим память, обнуляем указатели
	delete ex1;
	ex1 = NULL;
	cout << "Значение статической переменной после удаления объекта: " << Example::staticField << endl;

	delete ex2;
	ex2 = NULL;
	cout << "Значение статической переменной после удаления объекта: " << Example::staticField << endl;

	delete ex3;
	ex3 = NULL;
	cout << "Значение статической переменной после удаления объекта: " << Example::staticField << endl;


	return 0;
}

void printStaticAndVarFields(Example* ex)
{
	cout << "Значение статичной переменной: " << Example::staticField << endl;
	cout << "Значение динамичной переменной: " << (*ex).varField << endl;
}