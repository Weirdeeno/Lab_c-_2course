/*6.	Напишите функциональный класс и используйте его в программе, заменив обычную очередь на очередь с приоритетом */

/*Реализация функций класса "Очередь с приоритетом" */
 
#include <iostream.h>
#include <queue.h>
 
// Конструктор
Queue::Queue()
{
    first = EMPTY;
}
// Функция для очистки очереди
void Queue::Clear()
{
    first = EMPTY;
}
// Функция для проверки очереди на пустоту
bool Queue::IsEmpty()
{
    return first == EMPTY;
}
// Функция для проверки очереди на заполнение 
bool Queue::IsFull()
{
    return first == FULL;
}
// Функция для получения количества элементов в очереди
int Queue::GetCount()
{
    return first + 1;
}
// Функция добавления элемента
void Queue::Add(const Element & elem)
{
    int i;
 
    // поиск позиции
    for(i = first; i >= 0; i--)
        if(q[i].priority > elem.priority)
            break;
    // Если очередь заполнена, удалить элемент с меньшим приоритетом
    if(IsFull())
    {
        if(i != -1)
        {
            for(int j = 0; j < i; j++)
                q[j] = q[j + 1];
 
            q[i] = elem;
        }
    }
    else
    {
        for(int j = first; j > i; j--)
            q[j + 1] = q[j];
 
        q[i + 1] = elem;
        first++;
    }
}
 
// Функция удаления элемента
Element Queue::Remove()
{
    if(IsEmpty())
        return Element();
 
    return q[first--];
}
// Функция для вывода очереди на экран
void Queue::Print()
{
    if(IsEmpty())
        return;
 
    for(int i = first; i >= 0; i--)
        cout << q[i].data << "\t";
 
    cout <<endl;
}
// Функция для вывода очереди с приоритетами элементов на экран
void Queue::PrintWithPriority()
{
    if(IsEmpty())
        return;
 
    for(int i = first; i >= 0; i--)
        cout << q[i].data <<", pr: "
        <<q[i].priority <<"\t";
 
    cout << endl;
}