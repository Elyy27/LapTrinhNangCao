#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 7;
    do {
        cout << i << " ";
        i += 7;
    } while (i <= n);
    return 0;
}