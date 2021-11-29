/*3.Напишите в классе Student метод-инвариант класса.*/
/*Строки 43-46*/

#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
#include <cassert> // для assert()

class Students {
    public:
        void save(); // Запись данных о студенте в файл
        ~Students(); // Деструктор класса Students
        {
            #ifndef NDEBUG
            std::cout << "Деструктор студента работает";
            #endif
            };
        
        Students(std::string, std::string); // Конструктор класса Students
        {
            #ifndef NDEBUG
            std::cout << "Конструктор студента работает";
            #endif
            };
            
        void set_name(std::string); // Установка имени студента
        std::string get_name(); // Получение имени студента

        void set_last_name(std::string); // Установка фамилии студента
        std::string get_last_name();// Получение фамилии студента

        void set_scores(int []); // Установка промежуточных оценок
        int *get_scores(); // Получение массива с промежуточными оценками
        std::string get_scores_str(char); // Получение строки с промежуточными оценками

        void set_average_ball(float);// Установка среднего балла
        float get_average_ball();// Получение среднего балла
    private:
        int scores[5];// Промежуточные оценки
        float average_ball;// Средний балл
        std::string name; // Имя
        std::string last_name;// Фамилия

        void average_ball(float){
            assert (0 <= average_ball <= 100);
            std::cout << "Средний балл ="<< average_ball << std::endl;
            return;
        }
};