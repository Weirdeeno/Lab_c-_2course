/*6.	Напишите программу в которой ФИО вводятся из текстового файла и затем выводятся на экран..*/
/**/
#include <iostream>
#include <fstream>

using std::cout;

int main()
{
	std::ifstream example("example.txt");
	char temp[255];
	example.getline(temp, 255);
	cout << temp;
	return 0;

}