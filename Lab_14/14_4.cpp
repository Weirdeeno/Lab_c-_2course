/* 5.	Напишите  объявление массива 10 указателей п.4.*/

#include <iostream>

class Car
{
public:
	static long int convertToLong(int exmpl)
	{
		return long int(exmpl);
	}
};

using namespace std;

int main()
{
	long int(*ptrToFunc)(int) = Car::convertToLong;
	cout << ptrToFunc(10) << endl;

	return 0;
}
