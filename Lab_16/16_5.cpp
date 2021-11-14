/*5.	Напишите программу, предлагающую пользователю ввести его фамилию, имя и отчество , а затем выводящую эти сведения в текстовый файл*/


#include <iostream.h>
#include <fstream.h>
#include <conio.h>

main() {
    setlocale(LC_ALL, "Russian");

    char str[40];
    int i;

    //запись файла
    ofstream fout("«D:\\prog\\file.txt», ios::out"); // открытие файла
    cout << "Введите ФИО: ";
    cin.getline(str,40);
    fout << str[i] << ""; // запись фамилии в файл
    fout.close();

    //чтение файла и вывод на экран
    cout << "\nЧтение файла\n\n";
    ifstream fin("D:\\prog\\file.txt");
    fin.getline(str[i],40);
    cout << str[i] << "";

    fin.close();
    getch();
}
