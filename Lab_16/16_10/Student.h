#pragma once
#include <iostream>
class Student
{
public:
	unsigned short int age;
	float scolarship;
	//Konstructor
	Student(unsigned short int = 17, float = 0);
	
	~Student();
	//Methods
	void printAllDataToConsole();
	void printAgeToConsole();
	void printGenderToConsole();
	void printScolarshipToConsole();
	void setAge(unsigned short int);
	void setScolarship(float);
	int getAge();
	float getScolarship();
	friend std::ostream& operator<<(std::ostream&, Student&);
	friend std::istream& operator>>(std::istream&, Student&);
};