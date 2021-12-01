/*4.	�������� ��� ���������, �������� � ��� ������ ����������� � �������� ������*/

#include <iostream> 
#include <bitset>
using namespace std;

union DateTime //������ ��������� ����������� � �������� ������
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
