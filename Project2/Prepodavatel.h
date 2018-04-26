#ifndef Prepod_
#define Prepod_
#include "Libery.h"
#include "EXAM.h"

class Prepod {
	string name;
	string surname;
	int age;
	string gender;
	string kafedra;
public:
	Prepod();
	Prepod(string name, string, int age, string gender, int group);
	Prepod(const Prepod& obj);
	friend class EXAM;
	friend void printPrepod(Prepod *ss, int size);
	friend void operator >> (istream &in, Prepod &s);
	friend bool operator==(Prepod obj, string kafedra);
	friend bool operator!=(string male, Prepod obj);
	friend bool operator<(Prepod obj1, Prepod obj2);
	friend bool operator>(Prepod obj1, Prepod obj2);
	virtual ~Prepod();
};

#endif
