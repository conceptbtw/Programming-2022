#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int x;
	cout << "Enter the first number" << endl;
	cin >> x;
	int y;
	cout << "Enter the second number" << endl;
	cin >> y;
	cout << "Arithmetic average = " << (x + y) / 2.0 << endl;
	cout << "Geometric average = " << pow(x + y,1 / 2.0) << endl;
	return 0;
}