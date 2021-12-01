/*3.Создайте многомодульный проект с двумя узлами : главный модуль и модуль класса.*/

// модуль класса

#include "Header.h"
#include <string>
void Crypt::Crypting(string sentence, int shift, unsigned int action)
{
        int i = 0;
    if (action == 1)
    {
        if (shift > 26)
        {
            do
            {
                shift = shift - 25;
            } while (shift <= 25);
        }
            for (i = 0; i < sentence.size(); i++)
            {
                sentence[i] = sentence[i] + shift;
                if (sentence[i] > 90)
                    sentence[i] = sentence[i] - 26;
                if (sentence[i] < 65)
                    sentence[i] = sentence[i] + 26;
            }
    }
    else if (action == 0)
    {
        if (shift > 26)
        {
            do
            {
                shift = shift - 25;
            } while (shift <= 25);
        }
            for (i = 0; i < sentence.size(); i++)
            {
                sentence[i] = sentence[i] - shift;
                if (sentence[i] > 90)
                    sentence[i] = sentence[i] - 26;
                if (sentence[i] < 65)
                    sentence[i] = sentence[i] + 26;
            }
    }
    return sentence;
}