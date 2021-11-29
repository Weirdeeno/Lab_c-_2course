/*17.	Запустите программу п.2 так, чтобы она выводила свои результаты не на экран, а в текстовый файл. */
/**/

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
	std::fstream example("./example.txt", ios::in);
	if (!example)
	{
		cerr << endl << "Файла нет" << endl;
		return 1;
	}
	return 0;
}

void openFile(char path[255])
{
	char a;
	if (path[0] == '\0')
	{
		strcat(path, "./example.txt");
	}

	std::fstream example("./example.txt", ios::in);

	if (!example)
	{
		cerr << endl << "Файла нет" << endl;
		exit(0);
	}

	ofstream ex;
	ex.open("./file.txt");

	while (!example.eof())
	{
		example >> a;
		if (isAlNumR(a))
		{
			ex << a;
		}
	}
	example.close();
	ex.close();
	example.close();

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