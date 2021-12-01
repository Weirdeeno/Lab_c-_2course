/*11.	Используя алгоритмы STL для решения следующих задач :
•	найдите в контейнере наибольший и наименьший объекты;
•	определите количество объектов;
•	измените нужный вам параметр во всех объектах контейнера;
•	отсортируйте контейнер по возрастанию и убыванию; 
•	распечатайте контейнер на экране, применив алгоритм for_each().

*/

#include <iostream> 
#include <cstring> 
#include <vector> 
#include <map> 
#include <set> 
#include <algorithm> 
using namespace std; 
 
inline ostream& operator <<( ostream& out, const vector<char>& obj ) { 
   for( auto p: obj ) cout << p; 
   return out; 
} 
 
int main( void ) { 
   char s[] = "The Life and Strange Surprizing Adventures of Robinson  
               Crusoe, Of York, Mariner: Who lived Eight and Twenty 
               Years, all alone in an un-inhabited Island on the  
               Coast of America, near the Mouth of the Great River of 
               Oroonoque; Having been cast on Shore by Shipwreck, 
               wherein all the Men perished but himself. With 
               An Account how he was at last as strangely deliver'd 
               by Pyrates"; // название книги
   vector<string> vs = { 
       "Supercalifragilisticexpialidocious",
       // cамое длинное слово на английском языке 
       "Pneumonoultramicroscopicsilicovolcanoconiosis" 
       // самый длинный термин на английском языке 
   }; 

   // определите количество объектов
   // copy & find : 
   vector<char> v1( strlen( s ) ); 
   copy( s, s + v1.size(), v1.begin() ); 
   int nb = 0; 
   for( auto is = find( v1.begin(), v1.end(), ' ' ); is != v1.end(); 
             is = find( ++is, v1.end(), ' ' ) ) nb++; 
   cout << "в фразе пробелов " << nb << " (" << nb + 1 
        << " слов)" << endl; 

   // найдите в контейнере наибольший и наименьший объекты
   // min & max : 
   auto mm = minmax_element( v1.begin(), v1.end() ); 
   cout << "диапазон символов: '" << *mm.first << "' ... '"
        << *mm.second << "'" << endl; 

   // измените нужный вам параметр во всех объектах контейнера   
   // fill & reverse & rotate & shuffle : 
   vector<char> suv( vs[ 0 ].size() ); 
   copy( vs[ 0 ].begin(), vs[ 0 ].end(), suv.begin() ); 
   cout << suv << endl; 
   random_shuffle( suv.begin(), suv.end() ); 
   cout << suv << endl; 
   reverse( suv.begin(), suv.end() ); 
   cout << suv << endl; 
   rotate( suv.begin(), suv.begin() + suv.size() / 2, suv.end() ); 
   cout << suv << endl; 

   // отсортируйте контейнер по возрастанию и убыванию
   // sort & reverse
    sort(v1.begin(), v1.end()); // выполняем сортировку элементов вектора
    vector<string>::const_iterator it; // объявляем итератор
    for (it = v1.begin(); it != v1.end(); ++it) // выводим с помощью цикла и итератора элементы вектора
         cout << *it << ' ';
    cout << '\n';

    reverse(v1.begin(), v1.end()); // сортируем элементы вектора в обратную сторону
    for (it = v1.begin(); it != v1.end(); ++it) // выводим с помощью цикла и итератора элементы вектора
         cout << *it << ' ';
    cout << '\n';

    // распечатайте контейнер на экране, применив алгоритм for_each()
    // for_each
    for_each( v1.begin(), v1.end()); 
    cout << v1 << endl;
} 