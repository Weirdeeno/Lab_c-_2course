/*3.	Ќапишите программу, применив в ней личный класс с битовыми пол€ми.*/

#include <iostream> 
#include <bitset>
using namespace std;

class DateTime //ќпишем структуру с битовыми пол€ми
{
public:
    unsigned short Day : 5;    //5 бит дл€ дн€
    unsigned short Month : 4;  //4 дл€ мес€ца
    unsigned short Year : 7;   //7 дл€ года от 0 до 99
    unsigned short Hour : 5;   //5 бит дл€ 24-х часов
    unsigned short Minute : 6; //6 дл€ минут
    unsigned short Second : 6; //6 дл€ секунд
};

int main()
{
    setlocale(LC_ALL, "Russian");

    DateTime d; //объ€вл€ем переменную этого типа с битовыми пол€ми
    int i;      //» еще одну, в которую будет поступать ввод данных

    //¬ведем дату
    cout << "¬ведите день (1-31):" << '\t'; cin >> i; d.Day = i;
    cout << "¬ведите мес€ц (1-12):" << '\t'; cin >> i; d.Month = i;
    cout << "¬ведите год (00-99) :" << '\t'; cin >> i; d.Year = i;

    //¬ведем врем€
    cout << endl << "¬ведите кол-во часов (0-24):" << '\t'; cin >> i; d.Hour = i;
    cout << "¬ведите кол-во минут (0-60):" << '\t'; cin >> i; d.Minute = i;
    cout << "¬ведите кол-во секунд (0-60):" << '\t'; cin >> i; d.Second = i;

    //» выведем их с показателем размера в пам€ти
    cout << endl << "Date is: " << d.Day << "." << d.Month << ".20" << d.Year << " ";
    cout << d.Hour << ":" << d.Minute << ":" << d.Second << endl;
    cout << sizeof(d) << endl;
}
