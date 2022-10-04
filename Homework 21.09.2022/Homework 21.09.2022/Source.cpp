#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	double r;
	cout << "Enter the radius (R)" << endl;
	cin >> r;
	cout << "S = " << 3.14 * r * r << endl;
	cout << "L = " << 2 * 3.14 * r << endl;
	cout << "V = " << 4.0 / 3.0 * 3.14 * r * r * r << endl;
	return 0;
}