/*8.	Возьмите небольшой класс из предыдущих упражнений. 
Обязательно включите в его состав дружественные операции извлечения и вставки в поток. 
Напишите программу, создающую 2 объекта этого класса (в стеке и в свободной памяти). 
Значения членов-данных этих объектов  введите с клавиатуры оператором извлечения. 
Распечатайте содержимое этих объектов оператором вставки.*/
/**/

#include <iostream>
#include "./Student.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	Student stud1(20, "Женский", "Ольга", 1200);
	Student* stud2 = new Student(19, "Мужской", "Антон", 1500);

	cout << stud1 << endl;
	cout << *stud2 << endl;

	cin >> stud1;
	cin >> *stud2;

	cout << stud1 << endl;
	cout << *stud2 << endl;

	delete stud2;
	stud2 = NULL;

	return 0;
}