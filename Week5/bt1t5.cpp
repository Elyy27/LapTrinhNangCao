#include <iostream>
#include <string>

using namespace std;

struct student {
	int roll_no;
	string name;
	int age;
	string address;
	double marks;
};

void input(student& st) {
	cout << "Input student's name:";
	cin.ignore();
	getline(cin, st.name);
	cout << "Input student's age:";
	cin >> st.age;
	getline(cin, st.address);
	cout << "Input student's marks:";
	cin >> st.marks;
};

void output(student& st) {
	cout << "Student's roll number:" << st.roll_no << endl;
	cout << "Student's name:" << st.name << endl;
	cout << "Student's age:" << st.age << endl;
	cout << "Student's marks:" << st.marks << endl;
};

int main()
{
	student st;
	input(st);
	output(st);
	return 0;
}

