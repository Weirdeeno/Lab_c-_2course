/*15.	Напишите программу, которая выводит аргументы командной строки в обратном порядке и не выводит имя программы.*/
/**/

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	for (unsigned int i = argc - 1; i > 0; --i)
	{
		cout << argv[i] << endl; //Аргументы коммандной строки заданы в отладчике и равны arg1, arg2, arg3
	}
}
