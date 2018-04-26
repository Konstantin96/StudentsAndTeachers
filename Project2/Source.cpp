#include "Students.h"
#include "Prepodavatel.h"

int main() {
	cout << endl;
	Student *s;
	ifstream in_file("in.txt");
	int n;
	in_file >> n;
	s = new Student[n];

	for (int i = 0; i < n; i++)
		in_file >> s[i];

	printStudents(s, n);
	cout << endl << endl;
	

	Prepod *pr;
	ifstream infor("infor.txt");
	int x;
	infor >> x;
	pr = new Prepod[x];

	for (int i = 0; i < x; i++)
		infor >> pr[i];
	printPrepod(pr, x);
	cout << endl << endl;

	system("pause");
}