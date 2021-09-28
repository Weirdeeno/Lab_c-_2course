/*
4.	Объявите в главной программе два указателя типа Shape
и создайте два объекта типа Square и Rectangle в свободной памяти, сохранив их адреса в этих указателях. 
Выполните обработку объектов путем вызова как виртуальных, так и не виртуальных методов классов.
Уничтожьте объекты и обнулите их указатели.
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
		cout << "Сработал деструктор класса квадрата" << endl;
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

	Rectangle()
	{
		width = 5;
	}

	Rectangle(unsigned int width)
	{
		width = width;
	}

	~Rectangle()
	{
		cout << "Сработал деструктор класса прямоугольника" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	//Создаем экземпляры классов Square и Rectangle
	Shape* square = new Square();
	Shape* rect = new Rectangle();

	//Считаем их площу и периметр
	square->computeArea();
	square->computePerimeter();

	rect->computeArea();
	rect->computePerimeter();

	cout << "Площа первой фигуры: " << square->getArea() << endl;
	cout << "Периметр первой фигуры: " << square->getPerimetr() << endl;

	cout << "Площа второй фигуры: " << rect->getArea() << endl;
	cout << "Периметр второй фигуры: " << rect->getPerimetr() << endl;

	//Чистим память
	delete square;
	delete rect;

	//Обнуляем показатели
	square = NULL;
	rect = NULL;

	return 0;
}