#pragma once
#include "Libery.h"
#include "Students.h"
#include "Prepodavatel.h"
class Student;
class Prepod;

class EXAM
{
private:
	string subjects;
	string teachers;
	string students;
	double grade;
public:
	EXAM()=default;
	friend void printExam(EXAM*, int);
	void printInfo()
	{
		cout << subjects << "\t" << students << "\t\t" << teachers << "\t" << grade << endl;
	}
	EXAM(string subjects, string teachers, string students, double grade);
	EXAM(string, Student sobj, Prepod pobj, double);
	EXAM(const EXAM&);
	void create_exam(string subjects, Student sobj, Prepod pobj,double);
	virtual ~EXAM();
};

