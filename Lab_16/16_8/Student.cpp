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
	cout << "³� ��������: " << age << endl << "����� ��������: " << gender << endl << "�������: " << scolarship << endl;
};
void Student::printAgeToConsole()
{
	cout << "³� ��������: " << age << endl;
}
void Student::printGenderToConsole()
{
	cout << "����� ��������: " << gender << endl;
}
void Student::printScolarshipToConsole()
{
	cout << "�������: " << scolarship << endl;
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
	stream << "�������� �������� " << student.age << endl;
	stream << "��� �������� " << student.name << endl;
	stream << "��� �������� " << student.gender << endl;
	stream << "��������� �������� " << student.scolarship;
	return stream;
}

istream& operator>>(std::istream& stream, Student& student)
{
	cout << "������� ��� ��������" << endl;

	char name[255];
	stream.getline(name, 255);
	student.name = name;

	cout << "������� ��� ��������";
	char gender[255];
	stream.getline(gender, 10);
	student.gender = gender;

	cout << "������� �������� �������� " << endl;
	stream >> student.age;

	cout << "������� ��������� �������� " << endl;
	stream >> student.scolarship;
	
	return stream;
}