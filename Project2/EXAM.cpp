#include "EXAM.h"

EXAM::EXAM(string subjects, string student_sname, string teachers, double grade) {
	this->subjects = subjects;
	this->students = student_sname;
	this->teachers = teachers;
	this->grade = grade;
}

EXAM::EXAM(const EXAM&obj) {
	this->subjects = obj.subjects;
	this->students = obj.students;
	this->teachers = obj.teachers;
	this->grade = obj.grade;
}

EXAM EXAM ::create_exam(string subjects, Student sobj, Prepod pobj) {
	EXAM e;
	e.subjects = subjects;
	e.students = sobj.surname;
	e.teachers = pobj.surname;
}


EXAM::~EXAM()
{
}