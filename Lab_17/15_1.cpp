/*1.	Напишите операторы защиты от дублирования для заголовочного файла Student.h.
Строка 6*/

/* students.h */

#pragma once /* Защита от двойного подключения заголовочного файла */ 
#include <string>

class Students { 
    public: 
    void set_name(std::string); // Получение имени студента 
    std::string get_name(); // Установка имени студента 
    void set_last_name(std::string); // Установка фамилии  
    std::string get_last_name(); // Получение фамилии студента
    void set_scores(int []); // Установка промежуточных оценок
    void set_average_ball(float); // Установка среднего балла
    float get_average_ball(); // Получение среднего балла
private:  
int scores[5]; // Промежуточные оценки 
float average_ball; // Средний балл
std::string name; // Имя
std::string last_name; }; // Фамилия 