/*4.	»змените эту программу, применив в ней личное объединение с битовыми пол€ми*/

#include <iostream> 
#include <bitset>
using namespace std;

union DateTime //ќпишем структуру объединени€ с битовыми пол€ми
{
    unsigned short Day;
    unsigned short Month;
    unsigned short Year;
    unsigned short Hour;
    unsigned short Minute;
    unsigned short Second;
};

int main()
{
    setlocale(LC_ALL, "Russian");

    DateTime d;

    d.Day = 5;
    d.Month = 4;
    d.Year = 7;
    d.Hour = 5;
    d.Minute = 6;
    d.Second = 6;

     
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
