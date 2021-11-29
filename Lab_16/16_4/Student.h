/*Используя один из ранее разработанных классов (Worker, Student … ), 
создайте в программе список объектов путем ввода данных с клавиатуры и рапечатайте его на экране в виде таблицы.*/
/**/
#pragma once
#include <iostream>
class Student
{
private:
	//Data
	std::string name;
	unsigned short int age;
	std::string gender;
	float scolarship;
public:
	//Konstructor
	Student(unsigned short int = 17, std::string = "чоловіча", std::string = "name", float = 0);
	
	~Student();
	//Methods
	void printAllDataToConsole();
	void printAgeToConsole();
	void printGenderToConsole();
	void printScolarshipToConsole();
	void setName(std::string);
	void setAge(unsigned short int);
	void setGender(std::string);
	void setScolarship(float);
	int getAge();
	std::string getName();
	std::string getGender();
	float getScolarship();
	friend std::ostream& operator<<(std::ostream&, Student&);
	friend std::istream& operator>>(std::istream&, Student&);
};
