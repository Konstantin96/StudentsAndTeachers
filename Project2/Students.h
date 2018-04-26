#ifndef _STUDENT_H
#define _STUDENT_H
#include "Libery.h"
#include "EXAM.h"

class Student {
	string name;
	string surname;
	int age;
	string gender;
	int group;
public:
	Student();
	Student(string name, string, int age, string gender, int group);
	Student(const Student& obj);
	friend class EXAM;
	friend void printStudents(Student s);
	string getSname() { return surname; }
	friend void printStudents(Student *ss, int size);
	friend void operator >> (istream &in, Student &s);
	friend bool operator==(string male, Student obj);
	friend bool operator!=(string male, Student obj);
	friend bool operator<(Student obj1, Student obj2);
	friend bool operator>(Student obj1, Student obj2);
	virtual ~Student();
};

#endif