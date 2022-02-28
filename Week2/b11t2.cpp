#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAX_N = 1000;
    int n;
    cin >> n;
    double arrayX[MAX_N];
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arrayX[i];
        sum += arrayX[i];
    }
    double mean = sum / n;
    double var;
    for (int i = 0; i < n; i++) {
        var += (arrayX[i] - mean) * (arrayX[i] - mean);
    }
    var = var / n;
    cout << fixed << setprecision(2) << var;
    return 0;

}