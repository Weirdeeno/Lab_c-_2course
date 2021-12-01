/*2.Ќапишите программу, в которой создайте байтовый флаг со значение "10000000"
и путем  выполнени€ битовых операций —++ измените его на "10010001".
*/

#include <iostream> 
#include <bitset>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    unsigned var = 0x80; // 10000000
    var |= ((1 << 4) | 1);

    cout << bitset<CHAR_BIT>(var); // вывод в двоичной форме

    return 0;
}