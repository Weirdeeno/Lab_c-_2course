/*
3.	Измените классы Shape->Square->Rectangle из предыдущего задания на виртуальные. 
Для этого добавьте в класс Shape пустые методы для вычисления площади и периметра
и перекройте их виртуальными методами в производных классах. 
Не забудьте также и про виртуальные деструкторы.
*/

#include <iostream>
#include <string.h>

using namespace std;

class Shape
{
protected:
	string linesColor;
	unsigned int linesWeight;
public:
	Shape()
	{
		linesColor = "";
		linesWeight = 0;
	}

	inline unsigned int computeArea()
	{
	}

	inline unsigned int computePerimeter()
	{
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
		cout << "Виртуальный деструктор класса фигуры" << endl;
	}
};

class Square : public Shape
{
protected:
	unsigned int length;
public:
	virtual inline unsigned int computeArea()
	{
		return length * length;
	}

	virtual inline unsigned int computePerimeter()
	{
		return 4 * length;
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

	~Square()
	{
		cout << "Виртуальный деструктор класса квадрата" << endl; 
	}
};

class Rectangle : public Square
{
protected:
	unsigned int width;

public:
	virtual inline unsigned int computeArea()
	{
		return length * width;
	}

	virtual inline unsigned int computePerimeter()
	{
		return 2 * (length + width);
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
		cout << "Виртуальный деструктор класса прямоугольника" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	Rectangle rect;
	cout << rect.computePerimeter() << endl;

	Square square;
	cout << square.computePerimeter() << endl;

	return 0;
}


public class Rectangle : Square, System.IDisposable
{
	protected uint width;

	public virtual uint computeArea()
	{
		return length * width;
	}

	public virtual uint computePerimeter()
	{
		return 2 * (length + width);
	}

	public void setWidth(uint width = 5)
	{
		width = width;
	}

	public uint getWidth()
	{
		return width;
	}

	public Rectangle()
	{
		width = 5;
	}

	public Rectangle(uint width)
	{
		width = width;
	}

}

public static class GlobalMembers
{
	internal static void Main()
	{
		setlocale(LC_ALL, "RUSSIAN");

		Rectangle rect = new Rectangle();
		Console.Write(rect.computePerimeter());
		Console.Write("\n");

		Square square = new Square();
		Console.Write(square.computePerimeter());
		Console.Write("\n");

	}
}