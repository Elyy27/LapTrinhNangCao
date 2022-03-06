
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);
    int countAlpha = 0, countNumber = 0, countOther = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (isalpha(sentence[i])) countAlpha++;
        else if (isdigit(sentence[i])) countNumber++;
        else countOther++;
    }
    cout << countAlpha << " " << countNumber << " " << countOther;
    return 0;
}

