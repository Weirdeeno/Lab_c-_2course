/*9.	Создайте множество объектов распечатайте его.*/

#include <iostream>
#include <set>  // заголовочный файл множеств и мультимножеств
#include <iterator>
 
using namespace std;
int main()
{
    set<char> mySet; // объявили пустое множество
 
    // добавляем элементы в множество
    mySet.insert('1');
    mySet.insert('1');
    mySet.insert('2');
    mySet.insert('3');
    mySet.insert('4');
    mySet.insert('5');
    mySet.insert('5');
    mySet.insert('6');
 
    cout << "Элементы множества: ";
    copy( mySet.begin(), mySet.end(), ostream_iterator<char>(cout, " "));
    return 0;
}