#include <iostream>

using namespace std;

bool compare(int a[], int b[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	int a[10000], b[10000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	if (compare(a, b, n)) cout << "YES";
	else { cout << "NO"; }
	return 0;
}