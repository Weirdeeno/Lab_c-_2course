/*2.�������� ���������, � ������� �������� �������� ���� �� �������� "10000000"
� �����  ���������� ������� �������� �++ �������� ��� �� "10010001".
*/

#include <iostream> 
#include <bitset>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    unsigned var = 0x80; // 10000000
    var |= ((1 << 4) | 1);

    cout << bitset<CHAR_BIT>(var); // ����� � �������� �����

    return 0;
}