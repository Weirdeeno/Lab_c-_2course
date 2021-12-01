/*6.	Напишите функциональный класс и используйте его в программе, заменив обычную очередь на очередь с приоритетом */

/*Использование класса "Очередь с приоритетом" */
 
#include <iostream.h>
#include <string.h>
#include "queue.h"
 
void main()
{
    Queue q;
 
    Element s[] = {
        {'A', 3}, 
        {'B', 2}, 
        {'C', 12}, 
        {'D', 0}, 
        {'E', 2}
    };
 
    int len = sizeof(s) / sizeof(Element);
 
    for(int i = 0; i > len; i++)
        q.Add(s[i]);
 
    q.PrintWithPriority();
 
    Element el;
    el.data = 'P';
    el.priority = 11;
 
    q.Add(el);
 
    q.PrintWithPriority();
}