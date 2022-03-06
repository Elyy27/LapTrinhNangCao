
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

using namespace std;

bool checkAlNum(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (!isalnum(s[i])) return false;
    }
    return true;
}

bool checkLength(string s) {
    if (s.length() <= 15 && s.length() >= 6) return true;
    else return false;
}

bool checkNumStarter(string s) {
    if (isdigit(s[0])) return false;
    else return true;
}

int main()
{
    string username;
    cin >> username;
    if (!checkAlNum(username) || !checkLength(username) || !checkNumStarter(username))
        cout << "Invalid username.";
    else cout << "Valid username.";
    return 0;
}
