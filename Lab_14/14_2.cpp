/* 2.	Напишите определение статической переменной – члена. */

#include <iostream>
using namespace std;

// объявление класса, содержащее статический член данных
class counter
{
    static int count; // статический член данных – константа
public:
	void setcount(int i) {
        count = i;
    };
    void showcount() {
        cout << count << " ";
    }
};

int counter::count; // определение count

int main() {
    counter a, b;
    a.showcount (); // выводит 0
    b.showcount (); // выводит 0
    a.setcount (10); // установка статического count в 10
    a.showcount (); // выводит 10
    b.showcount (); // также выводит 10
    return 0;
}