#include "Students.h"
#include "Prepodavatel.h"

int main() {
	srand(time(NULL));
	cout << endl;
	Student *s;
	Prepod *pr;
	EXAM *es;

	ifstream in_file("in.txt");
	ofstream out_file("exam.txt");
	int sn,tn,en;
	in_file >> sn;
	s = new Student[sn];

	for (int i = 0; i < sn; i++)
		in_file >> s[i];

	cout << "Students:" << endl;
	printStudents(s, sn);
	cout << endl << endl;

	ifstream infor("infor.txt");
	infor >> tn;
	pr = new Prepod[tn];
	
	for (int i = 0; i < tn; i++)
		infor >> pr[i];

	cout << "Teachers:" << endl;
	printPrepod(pr, tn);
	cout << endl << endl;

	en = sn*tn;

	es = new EXAM[en];
	string subject;
	int k = 0;
	double grades;
	for (int i = 0; i < tn; i++)
	{
		cout << "Enter subjects for current teacher\n";
		cin>>subject;
		for (int j = 0; j < sn; j++)
		{
			grades = rand() % 5+1 ;
			EXAM e(subject, s[j].getSname(), pr[i].getSname(), grades);
			es[k++] = e;
		}
	}

	cout << "Exam list\n";

	printExam(es, en);

	delete[] s;
	delete[] pr;

	system("pause");
}