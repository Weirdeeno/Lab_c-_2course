/*2.	Напишите программу, предлагающую пользователю ввести  с клавиатуры его фамилию, имя и отчество как единое целое, а затем выводящую их на экран*/

#include <iostream> 
using namespace std;
 
int main() {

    setlocale(LC_ALL, "Russian");

    const int len = 50;
    char name[len], lastname[len], patr[len];

    cout << "Введите свое ФИО: ";
    cin >> lastname >> name >> patr;

    lastname[0] = toupper(lastname[0]);
    name[0] = toupper(name[0]);
    patr[0] = toupper(patr[0]);
    
    cout << lastname << ' ' << name << " " << patr << "\n";
    return 0;
}