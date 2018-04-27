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

	/*cout << "Students:" << endl;
	printStudents(s, sn);
	cout << endl << endl;*/

	ifstream infor("infor.txt");
	infor >> tn;
	pr = new Prepod[tn];

	for (int i = 0; i < tn; i++)
		infor >> pr[i];

	/*cout << "Teachers:" << endl;
	printPrepod(pr, tn);*/

	en = sn*tn;

	es = new EXAM[en];
	string *subject;
	subject = new string[3];
	int k = 0;
	double grades;
	for (int i = 0; i < tn; i++)
	{
		if (i == 0)
			subject[0] = "Informations Technology";
		else if (i == 1)
			subject[1] = "Philsophy";
		else if (i == 2)
			subject[2] = "Arifmetika";
		for (int j = 0; j < sn; j++)
		{
			grades = rand() % 4 + 2;
			EXAM e(subject[i], s[j].getSname(), pr[i].getSname(), grades);
			es[k++] = e;
		}
	}

	cout << "                                               EXAM LIST\n\n";
	 
	printExam(es, en);
	int nz;
start:
	cout << "\n                            0 - Exit this programm \n";
	cout << "                            1 - Students male/female \n";
	cout << "                            2 - Students po groups \n";
	cout << "                            3 - Starshiy/molodoy teacher \n";
	cout << "                            4 - Teachers po kafedram \n";
	cout << "                            5 - Studenty kotorye poluchili 5 \n";
	cout << "                            6 - Studenty kotorye poluchili 2<=0 \n";
	cout << "Enter number: ";
	while (true)
	{
		cin >> nz;
		if (nz == 0)break;
		switch (nz)
		{
		case 1:
		{
			while (true) {
			cout << "\nChoose a task: \n";
			cout << "0 - back to menu \n";
			cout << "1 - print girls \n";
			cout << "2 - print man \n";
			cin >> choice;
			if (choice == 0) { goto start;break; }
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
		}
		break;

		case 2:
		{
			choice = 0;
		while (true)
		{
			cout << "\nChoose a task: \n";
			cout << "0 -  back to menu \n";
			cout << "1 - print 172 GROUP \n";
			cout << "2 - print 171 GROUP \n";
			cin >> choice;
			if (choice == 0) { goto start;break; }
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
		}
		break;

		case 3:
		{choice = 0;
		while (true)
		{
			cout << "\nChoose a task: \n";
			cout << "0 -  back to menu \n";
			cout << "1 - Samiy molodoy uchitel' \n";
			cout << "2 - Samiy starshiy uchitel' \n";
			cin >> choice;
			if (choice == 0) { goto start;break; }
			switch (choice)
			{
			case 1:
			{
				Prepod min = pr[0];
				for (int i = 0; i < tn; i++)
				{
					if (pr[i] < min) {
						min = pr[i];
					}
				}
				printPrepod(min);
			}
			break;
			case 2:
			{
				Prepod max = pr[0];
				for (int i = 0; i < tn; i++)
				{
					if (pr[i] > max) {
						max = pr[i];
					}
				}
				printPrepod(max);
			}
			break;
			default:
				cout << "You take incorrect number!";
				break;
			}


		}}
		break;

		case 4:
		{
			while (true)
			{
				choice = 0;
				cout << "\nChoose a task: \n";
				cout << "0 -  back to menu \n";
				cout << "1 - Informations Technology \n";
				cout << "2 - Philsophy \n";
				cout << "3 - Arifmetika \n";
				cin >> choice;
				if (choice == 0) { goto start;break; }
				switch (choice)
				{
				case 1:
				{
					cout << "\nTeacher Informations Technology:\n";
					for (int i = 0; i < tn; i++)
					{
						if (pr[i] == "Informations Technology") {
							printPrepod(pr[i]);
						}
					}
				}
				break;

				case 2:
				{
					cout << "\nTeacher Philsophy:\n";
					for (int i = 0; i < tn; i++)
					{
						if (pr[i] == "Philsophy") {
							printPrepod(pr[i]);
						}
					}
				}
				break;

				case 3:
				{
					cout << "\nTeacher Arifmetika:\n";
					for (int i = 0; i < tn; i++)
					{
						if (pr[i] == "Arifmetika") {
							printPrepod(pr[i]);
						}
					}
				}
				break;

				default:
					cout << "You take incorrect number!";
					break;
				}
			}
			
		}
		break;

		case 5:
		{
			{
				cout << "\nChoose a task: \n";
				
				cout << "0 -  back to menu \n";
				/*cin >> choice;*/
				/*if (choice == 0) { goto start;break; }*/

				for (int i = 0; i < tn; i++)
				{
					for (int j = 0; j < sn; j++)
					{
						if (es[k].grades == 5)
						{
							es[k].printInfo();
							k++;
						}
					}
				}
			}
				
		}
		break;

		case 6:
		{
			while (true)
			{
				cout << "\nChoose a task: \n";

				cout << "0 -  back to menu \n";
				cin >> choice;
				if (choice == 0) { goto start;break; }

			}
		}
		break;

		default:
			cout << "   You take incorrect number!\n";
			cout << "   Enter number: ";
			break;
		}
	}



	delete[] s;
	delete[] pr;

	system("pause");
}