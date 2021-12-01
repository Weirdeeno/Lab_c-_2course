/*7.	Создайте ассоциативный список объектов, распечатайте его и выполните в нем поиск. */

#include <iostream>
#include <map> //подключили библиотеку для работы с map
using namespace std;

int main(){
   map <char,int> myFirstMap= {{ 'm', 37 }, //map явно инициализирована
                            { 'f', 40 },
                            { 'b', 15 }, 
                            { 's', 20 }};

    //вывод ассоциативного списка на экран
    for (auto it = myFirstMap.begin(); it != myFirstMap.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }

    char ch;
    map <char,int> mySecondMap;
    for (int i = 0,c = 'a'; i < 5; ++i,++c)
    {
        mySecondMap.insert ( pair<char,int>(c,i) );
    }
    cout << 'Введите ключ: ';
    cin >> ch;

    map<char, int> :: iterator p;

    //Поиск значения по заданому ключу
    p = m.find(ch);
    if (p!=m.end())
         cout<<p->second;
    else
        cout << 'Такого ключа в ассоциативном списке нет.\n';
    
    return 0;

}