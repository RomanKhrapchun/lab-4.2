#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	double x, y, xp, xk, dx, A, B;

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
		A = x;
		if (x <= -1)
			B = log10(fabs(cos(5 * x))) + exp((1 / x) + x);
		else
			if (x >= 2. / 5)
				B = sin(5 * x) - sqrt(fabs(1 - x));
			else
				B = sqrt(pow((2 * x - 3), 3) - tan(x));

		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			 << "  |" << setw(10) << setprecision(3) << y
			 << "   |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}