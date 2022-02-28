#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int i = 1;
    double num = x, den = i;
    double sum = 1, oldSum = 0;
    while (sum - oldSum > 0.001) {
        oldSum = sum;
        sum += num / den;
        i++;
        num *= x;
        den *= i;
    }
    cout << fixed << setprecision(4) << sum;
    return 0;
}