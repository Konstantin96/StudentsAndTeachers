#include "Prepodavatel.h"

Prepod::Prepod()
{
	name = "";
	surname = "";
	age = 0;
	gender = "";
	kafedra = "";
}

Prepod::Prepod(string name, string, int age, string gender, int group) {
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->gender = gender;
	this->kafedra = kafedra;
}

//construktor copy
Prepod::Prepod(const Prepod& obj) {
	this->name = obj.name;
	this->surname = obj.surname;
	this->age = obj.age;
	this->gender = obj.gender;
	this->kafedra = obj.kafedra;
}

Prepod::~Prepod() {}

void printPrepod(Prepod *ss, int size) {
	int count = 1;
	for (int i = 0; i < size; i++)
	{
		cout << count++ << " teacher. " << ss[i].name << ss[i].surname << "; " <<
			ss[i].age << " age;  gender - " << ss[i].gender << "; " << ss[i].kafedra << " - kafedra\n";
		cout << "________________________________________________________________________\n";
	}

}
void operator >> (istream &in, Prepod &s) {
	string st;
	getline(in, st, '\n');
	getline(in, s.name, '\\');
	getline(in, s.surname, '\\');
	in >> s.age >> s.gender ;
	getline(in, s.kafedra, ' ');
	getline(in, s.kafedra, '\\');
}

bool operator==(Prepod obj, string kafedra ) {
	return(obj.kafedra == kafedra);
}

bool operator>(Prepod obj1, Prepod obj2) {
	return(obj1.age > obj2.age);
}

bool operator!=(string male, Prepod obj) {
	return(male != obj.gender);
}

bool operator<(Prepod obj1, Prepod obj2) {
	return (obj1.age < obj2.age);
}

void printPrepod(Prepod s) {
	cout << s.name << "\t" << s.surname << " " << s.age << " - age\n";
}