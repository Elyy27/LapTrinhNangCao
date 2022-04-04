#include <string>
#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int i = 0;
	while (i < s.length()) {
		if (s[i] == s[i + 1]) {
			s.insert(s.begin() + i + 1, '*');
		}
		i++;
	}
	cout << s;
}
