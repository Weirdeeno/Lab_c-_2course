/*3.	�������� ���������, �������� � ��� ������ ����� � �������� ������.*/

#include <iostream> 
#include <bitset>
using namespace std;

class DateTime //������ ��������� � �������� ������
{
public:
    unsigned short Day : 5;    //5 ��� ��� ���
    unsigned short Month : 4;  //4 ��� ������
    unsigned short Year : 7;   //7 ��� ���� �� 0 �� 99
    unsigned short Hour : 5;   //5 ��� ��� 24-� �����
    unsigned short Minute : 6; //6 ��� �����
    unsigned short Second : 6; //6 ��� ������
};

int main()
{
    setlocale(LC_ALL, "Russian");

    DateTime d; //��������� ���������� ����� ���� � �������� ������
    int i;      //� ��� ����, � ������� ����� ��������� ���� ������

    //������ ����
    cout << "������� ���� (1-31):" << '\t'; cin >> i; d.Day = i;
    cout << "������� ����� (1-12):" << '\t'; cin >> i; d.Month = i;
    cout << "������� ��� (00-99) :" << '\t'; cin >> i; d.Year = i;

    //������ �����
    cout << endl << "������� ���-�� ����� (0-24):" << '\t'; cin >> i; d.Hour = i;
    cout << "������� ���-�� ����� (0-60):" << '\t'; cin >> i; d.Minute = i;
    cout << "������� ���-�� ������ (0-60):" << '\t'; cin >> i; d.Second = i;

    //� ������� �� � ����������� ������� � ������
    cout << endl << "Date is: " << d.Day << "." << d.Month << ".20" << d.Year << " ";
    cout << d.Hour << ":" << d.Minute << ":" << d.Second << endl;
    cout << sizeof(d) << endl;
}
