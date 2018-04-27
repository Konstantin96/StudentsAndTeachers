#include "Students.h"
#include "Prepodavatel.h"

int main() {
	int choice;
	srand(time(NULL));
	cout << endl;
	Student *s;
	Prepod *pr;
	EXAM *es;

	ifstream in_file("in.txt");
	ofstream out_file("exam.txt");
	int sn, tn, en;
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
		if (i == 0)
			subject = "Informations Technology";
		else if (i == 1)
			subject = "Philsophy";
		else if (i == 2)
			subject = "Arifmetika";
		for (int j = 0; j < sn; j++)
		{
			grades = rand() % 5 + 1;
			EXAM e(subject, s[j].getSname(), pr[i].getSname(), grades);
			es[k++] = e;
		}
	}

	cout << "Exam list\n";

	printExam(es, en);
	int nz;
	cout << "\n1 - Student male/female \n";
	cout << "2 - Students po groups \n";
	cout << "Enter number: ";
	cin >> nz;
	switch (nz)
	{
	case 1:
		while (true) {
			cout << "\nChoose a task: \n";
			cout << "0 - exit programm \n";
			cout << "1 - print girls \n";
			cout << "2 - print man \n";
			cin >> choice;
			if (choice == 0)break;
			switch (choice)
			{
			case 1:
				for (int i = 0; i < sn; i++)
					if ("woman" == s[i])
						printStudents(s[i]);
				break;
			case 2:
				for (int i = 0; i < sn; i++)
					if ("man" == s[i])
						printStudents(s[i]);
				break;
			default:
				cout << "You take incorrect number!";
				break;
			}
		}
		break;
	case 2:
		choice = 0;
		while (true)
		{
			cout << "\nChoose a task: \n";
			cout << "0 - exit programm \n";
			cout << "1 - print 172 GROUP \n";
			cout << "2 - print 171 GROUP \n";
			cin >> choice;
			if (choice == 0)break;
			switch (choice)
			{
			case 1:
				for (int i = 0; i < sn; i++)
					if (172 == s[i])
						printStudents(s[i]);
				break;
			case 2:
				for (int i = 0; i < sn; i++)
					if (171 == s[i])
						printStudents(s[i]);
				break;
			default:
				cout << "You take incorrect number!";
				break;
			}

		}

	default:
		break;
	}


	delete[] s;
	delete[] pr;

	system("pause");
}