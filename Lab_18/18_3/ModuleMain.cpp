/*3.Создайте многомодульный проект с двумя узлами : главный модуль и модуль класса.*/

// основной модуль

#include <iostream>
#include <string>
#include "Header.h"
 
using namespace std;
 
    
 
int main(int argc,char *argv [])
{
    unsigned int action;
    int shift;
    string sentence;
 
    action = argv[1][0];
    shift = argv[2][0];
    sentence = argv[3];
 
    Crypt c(action, shift, sentence);
    sentence = c.Crypting();
 
}