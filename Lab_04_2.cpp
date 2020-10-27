#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |" 
		 << setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
	A = 5 * exp(3 * x);

	if (x <= -1)
		B = 3 + sin(fabs(x));
	else
		if (1 < x && x <= 3)
			B = 2 * exp(1. * x / 4 - 1);
		else
			B = 7 - (sqrt(2) * (1. * x * x * x));

	y = A - B;
	cout << "|" << setw(5) << setprecision(2) << x
		<< " |" << setw(10) << setprecision(3) << y
		<< " |" << endl;
	x += dx;
}
	cout << "---------------------------" << endl;

	system("pause");
	return 0;
}
