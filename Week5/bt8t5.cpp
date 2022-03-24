# include <iostream>
# include <string>

using namespace std;

struct customer {
	string name;
	string accountNumber;
	int balance;
};
void input(customer& a) {
	cout << "Name :";
	cin.ignore();
	getline(cin, a.name);
	cout << "Account Number :"; 
	getline(cin, a.accountNumber);
	cout << "Balance :"; 
	cin >> a.balance;

};
void output(customer& a) {
	cout << a.name << endl;
	cout << a.accountNumber << endl;
	cout << a.balance << endl;
};

int main() {
	int x = 0, i;
	cin >> x;
	struct customer s[x + 1];
	for (i = 0; i < x; i++) {
		input(s[i]);
	};
	for (i = 0; i < x; i++) {
		if (s[i].balance < 200) output(s[i]);
	};
	return 0;
};