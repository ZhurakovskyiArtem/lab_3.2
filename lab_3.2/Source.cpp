#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double a;
	double b;
	double c;
	double F;
	cout << "x = "; cin >> x;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	if ((x < 0) && (b != 0))
		F = a - (x / (10 + b));
	if ((x > 0) && (b == 0))
		F = (x - a) / (x - c);
	else
		F = 3 * x + 2. / c;
	cout << endl;
	cout << "F = " << F << endl;
	if ((x < 0) && (b != 0))
		F = a - (x / (10 + b));
	else
		if ((x > 0) && (b == 0))
			F = (x - a) / (x - c);
		else
			F = 3 * x + 2. / c;
	cout << endl;
	cout << "F = " << F << endl;
		cin.get();
	return 0;
}