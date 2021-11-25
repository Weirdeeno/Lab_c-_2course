/* 4.	Измените п.3 так, как если бы функция была членом класса  Car.*/

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
