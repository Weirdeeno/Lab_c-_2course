/*1.	Напишите программу, работающую со всеми четырьмя стандартными объектами iostream.*/

#include <iostream>
#include <fstream>

using namespace std;

int main( )
{
   int i = 0;
   cout << "Enter a number: "; // cout - стандарный поток вывода
   cin >> i; // cin – стандартный поток ввода
   cerr << "test for cerr" << endl; // cerr – поток для вывода сообщений об ошибках без буферизации
   clog << "test for clog" << endl; // clog – поток для вывода сообщений об ошибках c буферизацией
   
}