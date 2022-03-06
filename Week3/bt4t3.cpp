#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double a[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    double k;
    cin >> k;
    a[n] = k;
    sort(a, a + n + 1);
    for (int i = 0; i <= n; i++) {
        cout << fixed << setprecision(2) << a[i] << " ";
    }
    return 0;
}
