#include <iostream>

using namespace std;

class rectangle {
private:
	double w, h;
public:
	void input(double width, double height) {
		w = width;
		h = height;
	}
	double printArea() {
		return w * h;
	}
};


int main()
{
	rectangle rec;
	double width, height;
	cin >> width >> height;
	rec.input(width, height);
	cout << rec.printArea();
	return 0;
}

