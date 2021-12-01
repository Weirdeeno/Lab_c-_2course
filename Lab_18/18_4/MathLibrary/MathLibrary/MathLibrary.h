// MathLibrary.h - Contains declarations of math functions

/*Этот файл заголовка объявляет некоторые функции для создания обобщенной последовательности Фибоначчи, исходя из двух начальных значений. 
Вызов fibonacci_init(1, 1) создает знакомую последовательность чисел Фибоначчи.

Обратите внимание на операторы препроцессора в верхней части файла. 
Шаблон нового проекта для библиотеки DLL добавляет PROJECTNAME_EXPORTS к определенным макросам препроцессора. 
В этом примере Visual Studio определяет MATHLIBRARY_EXPORTS при сборке проекта библиотеки DLL MathLibrary.

Когда макрос MATHLIBRARY_EXPORTS определен, макрос MATHLIBRARY_API устанавливает модификатор __declspec(dllexport) в объявлениях функций. 
Этот модификатор предписывает компилятору и компоновщику экспортировать функцию или переменную из библиотеки DLL для использования другими приложениями. 
Если MATHLIBRARY_EXPORTS не определен, например, когда файл заголовка включен клиентским приложением, MATHLIBRARY_API применяет модификатор __declspec(dllimport) к объявлениям. 
Этот модификатор оптимизирует импорт функции или переменной в приложении.*/
#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif

// The Fibonacci recurrence relation describes a sequence F
// where F(n) is { n = 0, a
//               { n = 1, b
//               { n > 1, F(n-2) + F(n-1)
// for some initial integral values a and b.
// If the sequence is initialized F(0) = 1, F(1) = 1,
// then this relation produces the well-known Fibonacci
// sequence: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

// Initialize a Fibonacci relation sequence
// such that F(0) = a, F(1) = b.
// This function must be called before any other function.
extern "C" MATHLIBRARY_API void fibonacci_init(
    const unsigned long long a, const unsigned long long b);

// Produce the next value in the sequence.
// Returns true on success and updates current value and index;
// false on overflow, leaves current value and index unchanged.
extern "C" MATHLIBRARY_API bool fibonacci_next();

// Get the current value in the sequence.
extern "C" MATHLIBRARY_API unsigned long long fibonacci_current();

// Get the position of the current value in the sequence.
extern "C" MATHLIBRARY_API unsigned fibonacci_index();
