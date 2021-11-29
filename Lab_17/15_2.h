/*2.Сделайте так, чтобы сообщения о работе конструкторов и деструктора класса Student выдались на экран только в режиме отладки.*/
/*Строки 11-22*/

#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>

class Students {
    public:
        void save(); // Запись данных о студенте в файл
        ~Students(); // Деструктор класса Students
        {
            #ifndef NDEBUG
            cout << "Деструктор студента работает";
            #endif
            };
        
        Students(std::string, std::string); // Конструктор класса Students
        {
            #ifndef NDEBUG
            cout << "Конструктор студента работает";
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
};