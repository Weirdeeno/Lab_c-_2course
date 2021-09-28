/*
Напишите объявление класса Rectangle (прямоугольник),который является производным от Square (квадрат), 
который, в свою очередь – производный от Shape(фигура).  В классе Shape объявите следующие защищенные члены-данные : 
цвет линий фигуры и толщина ее линий  и напишите 2 конструктора - по умолчанию и с параметрами. 
В классах Square и Rectangle объявите закрытые (защищенные) члены-данные для хранения размеров каждой из фигур, несколько конструкторов,
вызывающих конструкторы базового класса, а также методы для вычисления площади и периметра фигур. 
В классе Rectangle обязательно используйте перекрывание методов базового класса Square. 
При необходимости добавьте в классы  методы доступа. Напишите главную программу, в которой выполните создание объектов-фигур различных типов и их обработку.
*/

#include <iostream>
#include <string.h>
using namespace std;

class Shape
{
protected:
    string LineColors;
    unsigned int LineWeidth;
    /**
        * Класс фигуры
        * protected - защищенное наследование, в котором
        * строковая переменная цвета линии
        * и переменная положительного целого числа (от 0 до 65535 | 0 до 4 294 967 295) толщины
        */

public:
    Shape()
    {
        LineColors = "";
        LineWeidth = 0;
    }
    Shape(string Color)
    {
        LineColors = Color;
        LineWeidth = 0;
    }
    Shape(unsigned int Weidth)
    {

        LineColors = "";
        LineWeidth = Weidth;
    }
    /**
        * public - открытое наследование
        * Shape() - конструктор без параметра
        * Shape(string Color) - конструктор с параметром цвета
        * Shape(unsigned int Weidth) - конструктор с параметром ширины линии
        */
};

class Square : public Shape
{
    /**
    * Класс квадрата наследуется в класс фигуры
    */
protected:
    unsigned int length;
    /**
    * protected - защищенное наследование, в котором
    * задается длина, как целое положительное число
    */
public:
    inline unsigned int Area()
    {
        return length * length;
    }
    /**
    * inline - встроенная ф-ция площади (Area())
    * возвращает площадь квадрата, как целое положительное число
    */

    inline unsigned int Perimeter()
    {
        return 4 * length;
    }
    /**
    * inline - встроенная ф-ция периметра (Perimeter())
    * возвращает периметр квадрата, как целое положительное число
    */

    inline string getLinesColor()
    {
        return LineColors;
    }
    /**
    * inline - встроенная ф-ция получения цвета линии
    * возвращает цвет линии, как строку
    */

    inline unsigned int getWeight()
    {
        return LineWeidth;
    }
    /**
    * inline - встроенная получения толщины линии
    * возвращает толщину линии, как целое положительное число
    */

    inline unsigned int getLength()
    {
        return length;
    }
    /**
    * inline - встроенная получения длины линии
    * возвращает длину линии, как целое положительное число
    */

    inline void setLinesWeight(unsigned int linesWeigth = 10)
    {
        LineWeidth = linesWeigth;
    }
    /**
    * функция типа данных void - не возвращает значение
    * толщина линии равна 10
    * толщина линии фигуры = толщине линии квадрата
    */

    inline void setColor(string linesColor = "white")
    {
        LineColors = linesColor;
    }
    /**
    * функция типа данных void - не возвращает значение
    * цвет линии белый
    * цвет линии фигуры = цвету линии квадрата
    */

    inline void setlength(unsigned int length = 12)
    {
        length = length;
    }
    /**
    * функция типа данных void - не возвращает значение
    * длина линии равна 12
    * длина линии фигуры = длине линии квадрата
    */

    Square()
    {
        length = 12;
    }
    /**
        * Square() - конструктор без параметра
        * длина равна 12
        */

    Square(unsigned int length)
    {
        length = length;
    }
    /**
        * Square(unsigned int length) - конструктор с параметром длины 
        */
};

class Rectangle : public Square
{
    /**
    * Класс прямоугольника наследуется в класс квадрата
    */
protected:
    unsigned int width;
    /**
    * protected - защищенное наследование, в котором
    * задается ширина, как целое положительное число
    */

public:
    inline unsigned int Area()
    {
        return length * width;
    }
    /**
    * inline - встроенная ф-ция площади (Area())
    * возвращает площадь прямоугольника, как целое положительное число
    */

    inline unsigned int Perimeter()
    {
        return 2 * (length + width);
    }
    /**
    * inline - встроенная ф-ция периметра (Perimeter())
    * возвращает периметр прямоугольника, как целое положительное число
    */

    inline void setWidth(unsigned int width = 5)
    {
        width = width;
    }
    /**
    * функция типа данных void - не возвращает значение
    * установленная длина равна 5
    */

    inline unsigned int getWidth()
    {
        return width;
    }
    /**
    * inline - встроенная ф-ция полученной длины
    * возвращается полученная длина
    */

    Rectangle()
    {
        width = 5;
    }
    /**
    * Rectangle() - конструктор без параметра
    * ширина равна 5
    */

    Rectangle(unsigned int width)
    {
        width = width;
    }
    /**
    * Rectangle(unsigned int width) - конструктор с параметром ширины
    */
};

int main()
{

    setlocale(LC_ALL, "RUSSIAN");
    Rectangle rect;
    cout << "Периметр прямоугольника = " << rect.Perimeter() << endl;
    cout << "Площадь прямоугольника = " << rect.Area() << endl;

    Square square;
    cout << "Периметр квадрата = " << square.Perimeter() << endl;
    cout << "Площадь квадрата = " << square.Area() << endl;

    return 0;
}