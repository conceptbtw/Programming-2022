#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	double x;
	cout << "Enter the x" << endl;
	cin >> x;
	cout << " = " << pow(pow(x, 8) + pow(8, x), 1 / 8.0) << endl;
	return 0;
}