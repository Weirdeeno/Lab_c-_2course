/*2.�������� ���������, � ������� �������� �������� ���� �� �������� "10000000"
� �����  ���������� ������� �������� �++ �������� ��� �� "10010001".
*/

#include <iostream> 
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    unsigned char var = 0x80 // 128 base 10, 10000000
        var |= ((1 << 4) | 1);
    
    cout << var;

 
    return 0;
}
