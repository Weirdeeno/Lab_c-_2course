/*7.	Измените программы п.1 и п.2 на циклические.*/
/**/
#include <iostream>

using namespace std;

int main()
{
	unsigned short int i = 0;
	do {
		setlocale(LC_ALL, "RUSSIAN");
		char fullName[255];
		cout << "Введите свое имя " << endl;
		cin.getline(fullName, 255);
		cout << "Ваше имя " << fullName << endl;
		i++;
	} while ( i < 4);

	do 
	{
		setlocale(LC_ALL, "RUSSIAN");

		cout << "cout сработал " << endl;
		cerr << "cerr: произошла ошибка " << endl;
		clog << "clog: вот мой лог " << endl;

		int a;
		cin >> a;

	} while (i < 8);

	return 0;
}