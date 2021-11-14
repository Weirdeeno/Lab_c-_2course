/* 3.	Напишите объявление указателя на функцию, возвращающую long и принимающую целое. */

#include <iostream>
using namespace std;

long int convertToLong(int);

int main()
{
	long int(*ptrToFunc)(int) = convertToLong;
	cout << ptrToFunc(9) << endl;
	return 0;
}


long int convertToLong(int exmpl)
{
	return long int(exmpl);
}