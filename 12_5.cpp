/*
5.	В главной программе объявите массив указателей типа Shape. 
Создайте несколько объектов типа Square и Rectangle в свободной памяти, 
сохранив их адреса в этом массиве. 
Вычислите и распечатайте параметры объектов на экране, 
используя методы этих классов. 
Уничтожьте объекты и обнулите массив указателей.
*/

#include <iostream>
#include <string.h>

using namespace std;

class Shape
{
protected:
	string linesColor;
	unsigned int linesWeight;
	unsigned int area;
	unsigned int perimetr;
public:
	Shape()
	{
		linesColor = "";
		linesWeight = 0;
	}

	virtual void computeArea()
	{
	}

	virtual void computePerimeter()
	{
	}

	virtual void printDataToConsole()
	{

	}

	unsigned int getArea()
	{
		return area;
	}

	unsigned int getPerimetr()
	{
		return perimetr;
	}

	inline void setLinesColor(string linesColor)
	{
		linesColor = linesColor;
	}

	inline void setLinesWeight(unsigned int linesWeight)
	{
		linesWeight = linesWeight;
	}

	inline string getLinesColor()
	{
		return linesColor;
	}

	inline unsigned int getLinesWeight()
	{
		return linesWeight;
	}

	Shape(string color)
	{
		linesColor = color;
		linesWeight = 0;
	}

	Shape(unsigned int weight)
	{
		linesColor = "";
		linesWeight = weight;
	}

	virtual ~Shape()
	{
		cout << "Сработал деструктор класса фигура" << endl;
	}
};

class Square : public Shape
{
protected:
	unsigned int length;
public:
	virtual inline void computeArea()
	{
		area = length * length;
	}

	virtual void computePerimeter()
	{
		perimetr = 4 * length;
	}

	inline string getLinesColor()
	{
		return linesColor;
	}

	inline unsigned int getWeight()
	{
		return linesWeight;
	}

	inline unsigned int getLength()
	{
		return length;
	}

	inline void setLinesWeight(unsigned int linesWeigth = 10)
	{
		linesWeight = linesWeigth;
	}

	inline void setColor(string linesColor = "white")
	{
		linesColor = linesColor;
	}

	inline void setlength(unsigned int length = 12)
	{
		length = length;
	}

	void printDataToConsole()
	{
		cout << "Длина: " << length << endl;
		cout << "Периметр: " << perimetr << endl;
		cout << "Площадь: " << area << endl;
	}

	Square()
	{
		length = 12;
	}

	Square(unsigned int length)
	{
		length = length;
	}

	virtual ~Square()
	{
		cout << "Сработал деструктор класса площадь" << endl;
	}
};

class Rectangle : public Square
{
protected:
	unsigned int width;

public:
	virtual inline void computeArea()
	{
		area = length * width;
	}

	virtual void computePerimeter()
	{
		perimetr = 2 * (width + length);
	}

	inline void setWidth(unsigned int width = 5)
	{
		width = width;
	}

	inline unsigned int getWidth()
	{
		return width;
	}

	void printDataToConsole()
	{
		cout << "Ширина: " << width << endl;
		cout << "Длина: " << length << endl;
		cout << "Периметр: " << perimetr << endl;
		cout << "Площадь: " << area << endl;
	}

	Rectangle()
	{
		width = 5;
	}

	Rectangle(unsigned int width)
	{
		width = width;
	}

	Rectangle(unsigned int width, unsigned int length)
	{
		width = width;
		length = length;
	}

	~Rectangle()
	{
		cout << "Сработал деструктор класса прямоугольник" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	//Создаем экземпляры классов Square и Rectangle в массиве
	Shape* shapes[4] = { new Rectangle(5, 6), new Rectangle(8, 9), new Square(3), new Square(4) };

	//Считаем их площи и периметры в цикле
	for (unsigned int i = 0; i < 4; i++)
	{
		shapes[i]->computeArea();
		shapes[i]->computePerimeter();
	}

	//Печатаем их данные в консоль
	for (unsigned int i = 0; i < 4; i++)
	{
		shapes[i]->printDataToConsole();
		cout << endl << endl;
	}

	// delete[] shapes - не работает

    /**
     * стираемм их данные с помощью цикла
     * избавляемся от нулевых указателей
     */
	for (unsigned int i = 0; i < 4; i++)
	{
		delete shapes[i];
		shapes[i] = 0;
		cout << endl << endl;
	}
	return 0;
}