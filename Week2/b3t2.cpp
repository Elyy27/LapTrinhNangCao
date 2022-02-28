#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int lowerBound, upperBound;
    cin >> lowerBound >> upperBound;
    for (int i = sqrt(lowerBound); i <= sqrt(upperBound); i++) {
        cout << i * i << " ";
    }
    return 0;
}