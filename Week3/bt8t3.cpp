
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
    string text;
    getline(cin, text);
    for (int i = 0; i < text.length(); i++) {
        if (i > text.length() - 4 || text.substr(i, 4) != "Zues") cout << text[i];
        //if (text.substr(i, 4) != "Zues") cout << text[i];
        else {
            cout << "Zeus";
            i += 3;
        }
    }   
    return 0;
}

