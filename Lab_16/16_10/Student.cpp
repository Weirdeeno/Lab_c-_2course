#include "Student.h"

using namespace std;

Student::Student(unsigned short int age, float scolarship)
{
	this->age = age;
	this->scolarship = scolarship;
}
//Destructor
Student::~Student()
{
}
//Methods
void Student::printAgeToConsole()
{
	cout << "³� ��������: " << age << endl;
}

void Student::printScolarshipToConsole()
{
	cout << "�������: " << scolarship << endl;
}
void Student::setAge(unsigned short int actualAge)
{
	age = actualAge;
}
void Student::setScolarship(float newValueOfScolarship)
{
	scolarship = newValueOfScolarship;
}
int Student::getAge()
{
	return age;
}
float Student::getScolarship()
{
	return scolarship;
}

ostream& operator<<(std::ostream &stream, Student& student)
{
	stream << "�������� �������� " << student.age << endl;
	stream << "��������� �������� " << student.scolarship;
	return stream;
}

istream& operator>>(std::istream& stream, Student& student)
{
	cout << "������� ��� ��������" << endl;

	cout << "������� �������� �������� " << endl;
	stream >> student.age;

	cout << "������� ��������� �������� " << endl;
	stream >> student.scolarship;
	
	return stream;
}