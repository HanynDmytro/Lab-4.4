
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y;
	double R;
	double xp, xk, dx;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "F" << " |" << endl;
	cout << "----------------------" << endl;
	x = xp;

	while (x <= xk) {
		if (x <= 0) {
			y = (-(R * x) / 6) - R;
		}
		else
			if (0 <= x && x <= R) {
				y = -sqrt(pow(R, 2) - pow(x, 2));
			}
			else
				if (R <= x && x <= 2 * R) {
					y = sqrt((-3 * pow(R, 2)) - pow(x, 2) + (4 * x * R));
				}
				else {
					y = R;
				}
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	cin.get();
	return 0;
}