/*3.Создайте многомодульный проект с двумя узлами : главный модуль и модуль класса.*/

// заголовок

#pragma once
#include <string>
class Crypt
{
private:
    unsigned int action;
    int shift;
    string sentence;
public:
    Crypt(unsigned int action_n, int shift_n, string enter_sentence) :
        action(action_n), shift(shift_n), sentence(enter_sentence) {};
 
    void Crypting(string sentence, int shift, unsigned int action);
};