/*2.	Напишите функции-шаблоны  для : 
•	удваивания значения объекта любого типов;
•	обмена значений двух объектов любых типов;
•	определения большего из значений двух объектов любых типов;
•	сравнения значений двух объектов любых типов.
*/

#include <iostream>
#include <functional>
template <typename T>


int main() {
	double a = 5, b = 6;
	swap(a, b);
	std::wcout << (a, b) << std::endl;

	std::wcout << Double(a, [&](std::any x) << std::endl;
		{
			return x * 2;
		} 

	std::wcout << Max(a, b, [&](x, y) << std::endl;
		{
			return x > y;
		} 

	std::wcout << Compare(a, b, Comparer<double>::Default) << std::endl;

	// удваивания значения объекта любого типов (ст. 18-21)
	template <typename T>
	static T Double(T value, std::function<T(T)> calculateDouble)
	{
		return calculateDouble(value);
	}

    // обмена значений двух объектов любых типов
	template <typename T>
	static void Swap(T & left, T & right)
	{
		return (left, right) = (right, left);
	}

    // определения большего из значений двух объектов любых типов (ст. 23-26)
	template <typename T>
	static T Max(T left, T right, std::function<bool(T, T)> findMax)
	{
		return findMax(left, right) ? left : right;
	}

    // сравнения значений двух объектов любых типов (ст. 28)
	template <typename T>
	static int Compare(T left, T right, IComparer<T> *comparer)
	{
		return comparer->Compare(left, right);
	}


}
