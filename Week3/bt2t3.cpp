#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	cin >> n;
	double a[10000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, greater<double>());
	for (int i = 0; i < n; i++) {
		cout << fixed << setprecision(2) << a[i] << " ";
	}
	return 0;
}