/*4.Напишите макрос MyAssert, который выводит сообщение об ошибке,  имя файла и номер строки только при работе на уровне отладки.*/
/**/

#define Debug
#include <iostream>
using namespace std;
 
#ifndef Debug
#define MyAssert(x)
 
#else
#define MyAssert(x) 
if(! (x))\
    {\
    cout <<"ERROR! Assert " << #x << " failed.\n";\
    cout <<" on line " << __LINE__ << "\n";\
    cout <<" in file " << __FILE__ << "\n";\
    }
 
#endif
 
 
void main()
{
    int a = 3, b = 4, x = 5;
    cout << a + b << endl;
    cout << b - a << endl;
    MyAssert(x != 5);
 
    system("pause");
}