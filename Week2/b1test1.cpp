#include <iostream>

using namespace std;

int USCLN(int a, int b)
{
	if (a % b == 0) return b;
	return USCLN(a % b, b);
}

int main()
{
	int numerator, denominator;
	cin >> numerator >> denominator;
	int temp = USCLN(numerator, denominator);
	numerator = numerator / temp;
	denominator = denominator / temp;
	if (denominator < 0 && numerator > 0) {
		numerator = 0 - numerator;
		denominator = 0 - denominator;
	}
	cout << numerator << "/" << denominator;
	return 0;
}