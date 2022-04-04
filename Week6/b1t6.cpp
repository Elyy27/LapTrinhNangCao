
#include <iostream>
#include <vector>

using namespace std;

vector<int> print_array(int a[], int n, int d)
{
	vector <int> v;
	for (int i = d ; i < n; i++)
		v.push_back(a[i]);
	for (int i = 0; i <= d; i++)
		v.push_back(a[i]);
	return v;
}
int main()
{
	int n, d;
	cin >> n >> d;
	int a[100000];
	for (int i = 0; i < n; i++) cin >> a[i];
	vector <int> v = print_array(a, n, d);
	for (int i = 0; i < n; i++) cout << v[i] << " ";
	return 0;
}
