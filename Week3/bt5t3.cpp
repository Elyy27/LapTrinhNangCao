
#include <iostream>

using namespace std;

int Symmetric(int a[], int n) {
	for (int i = 0; i < n / 2; i++) {
		if (a[i] != a[n - 1 - i])
			return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	int a[10000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (Symmetric(a, n)) cout << "Symmetric array.";
	else cout << "Asymmetric array.";
	return 0;
}
