/*10.	Создайте мультимножество объектов распечатайте его.*/

#include <iostream>
#include <set>  // заголовочный файл множеств и мультимножеств
#include <iterator>
 
using namespace std;
int main()
{
    multiset<char> myMultisetSet; // объявили пустое мультимножество
 
    // добавляем элементы в множество
    myMultisetSet.insert('1');
    myMultisetSet.insert('1');
    myMultisetSet.insert('2');
    myMultisetSet.insert('3');
    myMultisetSet.insert('4');
    myMultisetSet.insert('5');
    myMultisetSet.insert('5');
    myMultisetSet.insert('6');
 
    cout << "Элементы мультимножества: ";
    copy( myMultisetSet.begin(), myMultisetSet.end(), ostream_iterator<char>(cout, " "));
    return 0;
}