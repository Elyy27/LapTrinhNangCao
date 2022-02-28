#include <iomanip>
#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
    int  a, b, c;
    double p, S;
    cin >> a >> b >> c;
    if (abs(a - b) < c && c < a + b)
    {
        p = double(a + b + c) / 2;
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << fixed << setprecision(2) << S;
    }
    else { cout << "invalid"; }
    return 0;
}