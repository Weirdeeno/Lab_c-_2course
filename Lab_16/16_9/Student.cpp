#include "Student.h"

using namespace std;

Student::Student(unsigned short int age, std::string gender, std::string name, float scolarship)
{
	this->age = age;
	this->gender = gender;
	this->scolarship = scolarship;
	this->name = name;
}
//Destructor
Student::~Student()
{
}
//Methods
void Student::printAllDataToConsole()
{
	cout << "Вік студента: " << age << endl << "Стать студента: " << gender << endl << "Стипедія: " << scolarship << endl;
};
void Student::printAgeToConsole()
{
	cout << "Вік студента: " << age << endl;
}
void Student::printGenderToConsole()
{
	cout << "Стать студента: " << gender << endl;
}
void Student::printScolarshipToConsole()
{
	cout << "Стипедія: " << scolarship << endl;
}
void Student::setName(std::string name)
{
	this->name = name;
}
void Student::setAge(unsigned short int actualAge)
{
	age = actualAge;
}
void Student::setGender(std::string newValueOfGender)
{
	gender = newValueOfGender;
}
void Student::setScolarship(float newValueOfScolarship)
{
	scolarship = newValueOfScolarship;
}
std::string Student::getName()
{
	return this->name;
}
int Student::getAge()
{
	return age;
}
std::string Student::getGender()
{
	return gender;
}
float Student::getScolarship()
{
	return scolarship;
}

ostream& operator<<(std::ostream &stream, Student& student)
{
	stream << "Возвраст студента " << student.age << endl;
	stream << "Имя студента " << student.name << endl;
	stream << "Пол студента " << student.gender << endl;
	stream << "Стипендия студента " << student.scolarship;
	return stream;
}

istream& operator>>(std::istream& stream, Student& student)
{
	cout << "Введите имя студента" << endl;

	char name[255];
	stream.getline(name, 255);
	student.name = name;

	cout << "Введите пол студента";
	char gender[255];
	stream.getline(gender, 10);
	student.gender = gender;

	cout << "Введите возвраст студента " << endl;
	stream >> student.age;

	cout << "Введите стипендию студента " << endl;
	stream >> student.scolarship;
	
	return stream;
}