#include "EXAM.h"

EXAM::EXAM(string subjects, string student_sname, string teachers, double grade) {
	this->subjects = subjects;
	this->students = student_sname;
	this->teachers = teachers;
	this->grade = grade;
}

EXAM::EXAM(string subjects, Student sobj, Prepod pobj, double grade) {
	this->subjects = subjects;
	this->students = sobj.surname;
	this->teachers = pobj.surname;
	this->grade = grade;
}

EXAM::EXAM(const EXAM&obj) {
	this->subjects = obj.subjects;
	this->students = obj.students;
	this->teachers = obj.teachers;
	this->grade = obj.grade;
}

void EXAM ::create_exam(string subjects, Student sobj, Prepod pobj,double grade) {
	this->subjects = subjects;
	this->students = sobj.surname;
	this->teachers = pobj.surname;
	this->grade = grade;
}

void printExam(EXAM *es, int size) {
	int count = 1;
	for (int i = 0; i < size; i++)
	{
		cout << count++ <<setw(35) << es[i].subjects << setw(15)<< es[i].students << setw(15) <<
			es[i].teachers << setw(6) << es[i].grade <<"\n";
	}
}

EXAM::~EXAM()
{
}