
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
    string text;
    getline(cin, text);
    int countStartSpace;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] != ' ') {
            countStartSpace = i;
            break;
        }
    }
    for (int i = countStartSpace; i < text.length(); i++) {
        while (text[i] == ' ' && (text[i - 1] == ' ' or text[i + 1] == ' ')) {
            text.erase(text.begin() + i);
        }
    }
    cout << text;
    return 0;
}
