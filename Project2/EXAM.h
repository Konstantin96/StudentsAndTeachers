#pragma once
#include "Libery.h"
#include "Students.h"
#include "Prepodavatel.h"

class EXAM
{
private:
	string subjects;
	string teachers;
	string students;
	double grade;
public:
	EXAM()=default;
	EXAM(string subjects, string teachers, string students, double grade);
	EXAM(const EXAM&);
	EXAM create_exam(string subjects, Student sobj, Prepod pobj);
	virtual ~EXAM();
};

