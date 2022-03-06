
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);
    int count = 0;
    sentence = " " + sentence;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] != ' ' && sentence[i - 1] == ' ')
            count++;
    }
    cout << count;
    return 0;
}

