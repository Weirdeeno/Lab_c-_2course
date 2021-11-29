/*18.	Перепишите  программу п.2 с применением функций ввода-вывода языка С. */
/**/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using namespace std;

const char starerValueOfUpper = 'А';
const char starterValueOfLower = 'а';
const char starterValueOfDigit = '0';

char toUpperR(char);
char toLowerR(char);
bool isalphaR(char);
bool islowerR(char);
bool isUpperR(char);
bool isAlNumR(char);
void openFile(char[255]);

int main()
{
	char a;
	setlocale(LC_ALL, "RUSSIAN");
	return 0;

}

void openFile(char path[255])
{
	char buffer[100];
	if (path[0] == '\0')
	{
		strcat(path, "./example.txt");
	}

	FILE* file;
	file = fopen(path, "ab+");
	if (file == NULL)
	{
		cerr << endl << "Файла нет" << endl;
		exit(0);
	}
	else
	{
		while (!feof(file))                               // пока не конец файла
		{
			if (fgets(buffer, 100, file) != NULL)         // считать символы из файла
			{
				fputs(buffer, stdout);
			}                           // вывод на экран
		}

		fclose(file);
	}
}

char toUpperR(char ch)
{
	return ch - 32;
}

char toLowerR(char ch)
{
	return ch + 32;
}

bool isalphaR(char ch)
{
	return (ch >= starerValueOfUpper && ch <= starterValueOfLower + 32);
}

bool islowerR(char ch)
{
	return (ch >= starterValueOfLower && ch <= starterValueOfLower + 32);
}

bool isUpperR(char ch)
{
	return (ch >= starerValueOfUpper && ch <= starerValueOfUpper + 32);
}

bool isAlNumR(char ch)
{
	return (ch >= starterValueOfDigit && ch <= starterValueOfDigit + 9) || isalphaR(ch) || (ch == ',' || ch == '.' || ch == '!' || ch == '?' || ch == ':' || ch == ';' || ch == '-');
}