#include <string>
#include <iostream>
using namespace std;

int main()
{
    string name1, name2, name3;
    cin >> name1 >> name2 >> name3;
    // getline(cin, name1);
    // getline(cin, name2);
    // getline(cin, name3);
    cout << "Hi " << name3 << ", " << name2 << " and " << name1 << ".";
    return 0;
}