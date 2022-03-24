#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Marks {
    int rollNo;
    string name;
    int chemMarks;
    int mathMarks;
    int phyMarks;
};

        void input(Marks& m) {
            cout << "Input roll number:";
            cin >> m.rollNo;
            cout << "Input name:";
            cin >> m.name;
            cout << "Input Chemistry Marks:";
            cin >> m.chemMarks;
            cout << "Input Math Marks:";
            cin >> m.mathMarks;
            cout << "Input Physics Marks:";
            cin >> m.phyMarks;
        }

        void display(Marks &m) {
            float per = (m.chemMarks + m.mathMarks + m.phyMarks) / 3;
            cout << "Percentage:" << setprecision(2) << fixed << per << endl;
        }

    int main() {
        struct Marks m[5];
        for (int i = 0; i < 5; i++) {
            input(m[i]);
            display(m[i]);
    }
};