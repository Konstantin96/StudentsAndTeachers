#include "Students.h"

Student::Student()
{
	name = "";
	surname = "";
	age = 0;
	gender = "";
	group = 0;
}

Student::Student(string name, string, int age, string gender, int group) {
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->gender = gender;
	this->group = group;
}

Student::Student(const Student& obj) {
	this->name = obj.name;
	this->surname = obj.surname;
	this->age = obj.age;
	this->gender = obj.gender;
	this->group = obj.group;
}

Student::~Student() {}

void printStudents(Student *ss, int size) {
	int count=1;
	for (int i = 0; i < size; i++)
	{
		cout <<count++<< " student. " << ss[i].name << ss[i].surname << "; " <<
			ss[i].age << " age;  gender - " << ss[i].gender << "; " << ss[i].group << " - group\n";
		cout << "________________________________________________________________________\n";
	}
	
}
void operator >> (istream &in, Student &s) {
	string str;
	getline(in, str, '\n');
	getline(in, s.name, '\\');
	getline(in, s.surname, '\\');
	in >> s.age >> s.gender >> s.group;
}

bool operator==(string male, Student obj) {
	return(male == obj.gender);
}

bool operator!=(string male, Student obj) {
	return(male != obj.gender);
}

bool operator<(Student obj1, Student obj2) {
	return (obj1.age < obj2.age);
}

bool operator>(Student obj1, Student obj2) {
	return (obj1.age > obj2.age);
}

void printStudents(Student s) {
	cout << s.name << "\t" << s.surname << "\t" << s.age;
}